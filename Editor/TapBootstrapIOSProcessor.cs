using System.IO;
using TapTap.Common.Editor;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
using UnityEngine;

namespace TapTap.Bootstrap.Editor
{
    public static class TapBootstrapIOSProcessor
    {
        // 添加标签，unity导出工程后自动执行该函数
        [PostProcessBuild(100)]
        public static void OnPostprocessBuild(BuildTarget buildTarget, string path)
        {
            if (buildTarget != BuildTarget.iOS) return;
            // 获得工程路径
            var projPath = TapCommonCompile.GetProjPath(path);
            var proj = TapCommonCompile.ParseProjPath(projPath);
            var target = TapCommonCompile.GetUnityTarget(proj);

            if (TapCommonCompile.CheckTarget(target))
            {
                Debug.LogError("Unity-iPhone is NUll");
                return;
            }

            var parentFolder = Directory.GetParent(Application.dataPath).FullName;

            var plistFile = TapFileHelper.RecursionFilterFile(parentFolder + "/Assets/Plugins/", "TDS-Info.plist");

            if (!plistFile.Exists)
            {
                Debug.LogError("TapSDK Can't find TDS-Info.plist in Project/Assets/Plugins/!");
            }

            TapCommonCompile.HandlerPlist(path, plistFile.FullName);
            
            HandlerAppleSignIn(proj, target, path, plistFile.FullName);
            
            if (TapCommonCompile.HandlerIOSSetting(path,
                Application.dataPath,
                "TapBootstrapResource",
                "com.taptap.tds.bootstrap",
                "Bootstrap",
                new[] {"TapBootstrapResource.bundle"},
                target, projPath, proj))
            {
                Debug.Log("TapBootstrap add Bundle Success!");
                return;
            }

            Debug.LogError("TapBootstrap add Bundle Failed!");
        }

        private static void HandlerAppleSignIn(PBXProject proj, string target, string path, string plistPath)
        {
            var appleSignInEnable = TapCommonCompile.GetValueFromPlist(plistPath, "Apple_SignIn_Enable");
            var appleSignInEnableKey = "com.apple.developer.applesignin";
            if (string.IsNullOrEmpty(appleSignInEnable) || appleSignInEnable.Equals("false"))
            {
                Debug.LogError("TapSDK can't open Apple SignIn in XCode, Please Check Info.plist.");
                return;
            }

            var entitleFilePath = $"{path}/Unity-iPhone.entitlements";
            var tempEntitlements = new PlistDocument();
            if (!((tempEntitlements.root[appleSignInEnableKey] = new PlistElementArray()) is PlistElementArray arrSigninWithApple))
            {
                Debug.LogError($"TapSDK can't find {appleSignInEnableKey}.");
                return;
            }
            arrSigninWithApple.values.Add(new PlistElementString("Default"));
            proj.AddCapability(target, PBXCapabilityType.SignInWithApple, entitleFilePath);
            tempEntitlements.WriteToFile(entitleFilePath);
        }
    }
}
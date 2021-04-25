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

            Debug.LogWarning("TapBootstrap add Bundle Failed!");
        }

    }
}
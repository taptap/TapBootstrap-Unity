# 使用 TapTap.Bootstrap

## 使用前提

使用 TapTap.Bootstrap 前提是必须依赖以下库:
* [TapTap.Common](https://github.com/TapTap/TapCommon-Unity.git)
* [TapTap.Login](https://github.com/TapTap/TapLogin-Unity.git)
* [LeanCloud.Storage](https://github.com/leancloud/csharp-sdk)

## 命名空间

```c#
using TapTap.Bootstrap;
```

## 接口描述

### 1.初始化

#### TapBootstrap 会根据 TapConfig 中的 TapDBConfig 配置来进行 TapDB 的自动初始化。

##### 开启 TapDB
```c#
var config = new TapConfig.TapConfigBuilder()
                .ClientID("client_id")
                .ClientSecret("client_secret")
                .ServerURL("https://ikggdre2.lc-cn-n1-shared.com")
                .RegionType(RegionType.CN)
                .TapDBConfig(true,"channel","gameVersion",true)
                .Builder();
```
##### 关闭 TapDB
```c#
var config = new TapConfig.TapConfigBuilder()
                .ClientID("client_id")
                .ClientSecret("client_secret")
                .ServerURL("https://ikggdre2.lc-cn-n1-shared.com")
                .RegionType(RegionType.CN)
//#             .TapDBConfig(false,null,null,false)
                .EnableTapDB(false)
                .Builder();
```
##### 初始化
```c#
TapBootstrap.Init(config);
```

### 2.账户系统

> 登陆成功之后，都会得到一个 `TDSUser` 实例

#### 使用 TapTap OAuth 授权结果直接登陆账户系统

```c#
var tdsUser = await TDSUser.LoginWithTapTap();
```

#### 游客登陆
```c#
var tdsUser = await TDSUser.LoginAnonymously();
```

#### 绑定第三方平台账号
```c#
var tdsUser = await TDSUser.LoginWithAuthData(Dictionary<string, object> authData, string platform,
            LCUserAuthDataLoginOption option = null);
```

#### 退出登陆
```c#
TDSUser.Logout();
```



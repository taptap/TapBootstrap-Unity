# 使用 TapTap.Bootstrap
## 使用前提

使用 TapTap.Bootstrap 前提是必须依赖以下库:
* [TapTap.Common](https://github.com/TapTap/TapCommon-Unity.git)

## 命名空间

```c#
using TapTap.Bootstrap;
```

## 接口描述

### 1.初始化

> TapBootstrap 会根据 TapConfig 中的 TapDBConfig 配置来进行 TapDB 的自动初始化。

开启 TapDB
```c#
var config = new TapConfig.TapConfigBuilder()
                .ClientID("client_id")
                .ClientSecret("client_secret")
                .RegionType(RegionType.CN)
                .TapDBConfig(true,"channel","gameVersion",true)
                .Builder();
```
关闭 TapDB
```c#
var config = new TapConfig.TapConfigBuilder()
                .ClientID("client_id")
                .ClientSecret("client_secret")
                .RegionType(RegionType.CN)
//#             .TapDBConfig(false,null,null,false)
                .EnableTapDB(false)
                .Builder();
```
初始化 TapSDK
```c#
TapBootstrap.Init(config);
```

### 2.登陆

```c#
TapBootstrap.Login(LoginType loginType, string[] permissions);
```

### 3.设置语言
```c#
TapBootstrap.SetPreferLanguage(TapLanguage tapLanguage);
```

### 4.绑定TapTap账号（已废弃）
```c#
TapBootstrap.Bind(LoginType loginType, string[] permissions);
```

### 5.注册用户状态回调

```c#
TapBootstrap.RegisterUserStatusChangedListener(ITapUserStatusChangedListener listener); 
```

### 6.注册登陆回调
```c#
TapBootstrap.RegisterLoginResultListener(ITapLoginResultListener listener);
```

### 7.获取用户信息
```c#
TapBootstrap.GetUser(Action<TapUser,TapError> action);
```

### 8.获取详细用户信息
```c#
TapBootstrap.GetDetailUser(Action<TapUserDetail, TapError> action);
```

### 9.篝火测试资格
```c#
TapBootstrap.GetTestQualification(Action<bool,TapError> action);
```

### 10.获取AccessToken
```c#
TapBootstrap.GetDetailUser(Action<TapUserDetail, TapError> action);
```

### 11.登出
```c#
TapBootstrap.Logout();
```
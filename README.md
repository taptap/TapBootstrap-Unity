# [使用 TapTap.Bootstrap ](./Documentation/README.md)

## 使用前提

使用 TapTap.Bootstrap 前提是必须依赖以下库:
* [TapTap.Common](https://github.com/TapTap/TapCommon-Unity.git)

## 命名空间

```c#
using TapTap.Bootstrap;
```

## 接口描述

### 初始化

```c#
TapConfig config = new TapConfig(string clientId,bool isCN);
TapBootstrap.Init(config);
```

### 登陆

```c#
TapBootstrap.Login(LoginType loginType, string[] permissions);
```

### 设置语言
```c#
TapBootstrap.SetPreferLanguage(TapLanguage tapLanguage);
```

### 绑定TapTap账号
```c#
TapBootstrap.Bind(LoginType loginType, string[] permissions);
```

### 注册用户状态回调

```c#
TapBootstrap.RegisterUserStatusChangedListener(ITapUserStatusChangedListener listener); 
```

### 注册登陆回调
```c#
TapBootstrap.RegisterLoginResultListener(ITapLoginResultListener listener);
```

### 获取用户信息
```c#
TapBootstrap.GetUser(Action<TapUser,TapError> action);
```

### 获取详细用户信息
```c#
TapBootstrap.GetDetailUser(Action<TapUserDetail, TapError> action);
```

### 获取AccessToken
```c#
TapBootstrap.GetDetailUser(Action<TapUserDetail, TapError> action);
```

### 登出
```c#
TapBootstrap.Logout();
```

### 打开用户中心
```c#
TapBootstrap.OpenUserCenter();
```
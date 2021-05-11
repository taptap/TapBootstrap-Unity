# ChangeLog

## 2.1.1

### Feature

* 新增篝火测试资格校验
    ```
  TapBootstrap.GetTestQualification((bool, error)=>{ }):
    ```
* 通过 TapConfig 进行初始化配置
  ```c#
  //建议使用以下 TapConfig 构造方法进行初始化
  var config = new TapConfig.Builder()
                .ClientID("client_id")
                .ClientSecret("client_secret")
                .RegionType(RegionType.CN)
                .TapDBConfig(true, "gameChannel", "gameVersion", true)
                .ConfigBuilder();
  TapBootstrap.Init(config);
  ```
### Breaking changes

* LoginType 删除 Apple、Guest 登陆方式
* TDS-Info.plist 删除 Apple_SignIn_Enable 配置
* 废弃 Bind 接口

### Dependencies

* TapTap.Common v2.1.1

## 2.1.0

### Feature

* 支持性改动用于 TapTap.Friends

### Dependencies

* TapTap.Common v2.1.0

## 2.0.0

### Feature

* TapTap Bootstrap

### Dependencies

* TapTap.Common v2.0.0
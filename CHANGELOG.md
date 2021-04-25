# ChangeLog

## 2.1.0

### Feature

* 新增篝火测试资格交验
    ```
    Bootstrap.GetTestQualification(bool,tapError=>{}):
    ```
* TapDB 通过 TapConfig 进行自动初始化
* 支持性改动用于 TapTap.Friends

### Breaking changes

* 废弃 Bind 接口
* LoginType 删除 Apple、Guest 登陆方式
* TapConfig Refactor Constructor
  ```c#
  //建议使用以下 TapConfig 构造方法进行初始化
  var config = new TapConfig.TapConfigBuilder()
               .ClientID("client_id")
               .ClientSecrect("client_secret")
               .RegionType(RegionType.CN)
               .Builder();
  
  Bootstrap.Init(config);
  ```

### Dependencies

* TapTap.Common v2.1.0

## 2.0.0

### Feature

* TapTap Bootstrap

### Dependencies

* TapTap.Common v2.0.0
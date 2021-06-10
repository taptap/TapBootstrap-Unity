# ChangeLog

## 2.1.4

### Optimization and fixed bugs

- 优化多语言相关

### Dependencies

- TapTap.Common v2.1.4

## 2.1.3

### Feature

* 新增繁中、日文、韩文、泰文和印尼语多语言配置


## 2.1.2

### BreakingChange

* 废弃 OpenUserCenter 接口

### Dependencies

* TapTap.Common v2.1.2

## 2.1.1

### Feature

* 新增篝火测试资格校验
    ```
  TapBootstrap.GetTestQualification((bool, error)=>{ }):
    ```
* 通过 TapConfig 进行初始化配置
  * 新增 TapDBConfig 用于 TapDB 初始化配置
  * 新增 ClientSecret 用于 TapSDK 初始化
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
* TapConfig 构造方法参数修改

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
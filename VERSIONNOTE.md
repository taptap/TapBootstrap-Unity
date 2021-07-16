TapSDK 3.0 开始，我们在单纯的 TapTap 登录之外，还提供了一个内建账户系统供游戏使用：开发者可以直接用 TapTap OAuth 授权的结果生成一个游戏内的账号（TDSUser），然后用该账号保存更多玩家数据。同时，我们也支持将更多第三方认证登录的结果绑定到这一账号上来（以及后续的解绑操作）。

### New Feature

- 新增 `TDSUser` 用于内建账户系统操作

### BreakingChange

-  `TapBootstrap` 接口仅保留 `TapBootstrap.Init(tapConfig)` 接口

### Dependencies

- LeanCloud.Storage v0.8.2
- TapTap.Login v3.0.0
- TapTap.Common v3.0.0
//
//  TapSDKImpl.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/2/23.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TapBootstrapSDK/TapLoginResultDelegate.h>
#import <TapBootstrapSDK/TapUserStatusChangedDelegate.h>
#import <TapBootstrapSDK/TDSNetManager.h>
#import <TapBootstrapSDK/AccessToken.h>
#import <TapCommonSDK/TapCommonSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface TapSDKImpl : NSObject
@property (nonatomic, weak) id<TapLoginResultDelegate>loginResultDelegate;
@property (nonatomic, weak) id<TapUserStatusChangedDelegate>userStatusChangeDelegate;

@property (nonatomic, strong) TapConfig *config;
@property (nonatomic, copy) NSDictionary *defaultQueries;

+ (instancetype)shareInstance;

+ (void)initWithSDKConfig:(TapConfig *)config;

+ (void)refreshToken;

+ (void)loginByTap:(NSArray *)permissions;

+ (void)bindWithTapTap:(NSArray *)permissions;

+ (void)loginByGuest;

+ (void)loginByApple;

+ (void)getUserInfo:(TDSInnerUserInfoHandler)handler;

+ (void)getUserDetail:(TDSInnerUserDetailHandler)handler;

+ (AccessToken *)currentToken;

+ (void)logout:(NSError *_Nullable)error;

+ (BOOL)handleOpenURL:(NSURL *)url;

+ (void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (nullable TDSAccount *)getAccount;
@end

NS_ASSUME_NONNULL_END

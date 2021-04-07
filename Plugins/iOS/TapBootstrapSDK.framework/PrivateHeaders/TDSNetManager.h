//
//  TDSNetManager.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/2/23.
//

#import <Foundation/Foundation.h>
#import <TapBootstrapSDK/TapUser.h>
#import <TapBootstrapSDK/TapUserDetails.h>
#import <TapBootstrapSDK/TDSUserInfoList.h>
NS_ASSUME_NONNULL_BEGIN

typedef void (^TDSInnerSimpleHandler)(NSError *_Nullable error);
typedef void (^TDSInnerUserInfoHandler)(TapUser *_Nullable userInfo, NSError *_Nullable error);
typedef void (^TDSInnerUserDetailHandler)(TapUserDetails *_Nullable userDetail, NSError *_Nullable error);
typedef void (^TDSInnerMultiUserInfoHandler)(TDSUserInfoList *_Nullable userList, NSError *_Nullable error);

@interface TDSNetManager : NSObject

+ (void)refreshToken;

#pragma mark - handle bind taptap
+ (void)handleTapTapBind:(NSDictionary *_Nullable)args error:(NSError *_Nullable)error;

+ (void)handleThirdLoginSuccess:(NSDictionary *_Nullable)args type:(int)loginType;

+ (void)handleThirdLoginCancel;

+ (void)handleThirdLoginFail:(NSError *)error;

+ (void)getUserInfo:(TDSInnerUserInfoHandler)handler;

+ (void)getUserDetail:(TDSInnerUserDetailHandler)handler;

+ (void)getUserInfoMulti:(NSArray *)userIdArray
                       handler:(TDSInnerMultiUserInfoHandler)handler;

@end

NS_ASSUME_NONNULL_END

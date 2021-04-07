//
//  TapBootstrapService.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/2/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef void (^ServiceCallback)(NSString *result);
@interface TapBootstrapService : NSObject

+ (void)registerLoginResultListener:(ServiceCallback)callback;

+ (void)registerUserStatusChangedListener:(ServiceCallback)callback;

+ (void)clientID:(NSString *)clientID regionType:(NSNumber *)isCN;

+ (void)login:(NSNumber *)type permissions:(NSArray *_Nullable)permissions;

+ (void)bind:(NSNumber *)type permissions:(NSArray *_Nullable)permissions;

+ (void)getUser:(ServiceCallback)callback;

+ (void)getUserDetails:(ServiceCallback)callback;

+ (void)getCurrentToken:(ServiceCallback)callback;

+ (void)logout;

+ (void)openUserCenter;

+ (void)preferredLanguage:(NSNumber *)language;
@end

NS_ASSUME_NONNULL_END

//
//  TokenManager.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/2/20.
//

#import <Foundation/Foundation.h>
#import "AccessToken.h"

NS_ASSUME_NONNULL_BEGIN

@interface TokenManager : NSObject
@property (nonatomic, strong, nullable) AccessToken *currentToken;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)shareInstance;

- (void)setToken:(AccessToken *)token;

- (void)logout;
@end

NS_ASSUME_NONNULL_END

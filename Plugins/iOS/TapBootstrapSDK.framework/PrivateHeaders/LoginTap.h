//
//  LoginTap.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/2/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LoginTap : NSObject
+ (instancetype)shareInstance;

- (void)login:(NSArray *)permissions;

- (void)bind:(NSArray *)permissions;

@end

NS_ASSUME_NONNULL_END

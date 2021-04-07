//
//  LoginApple.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/2/23.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LoginApple : NSObject

+ (instancetype)shareInstance;

- (void)login;

+ (void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END

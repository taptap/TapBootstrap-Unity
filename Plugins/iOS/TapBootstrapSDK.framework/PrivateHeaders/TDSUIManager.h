//
//  TDSUIManager.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/3/1.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString * const TDSUCEntryTypeMoment;
extern NSString * const TDSUCEntryTypeFriend;

@interface TDSUIManager : NSObject
+ (instancetype)sharedManager;

+ (void)showUserCenter;

+ (UIImage *)getImageFromBundle:(NSString *)name;

+ (NSString *)getTranslatedString:(NSString *)key;

- (void)logout;
@end

NS_ASSUME_NONNULL_END

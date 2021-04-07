//
//  TDSUCHeadView.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/3/11.
//

#import <UIKit/UIKit.h>
#import "TapUserDetails.h"

NS_ASSUME_NONNULL_BEGIN

@interface TDSUCHeadView : UIView
@property (nonatomic, copy) void (^ copyIdBlock)(NSString *text);

- (void)loadData:(TapUserDetails *)userDetail;
@end

NS_ASSUME_NONNULL_END

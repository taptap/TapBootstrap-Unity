//
//  TDSUserCenterView.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/3/1.
//

#import <UIKit/UIKit.h>
#import "TapUserDetails.h"

NS_ASSUME_NONNULL_BEGIN
@protocol TDSUserCenterProtocol <NSObject>

- (void)onReloadData;
- (void)onClose;
@end

@interface TDSUserCenterView : UIView

@property (nonatomic, weak) id<TDSUserCenterProtocol> delegate;

- (void)loadData:(TapUserDetails *)userDetail;
@end

NS_ASSUME_NONNULL_END

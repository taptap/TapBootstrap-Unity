//
//  TDSUCEntryCell.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/3/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSUCEntryCell : UITableViewCell

- (void)setTitleText:(NSString *)title icon:(UIImage *)image needSeparator:(BOOL)needSeparator;
@end

NS_ASSUME_NONNULL_END

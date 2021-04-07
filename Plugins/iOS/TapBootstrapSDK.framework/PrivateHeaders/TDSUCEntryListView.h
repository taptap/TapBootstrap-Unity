//
//  TDSUCEntryListView.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/3/11.
//

#import <UIKit/UIKit.h>
#import "TapUserDetails.h"

NS_ASSUME_NONNULL_BEGIN

@interface TDSUCEntryListView : UIView
@property (nonatomic, copy) void (^ entryDicClickBlock)(NSString *type);

- (void)loadData:(NSArray *)dataSource;
@end

NS_ASSUME_NONNULL_END

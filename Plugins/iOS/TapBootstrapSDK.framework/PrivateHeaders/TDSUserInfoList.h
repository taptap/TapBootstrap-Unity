//
//  TDSUserInfoList.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/3/12.
//

#import <Foundation/Foundation.h>
#import "TapUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface TDSUserInfoList : NSObject
@property (nonatomic) NSMutableArray<TapUser *> *list;
@end

NS_ASSUME_NONNULL_END

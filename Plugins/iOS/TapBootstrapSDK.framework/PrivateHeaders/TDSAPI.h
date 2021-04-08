//
//  TDSAPI.h
//  TapBootstrapSDK
//
//  Created by Bottle K on 2021/2/19.
//

#import <Foundation/Foundation.h>
#import <TapCommonSDK/TDSNetExecutor.h>

NS_ASSUME_NONNULL_BEGIN

static NSString *const TDS_TAPTAP_LOGIN = @"/api/v1/authorization/taptap";
static NSString *const TDS_GUEST_LOGIN = @"/api/v1/authorization/device";
static NSString *const TDS_APPLE_LOGIN = @"/api/v1/authorization/apple";

static NSString *const TDS_TAPTAP_BIND = @"/api/v1/authorization/taptap/bind";

static NSString *const TDS_USER_INFO = @"/api/v1/user/info";
static NSString *const TDS_USER_DETAIL = @"/api/v1/user/detail";

static NSString *const TDS_TOKEN_REFRESH = @"/api/v1/token";

static NSString *const TDS_FRIEND_USER_INFO_MULTI = @"/api/v1/user/multi";

@interface TDSAPI : NSObject
+ (instancetype)sharedInstance;

- (TDSNetExecutor *)doWithRequest:(TDSNetRequestModel *)request;

- (NSString *)getXUAString;

+ (NSString *)getWSBaseUrl;
@end

NS_ASSUME_NONNULL_END

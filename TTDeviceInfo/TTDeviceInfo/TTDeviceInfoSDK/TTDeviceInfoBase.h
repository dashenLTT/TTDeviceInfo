//
//  TTDeviceInfoBase.h
//  TTDeviceInfo
//
//  Created by 梁腾 on 2020/10/29.
//  Copyright © 2020 梁腾. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TTDeviceInfoBase : NSObject

/**
 获取设备唯一标识,钥匙串保存,卸载重装后,保持不变
 
 @return 设备唯一标识
 
 */

+ (NSString *)uuid;

/**
 获取设备型号
 
 @return e.g. iphone SE
 */

+ (NSString *)deviceModel;

/**
 运营商code
 
 @return 获取运营商code
 iOS12之后可能是两个运营商, 所以返回字符串数组
 */

+ (NSString *)carrierCode;

/**
 运营商
 
 @return 获取运营商名字
 
 iOS12之后可能是两个运营商，所以返回字符串数组
 */
+ (NSArray *)carrierName;


@end

NS_ASSUME_NONNULL_END

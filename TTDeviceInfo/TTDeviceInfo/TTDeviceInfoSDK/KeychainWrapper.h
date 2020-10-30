//
//  KeychainWrapper.h
//  TTDeviceInfo
//
//  Created by 梁腾 on 2020/10/29.
//  Copyright © 2020 梁腾. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KeychainWrapper : NSObject
+ (id)searchDateWithService:(NSString *)service;
+ (BOOL)saveDate:(id)date withService:(NSString *)service;
@end

NS_ASSUME_NONNULL_END

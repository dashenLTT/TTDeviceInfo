//
//  ViewController.m
//  TTDeviceInfo
//
//  Created by 梁腾 on 2020/10/29.
//  Copyright © 2020 梁腾. All rights reserved.
//

#import "ViewController.h"
#import "TTDeviceInfoBase.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    /** 获取uuid   */
    NSString *uuidStr = [TTDeviceInfoBase uuid];
    /** 获取设备型号   */
    NSString *deviceModel = [TTDeviceInfoBase deviceModel];
    /** 获取运营商code   */
    NSString *deviceCode = [TTDeviceInfoBase carrierCode];
    NSLog(@"%@",deviceCode);
    
    
    // Do any additional setup after loading the view.
}


@end

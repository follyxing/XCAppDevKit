//
//  XCAppUtil.m
//  XCAppDevKit
//
//  Created by 邢程 on 2017/7/5.
//  Copyright © 2017年 XingCheng. All rights reserved.
//

#import "XCAppUtil.h"
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
@implementation XCAppUtil
BOOL XCIsBelowIOS7()
{
    return ![UIImage instancesRespondToSelector:@selector(imageWithRenderingMode:)];
}

BOOL XCIsBelowIOS8()
{
    return ![UIImage instancesRespondToSelector:@selector(imageAsset)];
}

BOOL XCIsBelowIOS9()
{
    return ![UIImage instancesRespondToSelector:@selector(imageFlippedForRightToLeftLayoutDirection)];
}

BOOL XCIsBelowIOS10()
{
    return ![UIImage instancesRespondToSelector:@selector(imageRendererFormat)];
}
CGFloat XCScreenWidth()
{
    return  [[UIScreen mainScreen] bounds].size.width;
}

CGFloat XCScreenHeight()
{
    return  [[UIScreen mainScreen] bounds].size.height;
}

BOOL XCIsLocationServicesAvailableOrNotDetermined()
{
    CLAuthorizationStatus status = [CLLocationManager authorizationStatus];
    return ([CLLocationManager locationServicesEnabled] &&
            (status == kCLAuthorizationStatusAuthorizedAlways ||
             status == kCLAuthorizationStatusAuthorizedWhenInUse ||
             status == kCLAuthorizationStatusNotDetermined));
}


@end

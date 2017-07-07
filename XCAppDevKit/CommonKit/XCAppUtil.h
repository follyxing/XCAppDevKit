//
//  XCAppUtil.h
//  XCAppDevKit
//
//  Created by 邢程 on 2017/7/5.
//  Copyright © 2017年 XingCheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XCAppUtil : NSObject

/**
 *  @brief Check device's OS version is below iOS 7.
 *
 *  @return YES if OS verion is below 7.
 */
BOOL XCIsBelowIOS7();

/**
 *  @brief Check device's OS version is below iOS 8.
 *
 *  @return YES if OS verion is below 8.
 */
BOOL XCIsBelowIOS8();

/**
 *  @brief Check device's OS version is below iOS 9.
 *
 *  @return YES if OS verion is below 9.
 */
BOOL XCIsBelowIOS9();

/**
 *  @brief Check device's OS version is below iOS 10.
 *
 *  @return YES if OS verion is below 10.
 */
BOOL XCIsBelowIOS10();


/**
 Screen Width

 @return width of screen
 */
CGFloat XCScreenWidth();


/**
 Screen Height

 @return height of screen
 */
CGFloat XCScreenHeight();

/**
 Home path

 @return home path
 */
NSString * XCHomePath();

/**
 Document path

 @return document path
 */
NSString * XCDocumentPath();

/**
 Cache path

 @return cache path
 */
NSString * XCCachePath();

/**
 Tmp path

 @return tmp path
 */
NSString * XCTmpPath();

/**
 *  @brief Check whether location services available. This is an expensive call. It should not be called frequently or from performance sensitive code.
 *
 *  @return YES if location services enabled and authorized, NO otherwise.
 */
BOOL XCIsLocationServicesAvailableOrNotDetermined();
@end

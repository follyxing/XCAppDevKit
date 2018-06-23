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
 value of [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

 @return app version
 */
NSString * XCAppVersion(void);
/**
 *  @brief Check device's OS version is below iOS 7.
 *
 *  @return YES if OS verion is below 7.
 */
BOOL XCIsBelowIOS7(void);

/**
 *  @brief Check device's OS version is below iOS 8.
 *
 *  @return YES if OS verion is below 8.
 */
BOOL XCIsBelowIOS8(void);

/**
 *  @brief Check device's OS version is below iOS 9.
 *
 *  @return YES if OS verion is below 9.
 */
BOOL XCIsBelowIOS9(void);

/**
 *  @brief Check device's OS version is below iOS 10.
 *
 *  @return YES if OS verion is below 10.
 */
BOOL XCIsBelowIOS10(void);
/**
 *  @brief Check device's OS version is below iOS 11.
 *
 *  @return YES if OS verion is below 11.
 */
BOOL XCIsBelowIOS11(void);
/**
 Screen Width

 @return width of screen
 */
CGFloat XCScreenWidth(void);


/**
 Screen Height

 @return height of screen
 */
CGFloat XCScreenHeight(void);

/**
 Home path

 @return home path
 */
NSString * XCHomePath(void);

/**
 Document path

 @return document path
 */
NSString * XCDocumentPath(void);

/**
 Cache path

 @return cache path
 */
NSString * XCCachePath(void);

/**
 Tmp path

 @return tmp path
 */
NSString * XCTmpPath(void);

/**
 Current application language

 @return current language
 */
NSString * XCCurrentLanguage(void);

BOOL XCIsBlankString(NSString* str);

/**
 *  @brief Check whether location services available. This is an expensive call. It should not be called frequently or from performance sensitive code.
 *
 *  @return YES if location services enabled and authorized, NO otherwise.
 */
BOOL XCIsLocationServicesAvailableOrNotDetermined(void);
@end

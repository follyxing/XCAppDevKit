//
//  UIColor+XCExtension.h
//  XCAppDevKit
//
//  Created by 邢程 on 2017/7/5.
//  Copyright © 2017年 XingCheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (XCExtension)
+(UIColor *)colorWithHexString:(NSString *)hexString;

+(UIColor *)colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;

/**
 * @brief Generate a HEX string for UIColor .
 *
 * @return A NSString with HEX format.
 */
- (NSString *)hexString;

UIColor * XCColor(CGFloat r,CGFloat g,CGFloat b);

UIColor * XCColorWithAlpha(CGFloat r,CGFloat g,CGFloat b,CGFloat a);
@end

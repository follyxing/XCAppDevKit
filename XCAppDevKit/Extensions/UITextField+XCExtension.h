//
//  UITextField+XCExtension.h
//  XCAppDevKit
//
//  Created by 邢程 on 2017/7/5.
//  Copyright © 2017年 XingCheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (XCExtension)
/**
 set placeholder color
 
 @param color UIColor placeholder color
 */
- (void)setPlaceholderTextColor:(UIColor *)color;

/**
 set placeholder font
 
 @param font UIFont placeholder font
 */
- (void)setPlaceholderFont:(UIFont *)font;
@end

//
//  UITextField+XCExtension.m
//  XCAppDevKit
//
//  Created by 邢程 on 2017/7/5.
//  Copyright © 2017年 XingCheng. All rights reserved.
//

#import "UITextField+XCExtension.h"

@implementation UITextField (XCExtension)
- (void)setPlaceholderTextColor:(UIColor *)color {
    if (color) {
        [self setValue:color forKeyPath:@"_placeholderLabel.textColor"];
    }else {
        [self setValue:[UIColor clearColor] forKeyPath:@"_placeholderLabel.textColor"];
    }
}

- (void)setPlaceholderFont:(UIFont *)font {
    if (font) {
        [self setValue:font forKeyPath:@"_placeholderLabel.font"];
    }else {
        [self setValue:[UIFont systemFontOfSize:17.0] forKeyPath:@"_placeholderLabel.font"];
    }
}

@end

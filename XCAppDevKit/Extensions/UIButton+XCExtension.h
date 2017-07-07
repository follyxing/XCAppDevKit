//
//  UIButton+XCExtension.h
//  XCAppDevKit
//
//  Created by 邢程 on 2017/7/5.
//  Copyright © 2017年 XingCheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (XCExtension)

- (void)setEnlargeTouchArea:(CGFloat)area;

- (void)setEnlargeEdgeWithTop:(CGFloat)top left:(CGFloat)left bottom:(CGFloat)bottom right:(CGFloat)right;
@end

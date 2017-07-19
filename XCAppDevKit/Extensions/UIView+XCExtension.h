//
//  UIView+XCExtension.h
//  XCAppDevKit
//
//  Created by 邢程 on 2017/7/5.
//  Copyright © 2017年 XingCheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (XCExtension)
@property (nonatomic, assign) CGSize  size;
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;

- (void)setRoundedCorners:(UIRectCorner)corners radius:(CGSize)size;
@end

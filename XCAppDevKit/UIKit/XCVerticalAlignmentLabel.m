//
//  XCAlignmentTopLabel.m
//  XCLabelAlignToTop
//
//  Created by shaimi on 15/6/25.
//  Copyright (c) 2015年 xingcheng. All rights reserved.
//

#import "XCVerticalAlignmentLabel.h"

@implementation XCVerticalAlignmentLabel

@synthesize verticalAlignment = verticalAlignment_;

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.verticalAlignment = XCVerticalAlignmentMiddle;
    }
    return self;
}

- (void)setVerticalAlignment:(XCVerticalAlignment)verticalAlignment{
    
    verticalAlignment_ = verticalAlignment;
    [self setNeedsDisplay];
}

- (CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(NSInteger)numberOfLines{
    
    CGRect textRect = [super textRectForBounds:bounds limitedToNumberOfLines:numberOfLines];
    switch (self.verticalAlignment) {
        case XCVerticalAlignmentTop:
            textRect.origin.y = bounds.origin.y;
            break;
            
        case XCVerticalAlignmentBottom:
            textRect.origin.y = bounds.origin.y +bounds.size.height - textRect.size.height;
            break;
            
        case XCVerticalAlignmentMiddle:
            textRect.origin.y = bounds.origin.y +(bounds.size.height - textRect.size.height) /2.0;
            break;
       
         }
    return textRect;
}

- (void)drawTextInRect:(CGRect)requestRect{
    
    CGRect actualRect = [self textRectForBounds:requestRect limitedToNumberOfLines:self.numberOfLines];
    [super drawTextInRect:actualRect];
    
}

@end

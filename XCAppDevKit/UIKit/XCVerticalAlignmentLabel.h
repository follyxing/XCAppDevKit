//
//  XCAlignmentTopLabel.h
//  XCLabelAlignToTop
//
//  Created by shaimi on 15/6/25.
//  Copyright (c) 2015年 xingcheng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, XCVerticalAlignment){
    XCVerticalAlignmentTop    = 0, // default
    XCVerticalAlignmentMiddle = 1,
    XCVerticalAlignmentBottom = 2,
} ;
@interface XCVerticalAlignmentLabel : UILabel{
@private
    XCVerticalAlignment _verticalAlignment;
}

@property (assign,nonatomic) XCVerticalAlignment verticalAlignment;

/**
 *  Set Label Vertical Alignment . Top Middle or Bottom
 *
 *  @param verticalAlignment VerticalAlignmentTop,VerticalAlignmentMiddle or VerticalAlignmentBottom 
 */
- (void)setVerticalAlignment:(XCVerticalAlignment)verticalAlignment;
@end
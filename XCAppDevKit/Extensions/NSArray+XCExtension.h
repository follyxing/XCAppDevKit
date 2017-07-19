//
//  NSArray+XCExtension.h
//  XCAppDevKit
//
//  Created by 邢程 on 2017/7/5.
//  Copyright © 2017年 XingCheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (XCExtension)

-(id)safeObjectAtIndex:(NSInteger)index;

- (id)firstObject;
@end

//
//  NSArray+XCExtension.m
//  XCAppDevKit
//
//  Created by 邢程 on 2017/7/5.
//  Copyright © 2017年 XingCheng. All rights reserved.
//

#import "NSArray+XCExtension.h"

@implementation NSArray (XCExtension)
-(id)safeObjectAtIndex:(NSInteger)index
{
    if (self.count > index) {
        return [self objectAtIndex:index];
    }else{
        return nil;
    }
}
@end

//
//  UIImage+XCExtension.h
//  AFNetworking
//
//  Created by 邢程 on 2018/9/7.
//

#import <UIKit/UIKit.h>

@interface UIImage (XCExtension)
+(UIImage*)imageWithUIColor:(UIColor*)color;
+(UIImage*)imageWithUIColor:(UIColor*)color size:(CGSize)size;
@end

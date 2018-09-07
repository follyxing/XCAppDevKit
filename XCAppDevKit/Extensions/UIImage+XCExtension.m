//
//  UIImage+XCExtension.m
//  AFNetworking
//
//  Created by 邢程 on 2018/9/7.
//

#import "UIImage+XCExtension.h"

@implementation UIImage (XCExtension)
+(UIImage*)imageWithUIColor:(UIColor*)color{
    return [self imageWithUIColor:color size:CGSizeMake(1.0f, 1.0f)];
}
+(UIImage*)imageWithUIColor:(UIColor*)color size:(CGSize)size{
    CGRect rect=CGRectMake(0.0f, 0.0f,size.width, size.height);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, [color CGColor]);
    CGContextFillRect(context, rect);
    UIImage *theImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return theImage;
}
@end

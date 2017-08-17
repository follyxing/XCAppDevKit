//
//  XCURLParser.h
//  Pods
//
//  Created by 邢程 on 2017/8/17.
//
//

#import <Foundation/Foundation.h>

@interface XCURLParser : NSObject
@property (nonatomic, strong) NSArray *variables;
- (id)initWithURLString:(NSString *)url;
- (NSString *)valueForVariable:(NSString *)varName;
@end

#import <Foundation/Foundation.h>


@interface NSBundle (XCLocalized)

+(void)setLanguage:(NSString *)language;

+(NSString*)currentLanguage;
@end


#import "NSBundle+XCLocalized.h"
#import <objc/runtime.h>

#define kXCUserLanguageKey @"xc_userlanguage"

static const char kBundleKey = 0;

@interface BundleEx : NSBundle

@end

@implementation BundleEx

- (NSString *)localizedStringForKey:(NSString *)key value:(NSString *)value table:(NSString *)tableName
{
    NSBundle *bundle = objc_getAssociatedObject(self, &kBundleKey);
    if (bundle) {
        return [bundle localizedStringForKey:key value:value table:tableName];
    }
    else {
        return [super localizedStringForKey:key value:value table:tableName];
    }
}

@end


@implementation NSBundle (XCLocalized)

+ (void)setLanguage:(NSString *)language
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        object_setClass([NSBundle mainBundle],[BundleEx class]);
    });
    [[NSUserDefaults standardUserDefaults] setObject:language forKey:kXCUserLanguageKey];
    id value = language ? [NSBundle bundleWithPath:[[NSBundle mainBundle] pathForResource:language ofType:@"lproj"]] : nil;
    objc_setAssociatedObject([NSBundle mainBundle], &kBundleKey, value, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

+(NSString*)currentLanguage{
    
    NSArray *languages = [[NSUserDefaults standardUserDefaults] objectForKey:@"AppleLanguages"];
    NSString *locLang = [languages objectAtIndex:0];
    NSString * appLang = [[NSUserDefaults standardUserDefaults] stringForKey:kXCUserLanguageKey];
    return appLang?:locLang;
}
@end


//
//  NSString+XCExtension.h
//  XCAppDevKit
//
//  Created by 邢程 on 2017/7/5.
//  Copyright © 2017年 XingCheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (XCExtension)
#pragma mark - Path

- (NSString *)cachePath;

- (NSString *)documentPath;

- (NSString *)tmpPath;

+ (NSString *)cachePath;

+ (NSString *)documentPath;

+ (NSString *)tmpPath;

#pragma mark - 散列函数
/**
 *  计算MD5散列结果
 *
 *  终端测试命令：
 *  @code
 *  md5 -s "string"
 *  @endcode
 *
 *  <p>提示：随着 MD5 碰撞生成器的出现，MD5 算法不应被用于任何软件完整性检查或代码签名的用途。<p>
 *
 *  @return 32个字符的MD5散列字符串
 */
- (NSString *)md5String;

/**
 *  计算SHA1散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha1
 *  @endcode
 *
 *  @return 40个字符的SHA1散列字符串
 */
- (NSString *)sha1String;

/**
 *  计算SHA224散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha224
 *  @endcode
 *
 *  @return 56个字符的SHA224散列字符串
 */
- (NSString *)sha224String;

/**
 *  计算SHA256散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha256
 *  @endcode
 *
 *  @return 64个字符的SHA256散列字符串
 */
- (NSString *)sha256String;

/**
 *  计算SHA 384散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha384
 *  @endcode
 *
 *  @return 96个字符的SHA 384散列字符串
 */
- (NSString *)sha384String;

/**
 *  计算SHA 512散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha512
 *  @endcode
 *
 *  @return 128个字符的SHA 512散列字符串
 */
- (NSString *)sha512String;

#pragma mark - HMAC 散列函数
/**
 *  计算HMAC MD5散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl dgst -md5 -hmac "key"
 *  @endcode
 *
 *  @return 32个字符的HMAC MD5散列字符串
 */
- (NSString *)hmacMD5StringWithKey:(NSString *)key;

/**
 *  计算HMAC SHA1散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha1 -hmac "key"
 *  @endcode
 *
 *  @return 40个字符的HMAC SHA1散列字符串
 */
- (NSString *)hmacSHA1StringWithKey:(NSString *)key;

/**
 *  计算HMAC SHA256散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha256 -hmac "key"
 *  @endcode
 *
 *  @return 64个字符的HMAC SHA256散列字符串
 */
- (NSString *)hmacSHA256StringWithKey:(NSString *)key;

/**
 *  计算HMAC SHA512散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha512 -hmac "key"
 *  @endcode
 *
 *  @return 128个字符的HMAC SHA512散列字符串
 */
- (NSString *)hmacSHA512StringWithKey:(NSString *)key;

#pragma mark - 文件散列函数

/**
 *  计算文件的MD5散列结果
 *
 *  终端测试命令：
 *  @code
 *  md5 file.dat
 *  @endcode
 *
 *  @return 32个字符的MD5散列字符串
 */
- (NSString *)fileMD5Hash;

/**
 *  计算文件的SHA1散列结果
 *
 *  终端测试命令：
 *  @code
 *  openssl sha -sha1 file.dat
 *  @endcode
 *
 *  @return 40个字符的SHA1散列字符串
 */
- (NSString *)fileSHA1Hash;

/**
 *  计算文件的SHA256散列结果
 *
 *  终端测试命令：
 *  @code
 *  openssl sha -sha256 file.dat
 *  @endcode
 *
 *  @return 64个字符的SHA256散列字符串
 */
- (NSString *)fileSHA256Hash;

/**
 *  计算文件的SHA512散列结果
 *
 *  终端测试命令：
 *  @code
 *  openssl sha -sha512 file.dat
 *  @endcode
 *
 *  @return 128个字符的SHA512散列字符串
 */
- (NSString *)fileSHA512Hash;


#pragma mark - Base64

+ (NSString *)stringWithBase64EncodedString:(NSString *)string;
- (NSString *)base64EncodedStringWithWrapWidth:(NSUInteger)wrapWidth;
- (NSString *)base64EncodedString;
- (NSString *)base64DecodedString;
- (NSData *)base64DecodedData;

#pragma mark - Url encode decode

//- (NSString *)URLEncode;
//- (NSString *)URLEncodeUsingEncoding:(NSStringEncoding)encoding;

//- (NSString *)URLDecode;
//- (NSString *)URLDecodeUsingEncoding:(NSStringEncoding)encoding;

#pragma mark - PinYin
///@"zhōng wén"
- (NSString*)pinyinWithPhoneticSymbol;
///@"zhong wen"
- (NSString*)pinyin;
///@[@"zhong", @"wen"]
- (NSArray*)pinyinArray;
///	@"zhongwen"
- (NSString*)pinyinWithoutBlank;
///@[@"z", @"w"]
- (NSArray*)pinyinInitialsArray;
///	@"zw"
- (NSString*)pinyinInitialsString;

#pragma mark - Util

-(instancetype )trim;

/**
 String is nil , NSNULL or length <0

 @return isEmpty
 */
- (BOOL)isEmpty;

/**
 String is @"" ,nil , NSNULL or length <0

 @return isEmptyString
 */
- (BOOL)isEmptyString;

/**
 String is phone number
 
 @return is phone number
 */
-(BOOL)isPhoneNumber;

/**
 String is number

 @return is number
 */
- (BOOL)xc_isNumber;
/**
 support system method containsString: under ios 8.0
 */
-(BOOL)containsString:(NSString *)str;

/**
 replace string from dictionary

 @param dict @{@"current string":@"target string"}
 @return string
 */
- (NSString *)stringByReplacingStringsFromDictionary:(NSDictionary *)dict;

/**
 remove all emoji form string

 @return no emoji string
 */
- (NSString *)removeEmoji;
@end

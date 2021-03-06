//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSDictionary, NSNumber, NSURLComponents;

@interface NSString (URLString)
+ (id)stringWithUnicodeCharacter:(unsigned int)arg1;
+ (_Bool)isEmptyOrNil:(id)arg1;
+ (_Bool)isEmptyOrNull:(id)arg1;
- (_Bool)containsRequiredPercentEncodingWithValidCharacterSet:(id)arg1;
@property(readonly, nonatomic) _Bool containsPercentEncoding;
- (struct _NSRange)rangeAfterIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeAfterSubrange:(struct _NSRange)arg1;
@property(readonly, nonatomic) NSURLComponents *URLComponentsFromURLString;
@property(readonly, nonatomic) NSString *URLStringByAddingPercentEncoding;
- (id)URLStringByAddingSchemeAndAuthorityIfNeeded:(id)arg1;
@property(readonly, nonatomic) _Bool URLStringRequiresAddingScheme;
@property(readonly, nonatomic) NSString *URLFragment;
- (struct _NSRange)URLFragmentRange;
@property(readonly, nonatomic) NSString *URLQuery;
- (struct _NSRange)URLQueryRange;
@property(readonly, nonatomic) NSString *URLPath;
- (struct _NSRange)URLPathRange;
@property(readonly, nonatomic) NSNumber *URLPort;
- (struct _NSRange)URLPortRange;
@property(readonly, nonatomic) NSString *URLHost;
- (struct _NSRange)URLHostRange;
@property(readonly, nonatomic) NSString *URLScheme;
- (struct _NSRange)URLSchemeRange;
- (id)characterEntities;
@property(readonly, nonatomic) NSString *stringByDecodingHTMLEntities;
@property(readonly, nonatomic) NSString *decodedHTMLEntity;
@property(readonly, nonatomic) NSDictionary *JSONDictionary;
- (id)queryStringURLEncode;
- (id)safeSubstringToIndex:(unsigned long long)arg1;
- (struct _NSRange)safeMakeRange:(struct _NSRange)arg1;
- (struct _NSRange)entireRange;
- (struct _NSRange)safeRangeOfString:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)safeRangeOfString:(id)arg1;
- (_Bool)firstCharacterIsAlpha;
- (id)safeStringByAppendingString:(id)arg1;
@property(readonly, nonatomic) _Bool isSemanticVersionString;
- (_Bool)doesContainNonZeroNumber:(id)arg1;
- (_Bool)isSemanticVersionLessThan:(id)arg1;
- (_Bool)stringIsValidUsernameIncludingMinLength:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isValidSubredditName;
@property(readonly, nonatomic) NSString *stringByRemovingThingTypePrefix;
- (_Bool)hasThingTypePrefix;
@property(readonly, nonatomic) NSString *stringByRemovingSubredditPrefix;
@property(readonly, nonatomic) NSString *stringByIncludingSubredditPrefix;
- (_Bool)hasSubredditPrefix;
@property(readonly, nonatomic) NSString *stringByRemovingUsernameUnderscorePrefix;
@property(readonly, nonatomic) _Bool hasUsernameUnderscorePrefix;
@property(readonly, nonatomic) NSString *stringByRemovingUsernamePrefix;
@property(readonly, nonatomic) NSString *stringByIncludingUsernamePrefix;
- (_Bool)hasUsernamePrefix;
@property(readonly, copy, nonatomic) NSString *stringByReplacingWhitespacesWithUnderscores;
@property(readonly, copy, nonatomic) NSString *stringByReplacingWhitespacesWithHyphens;
@end


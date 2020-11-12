//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/NSCopying-Protocol.h>
#import <NavigationFramework/NSSecureCoding-Protocol.h>

@class GMSx_GMCSUser, GMSx_GMTTAuthorInfo, NSArray, NSString;

@interface GMSx_GMCSSummaryQuote : NSObject <NSCopying, NSSecureCoding>
{
    int _totalSimilarStatements;
    int _type;
    GMSx_GMCSUser *_author;
    GMSx_GMTTAuthorInfo *_authorInfo;
    NSArray *_highlightRanges;
    NSString *_text;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) int totalSimilarStatements; // @synthesize totalSimilarStatements=_totalSimilarStatements;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSArray *highlightRanges; // @synthesize highlightRanges=_highlightRanges;
@property(readonly, copy, nonatomic) GMSx_GMTTAuthorInfo *authorInfo; // @synthesize authorInfo=_authorInfo;
@property(readonly, nonatomic) GMSx_GMCSUser *author; // @synthesize author=_author;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSummaryQuote:(id)arg1;

@end

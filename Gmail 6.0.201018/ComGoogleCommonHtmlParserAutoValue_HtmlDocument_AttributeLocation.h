//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonHtmlParserHtmlDocument_AttributeLocation.h"

@class ComGoogleCommonBaseOptional, ComGoogleCommonCollectRange;

@interface ComGoogleCommonHtmlParserAutoValue_HtmlDocument_AttributeLocation : ComGoogleCommonHtmlParserHtmlDocument_AttributeLocation
{
    ComGoogleCommonCollectRange *nameLocation_;
    ComGoogleCommonBaseOptional *valueLocation_;
    _Bool isValueQuoted_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isValueQuoted;
- (id)valueLocation;
- (id)nameLocation;

@end

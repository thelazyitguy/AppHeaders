//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonEscapeUnicodeEscaper.h"

@class IOSBooleanArray;

@interface ComGoogleCommonNetPercentEscaper : ComGoogleCommonEscapeUnicodeEscaper
{
    _Bool plusForSpace_;
    IOSBooleanArray *safeOctets_;
}

+ (void)initialize;
- (void)dealloc;
- (id)escapeWithInt:(int)arg1;
- (id)escapeWithNSString:(id)arg1;
- (int)nextEscapeIndexWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;

@end

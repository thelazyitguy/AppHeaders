//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonEscapeUnicodeEscaper.h"

@class IOSObjectArray;

@interface ComGoogleCommonEscapeArrayBasedUnicodeEscaper : ComGoogleCommonEscapeUnicodeEscaper
{
    IOSObjectArray *replacements_;
    int replacementsLength_;
    int safeMin_;
    int safeMax_;
    unsigned short safeMinChar_;
    unsigned short safeMaxChar_;
}

- (void)dealloc;
- (int)nextEscapeIndexWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)escapeWithInt:(int)arg1;
- (id)escapeWithNSString:(id)arg1;

@end

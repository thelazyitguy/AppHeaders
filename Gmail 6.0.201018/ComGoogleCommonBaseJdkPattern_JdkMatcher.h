//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonBaseCommonMatcher.h"

@class JavaUtilRegexMatcher;

@interface ComGoogleCommonBaseJdkPattern_JdkMatcher : ComGoogleCommonBaseCommonMatcher
{
    JavaUtilRegexMatcher *matcher_;
}

- (void)dealloc;
- (int)start;
- (int)end;
- (id)replaceAllWithNSString:(id)arg1;
- (_Bool)findWithInt:(int)arg1;
- (_Bool)find;
- (_Bool)matches;

@end

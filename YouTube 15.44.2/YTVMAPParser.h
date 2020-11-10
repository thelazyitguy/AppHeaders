//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTTBParser.h>

@class NSRegularExpression, YTVASTParser;

@interface YTVMAPParser : YTTBParser
{
    NSRegularExpression *_timeOffsetExpression;
    NSRegularExpression *_percentageOffsetExpression;
    NSRegularExpression *_positionOffsetExpression;
    YTVASTParser *_VASTParser;
}

+ (unsigned long long)uintWithString:(id)arg1 regExp:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (_Bool)isInnerTubeAdBreak:(id)arg1;
- (id)VASTAdsFromAdSourceElement:(id)arg1 error:(id *)arg2;
- (int)offsetTypeWithTimeOffset:(id)arg1 error:(id *)arg2;
- (id)parseVMAPAdBreakWithElement:(id)arg1 userAuthRegExp:(id)arg2 deviceAuthRegExp:(id)arg3 macroRegexDict:(id)arg4 error:(id *)arg5;
- (id)parseElement:(id)arg1 error:(id *)arg2;
- (id)init;

@end


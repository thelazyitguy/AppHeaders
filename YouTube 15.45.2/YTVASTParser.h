//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTTBParser.h>

@class NSRegularExpression, YTGlobalConfig, YTInfoCardParser, YTSurveyQuestionParser;

@interface YTVASTParser : YTTBParser
{
    YTGlobalConfig *_globalConfig;
    NSRegularExpression *_timeOffsetExpression;
    NSRegularExpression *_percentageOffsetExpression;
    YTSurveyQuestionParser *_surveyQuestionParser;
    YTInfoCardParser *_infoCardParser;
}

- (void).cxx_destruct;
- (_Bool)isValidVASTVersionForElement:(id)arg1;
- (int)progressPingTypeWithOffset:(id)arg1 error:(id *)arg2;
- (id)parseAdProgressPingFromElement:(id)arg1 error:(id *)arg2;
- (id)parseAdParametersFromElement:(id)arg1 error:(id *)arg2;
- (_Bool)hasAdParametersFromMediaFilesElement:(id)arg1;
- (id)findFirstStream:(id)arg1 matching:(CDUnknownBlockType)arg2;
- (id)selectStreamURL:(id)arg1;
- (id)streamingDataFromMediaFiles:(id)arg1;
- (id)parseAdSystemsFromElement:(id)arg1;
- (id)parseErrorURLsFromElement:(id)arg1;
- (id)parseImpressionPingsFromElement:(id)arg1;
- (id)creativeElementFromAdTypeElement:(id)arg1;
- (id)parsePrefetchedAdFromElement:(id)arg1 error:(id *)arg2;
- (id)parseActiveViewFromElement:(id)arg1;
- (id)VASTAdWithNonLinearElement:(id)arg1 impressionPings:(id)arg2 adSystems:(id)arg3 error:(id *)arg4;
- (id)VASTAdWithLinearElement:(id)arg1 extensionsElement:(id)arg2 impressionPings:(id)arg3 errorPingURLs:(id)arg4 adIDs:(id)arg5 adSystems:(id)arg6 adTagURL:(id)arg7 canBeSkippable:(_Bool)arg8 error:(id *)arg9;
- (id)VASTAdWithWrapperElement:(id)arg1 adIDs:(id)arg2 error:(id *)arg3;
- (id)VASTAdWithInLineElement:(id)arg1 adIDs:(id)arg2 error:(id *)arg3;
- (id)parseAdElement:(id)arg1 error:(id *)arg2;
- (id)parseElement:(id)arg1 error:(id *)arg2;
- (id)init;

@end

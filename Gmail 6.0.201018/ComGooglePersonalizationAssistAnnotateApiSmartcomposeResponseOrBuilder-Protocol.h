//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGooglePersonalizationAssistAnnotateApiAutocorrectResponse, ComGooglePersonalizationAssistAnnotateApiBlacklistResponse, ComGooglePersonalizationAssistAnnotateApiDataProtectionResponse, ComGooglePersonalizationAssistAnnotateApiDisplayData, ComGooglePersonalizationAssistAnnotateApiLinkifyResponse, ComGooglePersonalizationAssistAnnotateApiSmartcomposeResponseMetadata, ComGooglePersonalizationAssistAnnotateApiSmartcomposeSuggestion, ComGooglePersonalizationAssistAnnotateApiSpellingAndGrammarResponse, ComGooglePersonalizationAssistAnnotateApiSubjectSuggestion, ComGooglePersonalizationAssistAnnotateTriggeringBreakType;
@protocol JavaUtilList;

@protocol ComGooglePersonalizationAssistAnnotateApiSmartcomposeResponseOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGooglePersonalizationAssistAnnotateApiBlacklistResponse *)getBlacklistResponse;
- (_Bool)hasBlacklistResponse;
- (ComGooglePersonalizationAssistAnnotateApiAutocorrectResponse *)getAutocorrectResponse;
- (_Bool)hasAutocorrectResponse;
- (ComGooglePersonalizationAssistAnnotateApiLinkifyResponse *)getLinkifyResponse;
- (_Bool)hasLinkifyResponse;
- (ComGooglePersonalizationAssistAnnotateApiDataProtectionResponse *)getDataProtectionResponse;
- (_Bool)hasDataProtectionResponse;
- (ComGooglePersonalizationAssistAnnotateApiSpellingAndGrammarResponse *)getSpellingAndGrammarResponse;
- (_Bool)hasSpellingAndGrammarResponse;
- (ComGooglePersonalizationAssistAnnotateApiSmartcomposeResponseMetadata *)getResponseMetadata;
- (_Bool)hasResponseMetadata;
- (ComGooglePersonalizationAssistAnnotateTriggeringBreakType *)getBreakType;
- (_Bool)hasBreakType;
- (ComGooglePersonalizationAssistAnnotateApiSubjectSuggestion *)getSubjectSuggestionsWithInt:(int)arg1;
- (id <JavaUtilList>)getSubjectSuggestionsList;
- (int)getSubjectSuggestionsCount;
- (ComGooglePersonalizationAssistAnnotateApiDisplayData *)getDisplayData;
- (_Bool)hasDisplayData;
- (ComGooglePersonalizationAssistAnnotateApiSmartcomposeSuggestion *)getSuggestionsWithInt:(int)arg1;
- (id <JavaUtilList>)getSuggestionsList;
- (int)getSuggestionsCount;
@end

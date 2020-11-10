//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBEnumArray, NSMutableArray, NSString, YTISearchboxStats_ExperimentInfo, YTISearchboxStats_SuggestionInfo;

@interface YTISearchboxStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTISearchboxStats_SuggestionInfo *assistedQueryInfo; // @dynamic assistedQueryInfo;
@property(retain, nonatomic) NSMutableArray *availableSuggestionsArray; // @dynamic availableSuggestionsArray;
@property(readonly, nonatomic) unsigned long long availableSuggestionsArray_Count; // @dynamic availableSuggestionsArray_Count;
@property(copy, nonatomic) NSString *clientName; // @dynamic clientName;
@property(copy, nonatomic) NSString *compressedRoundTripHistogram; // @dynamic compressedRoundTripHistogram;
@property(copy, nonatomic) NSString *experimentStats; // @dynamic experimentStats;
@property(nonatomic) unsigned int firstEditTimeMsec; // @dynamic firstEditTimeMsec;
@property(nonatomic) _Bool hasAssistedQueryInfo; // @dynamic hasAssistedQueryInfo;
@property(nonatomic) _Bool hasClientName; // @dynamic hasClientName;
@property(nonatomic) _Bool hasCompressedRoundTripHistogram; // @dynamic hasCompressedRoundTripHistogram;
@property(nonatomic) _Bool hasExperimentStats; // @dynamic hasExperimentStats;
@property(nonatomic) _Bool hasFirstEditTimeMsec; // @dynamic hasFirstEditTimeMsec;
@property(nonatomic) _Bool hasLastEditTimeMsec; // @dynamic hasLastEditTimeMsec;
@property(nonatomic) _Bool hasLastQueryBuildTimeMsec; // @dynamic hasLastQueryBuildTimeMsec;
@property(nonatomic) _Bool hasMaxRoundTripTimeMsec; // @dynamic hasMaxRoundTripTimeMsec;
@property(nonatomic) _Bool hasNumZeroPrefixSuggestionsShown; // @dynamic hasNumZeroPrefixSuggestionsShown;
@property(nonatomic) _Bool hasOriginalQuery; // @dynamic hasOriginalQuery;
@property(nonatomic) _Bool hasOutOfSyncResponseCount; // @dynamic hasOutOfSyncResponseCount;
@property(nonatomic) _Bool hasParameterValidationStatus; // @dynamic hasParameterValidationStatus;
@property(nonatomic) _Bool hasQueryPrefixForDisplayedSuggestions; // @dynamic hasQueryPrefixForDisplayedSuggestions;
@property(nonatomic) _Bool hasRequestIdentifier; // @dynamic hasRequestIdentifier;
@property(nonatomic) _Bool hasSearchMethod; // @dynamic hasSearchMethod;
@property(nonatomic) _Bool hasSessionDurationMsec; // @dynamic hasSessionDurationMsec;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasSessionNumber; // @dynamic hasSessionNumber;
@property(nonatomic) _Bool hasSuggestExperimentInfo; // @dynamic hasSuggestExperimentInfo;
@property(nonatomic) _Bool hasTotalRoundTripTimeMsec; // @dynamic hasTotalRoundTripTimeMsec;
@property(nonatomic) _Bool hasUnstableConnection; // @dynamic hasUnstableConnection;
@property(nonatomic) _Bool hasValidationStatus; // @dynamic hasValidationStatus;
@property(nonatomic) _Bool hasZeroPrefixEnabled; // @dynamic hasZeroPrefixEnabled;
@property(retain, nonatomic) GPBEnumArray *inputMethodsArray; // @dynamic inputMethodsArray;
@property(readonly, nonatomic) unsigned long long inputMethodsArray_Count; // @dynamic inputMethodsArray_Count;
@property(nonatomic) unsigned int lastEditTimeMsec; // @dynamic lastEditTimeMsec;
@property(nonatomic) unsigned int lastQueryBuildTimeMsec; // @dynamic lastQueryBuildTimeMsec;
@property(nonatomic) unsigned int maxRoundTripTimeMsec; // @dynamic maxRoundTripTimeMsec;
@property(nonatomic) unsigned int numZeroPrefixSuggestionsShown; // @dynamic numZeroPrefixSuggestionsShown;
@property(copy, nonatomic) NSString *originalQuery; // @dynamic originalQuery;
@property(nonatomic) unsigned int outOfSyncResponseCount; // @dynamic outOfSyncResponseCount;
@property(nonatomic) int parameterValidationStatus; // @dynamic parameterValidationStatus;
@property(retain, nonatomic) NSMutableArray *previousSuggestionsArray; // @dynamic previousSuggestionsArray;
@property(readonly, nonatomic) unsigned long long previousSuggestionsArray_Count; // @dynamic previousSuggestionsArray_Count;
@property(copy, nonatomic) NSString *queryPrefixForDisplayedSuggestions; // @dynamic queryPrefixForDisplayedSuggestions;
@property(copy, nonatomic) NSString *requestIdentifier; // @dynamic requestIdentifier;
@property(nonatomic) int searchMethod; // @dynamic searchMethod;
@property(nonatomic) unsigned int sessionDurationMsec; // @dynamic sessionDurationMsec;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int sessionNumber; // @dynamic sessionNumber;
@property(retain, nonatomic) YTISearchboxStats_ExperimentInfo *suggestExperimentInfo; // @dynamic suggestExperimentInfo;
@property(nonatomic) unsigned int totalRoundTripTimeMsec; // @dynamic totalRoundTripTimeMsec;
@property(nonatomic) _Bool unstableConnection; // @dynamic unstableConnection;
@property(nonatomic) int validationStatus; // @dynamic validationStatus;
@property(nonatomic) _Bool zeroPrefixEnabled; // @dynamic zeroPrefixEnabled;

@end


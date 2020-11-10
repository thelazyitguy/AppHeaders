//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIAdSafetyExperienceReason, YTIContinuationSupportedRenderers, YTIFrameworkUpdateTransport, YTIResponseContext, YTISearchHeaderSupportedRenderers, YTISearchOverlaySupportedRenderers, YTISearchResponseSupportedRenderers, YTISearchSurveyTriggerSupportedRenderers, YTISearchTopbarSupportedRenderers;

@interface YTISearchResponse : GPBMessage
{
}

+ (id)descriptor;
- (id)tabs;

// Remaining properties
@property(retain, nonatomic) YTIAdSafetyExperienceReason *adSafetyReason; // @dynamic adSafetyReason;
@property(retain, nonatomic) YTISearchResponseSupportedRenderers *contents; // @dynamic contents;
@property(retain, nonatomic) YTIContinuationSupportedRenderers *continuationContents; // @dynamic continuationContents;
@property(copy, nonatomic) NSString *correctedQuery; // @dynamic correctedQuery;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(retain, nonatomic) NSMutableArray *debugLinesArray; // @dynamic debugLinesArray;
@property(readonly, nonatomic) unsigned long long debugLinesArray_Count; // @dynamic debugLinesArray_Count;
@property(nonatomic) _Bool displayBottomSheetSearchFilter; // @dynamic displayBottomSheetSearchFilter;
@property(nonatomic) long long estimatedResults; // @dynamic estimatedResults;
@property(retain, nonatomic) YTIFrameworkUpdateTransport *frameworkUpdates; // @dynamic frameworkUpdates;
@property(copy, nonatomic) NSData *genericSearchRequest; // @dynamic genericSearchRequest;
@property(copy, nonatomic) NSData *genericSearchResponse; // @dynamic genericSearchResponse;
@property(nonatomic) _Bool hasAdSafetyReason; // @dynamic hasAdSafetyReason;
@property(nonatomic) _Bool hasContents; // @dynamic hasContents;
@property(nonatomic) _Bool hasContinuationContents; // @dynamic hasContinuationContents;
@property(nonatomic) _Bool hasCorrectedQuery; // @dynamic hasCorrectedQuery;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasDisplayBottomSheetSearchFilter; // @dynamic hasDisplayBottomSheetSearchFilter;
@property(nonatomic) _Bool hasEstimatedResults; // @dynamic hasEstimatedResults;
@property(nonatomic) _Bool hasFrameworkUpdates; // @dynamic hasFrameworkUpdates;
@property(nonatomic) _Bool hasGenericSearchRequest; // @dynamic hasGenericSearchRequest;
@property(nonatomic) _Bool hasGenericSearchResponse; // @dynamic hasGenericSearchResponse;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasHideContents; // @dynamic hasHideContents;
@property(nonatomic) _Bool hasOverlay; // @dynamic hasOverlay;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasSearchAdsRequestURL; // @dynamic hasSearchAdsRequestURL;
@property(nonatomic) _Bool hasSearchHistoryFeedbackToken; // @dynamic hasSearchHistoryFeedbackToken;
@property(nonatomic) _Bool hasSurvey; // @dynamic hasSurvey;
@property(nonatomic) _Bool hasTemporaryDisableSearchAds; // @dynamic hasTemporaryDisableSearchAds;
@property(nonatomic) _Bool hasTopbar; // @dynamic hasTopbar;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTISearchHeaderSupportedRenderers *header; // @dynamic header;
@property(nonatomic) _Bool hideContents; // @dynamic hideContents;
@property(retain, nonatomic) NSMutableArray *onResponseReceivedCommandsArray; // @dynamic onResponseReceivedCommandsArray;
@property(readonly, nonatomic) unsigned long long onResponseReceivedCommandsArray_Count; // @dynamic onResponseReceivedCommandsArray_Count;
@property(retain, nonatomic) YTISearchOverlaySupportedRenderers *overlay; // @dynamic overlay;
@property(retain, nonatomic) NSMutableArray *refinementsArray; // @dynamic refinementsArray;
@property(readonly, nonatomic) unsigned long long refinementsArray_Count; // @dynamic refinementsArray_Count;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(copy, nonatomic) NSString *searchAdsRequestURL; // @dynamic searchAdsRequestURL;
@property(copy, nonatomic) NSString *searchHistoryFeedbackToken; // @dynamic searchHistoryFeedbackToken;
@property(retain, nonatomic) YTISearchSurveyTriggerSupportedRenderers *survey; // @dynamic survey;
@property(nonatomic) _Bool temporaryDisableSearchAds; // @dynamic temporaryDisableSearchAds;
@property(retain, nonatomic) YTISearchTopbarSupportedRenderers *topbar; // @dynamic topbar;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


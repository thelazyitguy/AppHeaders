//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIAdLayoutLoggingData, YTICommand, YTIExternalAdStreamData, YTIFormattedString, YTIOfflineFrequencyCap, YTIRenderer, YTIVideoAdOverlaySupportedRenderers, YTIVideoAdTracking, YTIVideoInteractionsAndProgressCommands;

@interface YTIVideoAdRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int accompaniedByOneOfCase; // @dynamic accompaniedByOneOfCase;
@property(retain, nonatomic) YTIAdLayoutLoggingData *adLayoutLoggingData; // @dynamic adLayoutLoggingData;
@property(copy, nonatomic) NSString *adNextParams; // @dynamic adNextParams;
@property(retain, nonatomic) NSMutableArray *adVideoProgressCommandsArray; // @dynamic adVideoProgressCommandsArray;
@property(readonly, nonatomic) unsigned long long adVideoProgressCommandsArray_Count; // @dynamic adVideoProgressCommandsArray_Count;
@property(retain, nonatomic) YTICommand *clickthroughEndpoint; // @dynamic clickthroughEndpoint;
@property(retain, nonatomic) YTIFormattedString *clickthroughLabel; // @dynamic clickthroughLabel;
@property(retain, nonatomic) NSMutableArray *csiParametersArray; // @dynamic csiParametersArray;
@property(readonly, nonatomic) unsigned long long csiParametersArray_Count; // @dynamic csiParametersArray_Count;
@property(retain, nonatomic) YTIExternalAdStreamData *external; // @dynamic external;
@property(nonatomic) _Bool hasAdLayoutLoggingData; // @dynamic hasAdLayoutLoggingData;
@property(nonatomic) _Bool hasAdNextParams; // @dynamic hasAdNextParams;
@property(nonatomic) _Bool hasClickthroughEndpoint; // @dynamic hasClickthroughEndpoint;
@property(nonatomic) _Bool hasClickthroughLabel; // @dynamic hasClickthroughLabel;
@property(nonatomic) _Bool hasExternal; // @dynamic hasExternal;
@property(nonatomic) _Bool hasNavigationConfidence; // @dynamic hasNavigationConfidence;
@property(nonatomic) _Bool hasOfflineFrequencyCap; // @dynamic hasOfflineFrequencyCap;
@property(nonatomic) _Bool hasPings; // @dynamic hasPings;
@property(nonatomic) _Bool hasPlaybackCommands; // @dynamic hasPlaybackCommands;
@property(nonatomic) _Bool hasPlayerOverlay; // @dynamic hasPlayerOverlay;
@property(nonatomic) _Bool hasPlayerResponse; // @dynamic hasPlayerResponse;
@property(nonatomic) _Bool hasPlayerUnderlay; // @dynamic hasPlayerUnderlay;
@property(nonatomic) _Bool hasPlayerVars; // @dynamic hasPlayerVars;
@property(nonatomic) _Bool hasSerializedPlayerRequest; // @dynamic hasSerializedPlayerRequest;
@property(nonatomic) _Bool hasSkipOffsetMilliseconds; // @dynamic hasSkipOffsetMilliseconds;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasTrimmedMaxNonSkippableAdDurationMs; // @dynamic hasTrimmedMaxNonSkippableAdDurationMs;
@property(nonatomic) _Bool isImmersiveSurveyWithAdPlayback; // @dynamic isImmersiveSurveyWithAdPlayback;
@property(nonatomic) _Bool isSurveyAccompanyingVideo; // @dynamic isSurveyAccompanyingVideo;
@property(nonatomic) float navigationConfidence; // @dynamic navigationConfidence;
@property(retain, nonatomic) YTIOfflineFrequencyCap *offlineFrequencyCap; // @dynamic offlineFrequencyCap;
@property(retain, nonatomic) YTIVideoAdTracking *pings; // @dynamic pings;
@property(retain, nonatomic) YTIVideoInteractionsAndProgressCommands *playbackCommands; // @dynamic playbackCommands;
@property(retain, nonatomic) YTIVideoAdOverlaySupportedRenderers *playerOverlay; // @dynamic playerOverlay;
@property(copy, nonatomic) NSData *playerResponse; // @dynamic playerResponse;
@property(retain, nonatomic) YTIRenderer *playerUnderlay; // @dynamic playerUnderlay;
@property(copy, nonatomic) NSString *playerVars; // @dynamic playerVars;
@property(copy, nonatomic) NSData *serializedPlayerRequest; // @dynamic serializedPlayerRequest;
@property(nonatomic) int skipOffsetMilliseconds; // @dynamic skipOffsetMilliseconds;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) long long trimmedMaxNonSkippableAdDurationMs; // @dynamic trimmedMaxNonSkippableAdDurationMs;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIInnerTubeContext, YTIPlaybackContext;

@interface YTIAdBreakRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int adBlock; // @dynamic adBlock;
@property(nonatomic) int autonavState; // @dynamic autonavState;
@property(nonatomic) int breakIndex; // @dynamic breakIndex;
@property(nonatomic) unsigned long long breakLengthMs; // @dynamic breakLengthMs;
@property(nonatomic) long long breakPositionMs; // @dynamic breakPositionMs;
@property(copy, nonatomic) NSString *clientPlaybackNonce; // @dynamic clientPlaybackNonce;
@property(copy, nonatomic) NSString *clientSideAdTag; // @dynamic clientSideAdTag;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) long long currentMediaTimeMs; // @dynamic currentMediaTimeMs;
@property(nonatomic) long long driftFromHeadMs; // @dynamic driftFromHeadMs;
@property(copy, nonatomic) NSString *encodedAdSafetyReason; // @dynamic encodedAdSafetyReason;
@property(copy, nonatomic) NSString *encodedParentEventId; // @dynamic encodedParentEventId;
@property(nonatomic) _Bool hasAdBlock; // @dynamic hasAdBlock;
@property(nonatomic) _Bool hasAutonavState; // @dynamic hasAutonavState;
@property(nonatomic) _Bool hasBreakIndex; // @dynamic hasBreakIndex;
@property(nonatomic) _Bool hasBreakLengthMs; // @dynamic hasBreakLengthMs;
@property(nonatomic) _Bool hasBreakPositionMs; // @dynamic hasBreakPositionMs;
@property(nonatomic) _Bool hasClientPlaybackNonce; // @dynamic hasClientPlaybackNonce;
@property(nonatomic) _Bool hasClientSideAdTag; // @dynamic hasClientSideAdTag;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasCurrentMediaTimeMs; // @dynamic hasCurrentMediaTimeMs;
@property(nonatomic) _Bool hasDriftFromHeadMs; // @dynamic hasDriftFromHeadMs;
@property(nonatomic) _Bool hasEncodedAdSafetyReason; // @dynamic hasEncodedAdSafetyReason;
@property(nonatomic) _Bool hasEncodedParentEventId; // @dynamic hasEncodedParentEventId;
@property(nonatomic) _Bool hasIsProxyAdTagRequest; // @dynamic hasIsProxyAdTagRequest;
@property(nonatomic) _Bool hasLiveTargetingParams; // @dynamic hasLiveTargetingParams;
@property(nonatomic) _Bool hasOverridePlaybackContext; // @dynamic hasOverridePlaybackContext;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool hasPlayerHeight; // @dynamic hasPlayerHeight;
@property(nonatomic) _Bool hasPlayerWidth; // @dynamic hasPlayerWidth;
@property(nonatomic) _Bool hasProxyAdTag; // @dynamic hasProxyAdTag;
@property(nonatomic) _Bool hasProxyAdTagChecksum; // @dynamic hasProxyAdTagChecksum;
@property(nonatomic) _Bool hasTopLevelDomain; // @dynamic hasTopLevelDomain;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool isProxyAdTagRequest; // @dynamic isProxyAdTagRequest;
@property(copy, nonatomic) NSString *liveTargetingParams; // @dynamic liveTargetingParams;
@property(retain, nonatomic) YTIPlaybackContext *overridePlaybackContext; // @dynamic overridePlaybackContext;
@property(copy, nonatomic) NSString *params; // @dynamic params;
@property(nonatomic) int playerHeight; // @dynamic playerHeight;
@property(nonatomic) int playerWidth; // @dynamic playerWidth;
@property(copy, nonatomic) NSString *proxyAdTag; // @dynamic proxyAdTag;
@property(copy, nonatomic) NSString *proxyAdTagChecksum; // @dynamic proxyAdTagChecksum;
@property(copy, nonatomic) NSString *topLevelDomain; // @dynamic topLevelDomain;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end


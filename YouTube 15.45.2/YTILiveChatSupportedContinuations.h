//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIInvalidationContinuationData, YTILiveChatReplayContinuationData, YTIPlayerSeekContinuationData, YTIReloadContinuationData, YTITimedContinuationData;

@interface YTILiveChatSupportedContinuations : GPBMessage
{
}

+ (id)descriptor;
+ (id)ychCreateLiveChatReplayRequestWithContinuation:(id)arg1 clickTrackingParams:(id)arg2 continuationType:(int)arg3;
+ (id)ychCreateLiveChatRequestWithContinuation:(id)arg1 clickTrackingParams:(id)arg2 continuationType:(int)arg3 reinitializingChat:(_Bool)arg4;
- (id)ychInvalidationTopic;
- (double)ychRequestDelayInterval;
- (id)ychCreateLiveChatReplayPlayerSeekRequest:(double)arg1;
- (id)ychCreateLiveChatRequest:(_Bool)arg1 reinitializingChat:(_Bool)arg2;

// Remaining properties
@property(nonatomic) _Bool hasInvalidationContinuationData; // @dynamic hasInvalidationContinuationData;
@property(nonatomic) _Bool hasLiveChatReplayContinuationData; // @dynamic hasLiveChatReplayContinuationData;
@property(nonatomic) _Bool hasPlayerSeekContinuationData; // @dynamic hasPlayerSeekContinuationData;
@property(nonatomic) _Bool hasReloadContinuationData; // @dynamic hasReloadContinuationData;
@property(nonatomic) _Bool hasTimedContinuationData; // @dynamic hasTimedContinuationData;
@property(retain, nonatomic) YTIInvalidationContinuationData *invalidationContinuationData; // @dynamic invalidationContinuationData;
@property(retain, nonatomic) YTILiveChatReplayContinuationData *liveChatReplayContinuationData; // @dynamic liveChatReplayContinuationData;
@property(retain, nonatomic) YTIPlayerSeekContinuationData *playerSeekContinuationData; // @dynamic playerSeekContinuationData;
@property(retain, nonatomic) YTIReloadContinuationData *reloadContinuationData; // @dynamic reloadContinuationData;
@property(retain, nonatomic) YTITimedContinuationData *timedContinuationData; // @dynamic timedContinuationData;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC20SuperbirdFeatureImpl24SuperbirdVoiceSessionImp.h"

#import "SPTVoiceLibrarySessionObserver-Protocol.h"

@interface _TtC20SuperbirdFeatureImpl24SuperbirdVoiceSessionImp (SuperbirdFeatureImpl) <SPTVoiceLibrarySessionObserver>
- (void)voiceSession:(id)arg1 didFailWithError:(id)arg2;
- (void)voiceSession:(id)arg1 didReceiveFinalResponse:(id)arg2;
- (void)voiceSession:(id)arg1 didUpdateIntermediateResponse:(id)arg2;
- (void)ttsPlaybackDidFailWithError:(id)arg1;
- (void)ttsPlaybackDidSucceed;
@end


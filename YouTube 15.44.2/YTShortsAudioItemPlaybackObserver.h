//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTResponder-Protocol.h"
#import "YTShortsCreationLightweightAudioPlayerObserver-Protocol.h"
#import "YTSingleVideoCurrentTimeSideEffectfulObserver-Protocol.h"
#import "YTSingleVideoErrorObserver-Protocol.h"
#import "YTSingleVideoMediaStateSideEffectfulObserver-Protocol.h"

@class NSString, YTShortsAudioItemEntityManager;
@protocol YTLightweightPlaybackController, YTResponder;

@interface YTShortsAudioItemPlaybackObserver : NSObject <YTSingleVideoErrorObserver, YTSingleVideoMediaStateSideEffectfulObserver, YTSingleVideoCurrentTimeSideEffectfulObserver, YTResponder, YTShortsCreationLightweightAudioPlayerObserver>
{
    id <YTResponder> _parentResponder;
    YTShortsAudioItemEntityManager *_entityManager;
    NSString *_currentPlayingVideoID;
    id <YTLightweightPlaybackController> _playbackController;
    CDStruct_1b6d18a9 _videoStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTLightweightPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(nonatomic) CDStruct_1b6d18a9 videoStartTime; // @synthesize videoStartTime=_videoStartTime;
@property(retain, nonatomic) NSString *currentPlayingVideoID; // @synthesize currentPlayingVideoID=_currentPlayingVideoID;
@property(retain, nonatomic) YTShortsAudioItemEntityManager *entityManager; // @synthesize entityManager=_entityManager;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)singleVideo:(id)arg1 mediaStateDidChangeToState:(long long)arg2;
- (void)singleVideo:(id)arg1 didFailWithError:(id)arg2;
- (void)potentiallyMutatedSingleVideo:(id)arg1 currentVideoTimeDidChange:(id)arg2;
- (void)potentiallyMutatedSingleVideo:(id)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)playbackController:(id)arg1 willActivateVideo:(id)arg2;
- (void)playbackController:(id)arg1 willResetToState:(int)arg2;
- (void)playbackController:(id)arg1 didReceiveVideoID:(id)arg2;
- (void)delloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


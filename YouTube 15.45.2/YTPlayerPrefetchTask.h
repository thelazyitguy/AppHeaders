//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, MLPlayerStickySettings, NSMutableArray, YTIPrefetchPlaybackContext, YTInnerTubeResponseCacheContext, YTPlayerPrebufferConfig, YTPlayerResponse, YTPlayerResponseMutableSharedData, YTPlayerTransition;
@protocol MLViewportSizeProvider;

@interface YTPlayerPrefetchTask : NSObject
{
    NSMutableArray *_updateBlocks;
    int _expectedVisibility;
    id <MLViewportSizeProvider> _viewportSizeProvider;
    MLPlayerStickySettings *_mediaStickySettings;
    YTPlayerResponse *_playerResponse;
    YTInnerTubeResponseCacheContext *_playerResponseCacheContext;
    YTPlayerResponseMutableSharedData *_playerResponseMutableSharedData;
    _Bool _pendingPrebuffer;
    YTPlayerPrebufferConfig *_pendingPrebufferConfig;
    int _state;
    GIMMe *_gimme;
    YTPlayerTransition *_playerTransition;
    YTIPrefetchPlaybackContext *_prefetchPlaybackContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTIPrefetchPlaybackContext *prefetchPlaybackContext; // @synthesize prefetchPlaybackContext=_prefetchPlaybackContext;
@property(readonly, nonatomic) __weak YTPlayerTransition *playerTransition; // @synthesize playerTransition=_playerTransition;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)newPlaybackRequest;
- (void)notifyUpdateBlocks;
- (void)startPendingPrebuffer;
- (void)stopPrebuffering;
- (void)prebufferWithPrebufferConfig:(id)arg1;
- (void)startPrefetch;
- (void)addPrefetchTaskUpdateBlock:(CDUnknownBlockType)arg1;
- (id)initWithPlayerTransition:(id)arg1 prefetchPlaybackContext:(id)arg2 initialState:(int)arg3 expectedVisibility:(int)arg4 viewportSizeProvider:(id)arg5 mediaStickySettings:(id)arg6;

@end

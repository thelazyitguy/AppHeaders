//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAutonavControllerProtocol-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSHashTable, NSString, YTAutonavPauseController, YTAutonavPrefetchController, YTIAutoplayRenderer, YTIPlayerOverlayAutoplayRenderer, YTTimedAction;
@protocol YTAutonavPauseControllerDelegate, YTAutonavPlayabilityDelegate, YTAutonavPreviousVideoDelegateProtocol, YTResponder;

@interface YTAutonavController : NSObject <YTAutonavControllerProtocol, YTResponder>
{
    NSHashTable *_observers;
    YTIAutoplayRenderer *_autoplayRenderer;
    YTIPlayerOverlayAutoplayRenderer *_autonavRenderer;
    YTAutonavPrefetchController *_prefetchController;
    YTTimedAction *_countdownTimedAction;
    double _remainingSeconds;
    _Bool _endscreenWasCancelled;
    _Bool _countdownActive;
    id <YTResponder> _parentResponder;
    id <YTAutonavPreviousVideoDelegateProtocol> _previousVideoDelegate;
    id <YTAutonavPauseControllerDelegate> _pauseDelegate;
    id <YTAutonavPlayabilityDelegate> _playabilityDelegate;
    GIMMe *_gimme;
    YTAutonavPauseController *_pauseController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTAutonavPauseController *pauseController; // @synthesize pauseController=_pauseController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) _Bool countdownActive; // @synthesize countdownActive=_countdownActive;
@property(readonly, nonatomic) _Bool endscreenWasCancelled; // @synthesize endscreenWasCancelled=_endscreenWasCancelled;
@property(nonatomic) __weak id <YTAutonavPlayabilityDelegate> playabilityDelegate; // @synthesize playabilityDelegate=_playabilityDelegate;
@property(nonatomic) __weak id <YTAutonavPauseControllerDelegate> pauseDelegate; // @synthesize pauseDelegate=_pauseDelegate;
@property(nonatomic) __weak id <YTAutonavPreviousVideoDelegateProtocol> previousVideoDelegate; // @synthesize previousVideoDelegate=_previousVideoDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)countdownTimedAction;
- (void)maybeCancelAutonavPrefetchTask;
- (void)maybeScheduleAutonavPrefetch;
- (id)navEndpointHavingWatchEndpointOrNil:(id)arg1;
- (id)prevEndpoint;
- (id)nextEndpoint;
- (id)autonavEndscreenCountdownEndpoint;
- (void)sendWatchTransitionWithNavEndpoint:(id)arg1 watchEndpointSource:(int)arg2;
- (void)countdownCompleted;
- (void)cancelCountdownTimedAction;
- (void)setMediaStickySettings:(id)arg1;
- (void)autonavCountdownDidReachTriggerWindow;
- (double)autonavCountdownWindow;
- (id)autonavRenderer;
- (id)autonavEndpoint;
- (void)removeAutonavCountdownObserver:(id)arg1;
- (void)addAutonavCountdownObserver:(id)arg1;
- (void)reset;
- (void)cancelEndscreen;
- (void)timedActionTicked;
- (void)stopCountdown;
- (void)startCountdown;
- (void)playAutonavEndscreenCountdown;
- (void)playAutonav;
- (void)playPrevious;
- (void)playNext;
- (_Bool)hasAutonavSpinner;
- (_Bool)hasAutonavVideo;
- (_Bool)hasPreviousVideo;
- (_Bool)hasNextVideo;
- (void)setAutoplayRenderer:(id)arg1 playerOverlayAutoplayRenderer:(id)arg2;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


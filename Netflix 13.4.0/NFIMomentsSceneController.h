//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFISceneViewController.h"

#import "HTTPBatchRequestTaskDelegateProtocol-Protocol.h"
#import "NFIChoicePointOverlayDelegate-Protocol.h"
#import "NFIPlayerNavigatorDelegate-Protocol.h"
#import "NFUITouchGestureDelegate-Protocol.h"

@class NFIBranchingPlayerControlsRefreshViewController, NFIChoiceModel, NFIChoicePointOverlayView, NFICountdownView, NFUITouchGestureRecognizer, NSArray, NSLayoutConstraint, NSNumber, NSString, UIView;

@interface NFIMomentsSceneController : NFISceneViewController <NFIChoicePointOverlayDelegate, NFIPlayerNavigatorDelegate, HTTPBatchRequestTaskDelegateProtocol, NFUITouchGestureDelegate>
{
    _Bool _choicePointActive;
    _Bool _userActivated;
    _Bool _userSelectedChoice;
    NFIBranchingPlayerControlsRefreshViewController *_playerControlsViewController;
    NSNumber *_videoId;
    NSArray *_cuepointQueue;
    NFIChoicePointOverlayView *_choicePointOverlay;
    NFICountdownView *_countdownView;
    UIView *_videoHitArea;
    NFUITouchGestureRecognizer *_gestureRecognizer;
    NSArray *_verticalConstraints;
    NSLayoutConstraint *_playPauseVerticalConstraint;
    NFIChoiceModel *_selectedChoice;
    NSString *_xid;
    NSNumber *_countdownSessionId;
    NSNumber *_videoSegmentSessionId;
    unsigned long long _playerState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool userSelectedChoice; // @synthesize userSelectedChoice=_userSelectedChoice;
@property(nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) NSNumber *videoSegmentSessionId; // @synthesize videoSegmentSessionId=_videoSegmentSessionId;
@property(retain, nonatomic) NSNumber *countdownSessionId; // @synthesize countdownSessionId=_countdownSessionId;
@property(copy, nonatomic) NSString *xid; // @synthesize xid=_xid;
@property(nonatomic) _Bool userActivated; // @synthesize userActivated=_userActivated;
@property(retain, nonatomic) NFIChoiceModel *selectedChoice; // @synthesize selectedChoice=_selectedChoice;
@property(nonatomic) _Bool choicePointActive; // @synthesize choicePointActive=_choicePointActive;
@property(retain, nonatomic) NSLayoutConstraint *playPauseVerticalConstraint; // @synthesize playPauseVerticalConstraint=_playPauseVerticalConstraint;
@property(retain, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(retain, nonatomic) NFUITouchGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) UIView *videoHitArea; // @synthesize videoHitArea=_videoHitArea;
@property(retain, nonatomic) NFICountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) NFIChoicePointOverlayView *choicePointOverlay; // @synthesize choicePointOverlay=_choicePointOverlay;
@property(retain, nonatomic) NSArray *cuepointQueue; // @synthesize cuepointQueue=_cuepointQueue;
@property(retain, nonatomic) NSNumber *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) __weak NFIBranchingPlayerControlsRefreshViewController *playerControlsViewController; // @synthesize playerControlsViewController=_playerControlsViewController;
- (void)dealloc;
- (void)handleDidBecomeActiveNotification:(id)arg1;
- (void)handleWillResignActivNotification:(id)arg1;
- (void)endVideoSegmentSession;
- (void)logVideoSegmentSession:(id)arg1;
- (id)loggingView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)batchRequestAllTasksDidFinish:(id)arg1;
- (void)batchRequest:(id)arg1 taskDidFinish:(id)arg2;
- (void)resetSubtitle;
- (void)positionSubtitle:(double)arg1;
- (void)choiceNavigatorStateChanged:(long long)arg1;
- (void)didSelectSegment:(id)arg1 time:(double)arg2;
- (void)didSelectSegment:(id)arg1;
- (void)lazilySelectedChoice:(id)arg1;
- (void)countdownAnimationComplete;
- (void)didSelectChoice:(id)arg1;
- (void)choiceSelectedLazily:(id)arg1;
- (void)currentSelectedChoice:(id)arg1 userInitiated:(_Bool)arg2;
- (void)didSelectChoice:(id)arg1 atIndex:(long long)arg2;
- (void)hideChoicePointUI;
- (void)choicePointEnded;
- (void)navigateToTimeMs:(double)arg1;
- (void)navigateToSegmentId:(id)arg1;
- (id)mostRecentChoicePoint;
- (id)momentForCuepoint:(id)arg1;
- (void)setViewPortRect:(struct CGRect)arg1;
- (_Bool)nearingChoicePointStart;
- (double)canSeekForward:(double)arg1;
- (double)canSeekBack:(double)arg1;
- (void)videoHitAreaEnabled:(_Bool)arg1;
- (void)playbackToggled;
- (void)playerStateChanged:(unsigned long long)arg1 previousState:(unsigned long long)arg2;
- (void)adjustGeometryForPlayerView:(id)arg1 withAspectDetails:(id)arg2;
- (void)updateCurrentTime:(float)arg1;
- (void)prefetchContent;
- (id)cuepointsFromMoments;
- (void)layoutScene;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


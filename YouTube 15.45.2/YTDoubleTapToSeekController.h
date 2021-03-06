//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTAdjustableAccessibilityProtocol-Protocol.h>
#import <Module_Framework/YTDoubleTapToSeekViewDataSource-Protocol.h>
#import <Module_Framework/YTDoubleTapToSkipGestureRecognizerDelegate-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSMutableSet, NSString, YTDoubleTapSeekChapterInfo, YTDoubleTapToSeekView, YTInlinePlayerScrubUserEducationView, YTPlayerResponse, YTQTMButton, YTTimedAction;
@protocol YTDoubleTapToSeekControllerDelegate, YTResponder;

@interface YTDoubleTapToSeekController : NSObject <YTDoubleTapToSkipGestureRecognizerDelegate, YTAdjustableAccessibilityProtocol, YTDoubleTapToSeekViewDataSource, YTResponder>
{
    YTQTMButton *_loggingProxyLeftDoubleTapButton;
    YTQTMButton *_loggingProxyRightDoubleTapButton;
    YTQTMButton *_loggingProxyScrubUserEducationButton;
    NSMutableSet *_visibleLoggingProxyButtons;
    YTTimedAction *_doubleTapToSeekTimedAction;
    double _doubleTapToSeekToleranceBefore;
    double _doubleTapToSeekToleranceAfter;
    _Bool _willSeekPastBeginningOrEnd;
    id <YTDoubleTapToSeekControllerDelegate> _delegate;
    YTPlayerResponse *_playerResponse;
    YTDoubleTapSeekChapterInfo *_currentChapterInfo;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTDoubleTapToSeekView *_doubleTapToSeekView;
    YTInlinePlayerScrubUserEducationView *_scrubUserEducationView;
    double _totalTime;
    double _mediaTime;
    double _minimumSeekableTime;
    double _maximumSeekableTime;
}

- (void).cxx_destruct;
@property(nonatomic) double maximumSeekableTime; // @synthesize maximumSeekableTime=_maximumSeekableTime;
@property(nonatomic) double minimumSeekableTime; // @synthesize minimumSeekableTime=_minimumSeekableTime;
@property(nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) __weak YTInlinePlayerScrubUserEducationView *scrubUserEducationView; // @synthesize scrubUserEducationView=_scrubUserEducationView;
@property(nonatomic) __weak YTDoubleTapToSeekView *doubleTapToSeekView; // @synthesize doubleTapToSeekView=_doubleTapToSeekView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)invalidateDoubleTapToSeekTimedAction;
- (void)endDoubleTapToSeek;
- (void)startDoubleTapToSeekTimedAction;
- (void)showDoubleTapSeekAnimationAtPoint:(struct CGPoint)arg1 seekTimeInterval:(double)arg2 direction:(long long)arg3;
- (_Bool)shouldSeekToChapterStartForTimeInterval:(double)arg1;
- (id)chapterInfoForSeekInterval:(double)arg1;
- (_Bool)attemptSeekByInterval:(double)arg1;
- (void)didDoubleTap:(id)arg1;
- (void)updateLoggingVisibilityForButton:(id)arg1;
- (id)chapterTitleForDoubleTapToSeekView:(id)arg1;
- (_Bool)doubleTapToSkipGestureRecognizer:(id)arg1 shouldTrackTouch:(id)arg2;
- (void)adjustableDecrementForView:(id)arg1;
- (void)adjustableIncrementForView:(id)arg1;
- (void)showSeekAnimationWithDirection:(long long)arg1;
- (id)accessibilityTextForDoubleTapWithDirection:(long long)arg1;
- (void)showDoubleTapToSeekEducationView:(_Bool)arg1;
- (void)enableDoubleTapToSeek:(_Bool)arg1;
- (void)setPlayerResponse:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


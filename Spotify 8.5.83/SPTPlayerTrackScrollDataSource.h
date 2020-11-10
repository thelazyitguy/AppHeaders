//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTStatefulPlayerObserver-Protocol.h"
#import "SPTStepScrollViewDataSource-Protocol.h"
#import "SPTStepScrollViewDelegate-Protocol.h"

@class NSString, NSURL, SPTNowPlayingBarModel, SPTNowPlayingSkipLimitReachedMessageRequester, SPTStepScrollView;
@protocol SPTPlayerTrackScrollDataSourceDelegate, SPTPlayerTrackScrollViewOffsetDelegate;

@interface SPTPlayerTrackScrollDataSource : NSObject <SPTStatefulPlayerObserver, SPTStepScrollViewDataSource, SPTStepScrollViewDelegate>
{
    SPTStepScrollView *_scrollView;
    id <SPTPlayerTrackScrollDataSourceDelegate> _delegate;
    id <SPTPlayerTrackScrollViewOffsetDelegate> _offsetDelegate;
    NSURL *_currentTrack;
    NSString *_currentUID;
    NSURL *_currentContext;
    SPTNowPlayingBarModel *_nowPlayingModel;
    SPTNowPlayingSkipLimitReachedMessageRequester *_skipLimitReachedMessageRequester;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTNowPlayingSkipLimitReachedMessageRequester *skipLimitReachedMessageRequester; // @synthesize skipLimitReachedMessageRequester=_skipLimitReachedMessageRequester;
@property(retain, nonatomic) SPTNowPlayingBarModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(retain, nonatomic) NSURL *currentContext; // @synthesize currentContext=_currentContext;
@property(retain, nonatomic) NSString *currentUID; // @synthesize currentUID=_currentUID;
@property(retain, nonatomic) NSURL *currentTrack; // @synthesize currentTrack=_currentTrack;
@property(nonatomic) __weak id <SPTPlayerTrackScrollViewOffsetDelegate> offsetDelegate; // @synthesize offsetDelegate=_offsetDelegate;
@property(nonatomic) __weak id <SPTPlayerTrackScrollDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPTStepScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)playerDidUpdateTrackPosition:(id)arg1;
- (void)playerDidUpdatePlaybackControls:(id)arg1;
- (void)player:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)playerDidReceiveStateUpdate:(id)arg1;
- (void)stepScrollViewDidScroll:(id)arg1;
- (void)stepScrollView:(id)arg1 didAttemptScrollToRelativeIndex:(long long)arg2;
- (void)stepScrollView:(id)arg1 didScrollToRelativeIndex:(long long)arg2;
- (id)stepScrollView:(id)arg1 pageViewAtRelativeIndex:(long long)arg2;
- (void)configureAllPageViews;
- (id)subtitleForTrack:(id)arg1;
- (void)configurePageView:(id)arg1 atRelativeIndex:(long long)arg2;
- (long long)stepScrollView:(id)arg1 numberOfStepsInDirection:(long long)arg2;
- (void)currentTrackChanged:(id)arg1;
- (void)contextTracksChanged;
- (void)hibernate;
- (void)awken;
- (id)initWithStepScrollView:(id)arg1 nowPlayingModel:(id)arg2 skipLimitReachedMessageRequester:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


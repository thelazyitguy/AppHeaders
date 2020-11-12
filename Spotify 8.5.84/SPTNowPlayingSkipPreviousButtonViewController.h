//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingModelObserver-Protocol.h"

@class NSString, SPTNowPlayingButton, SPTNowPlayingModel, SPTTheme;
@protocol SPTNowPlayingPlaybackActionsHandler;

@interface SPTNowPlayingSkipPreviousButtonViewController : UIViewController <SPTNowPlayingModelObserver>
{
    SPTNowPlayingModel *_model;
    id <SPTNowPlayingPlaybackActionsHandler> _playbackActionsHandler;
    SPTTheme *_theme;
    SPTNowPlayingButton *_previousButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTNowPlayingButton *previousButton; // @synthesize previousButton=_previousButton;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingPlaybackActionsHandler> playbackActionsHandler; // @synthesize playbackActionsHandler=_playbackActionsHandler;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)updateSkipButtons;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithModel:(id)arg1 playbackActionsHandler:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

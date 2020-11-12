//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingAuxiliaryActionsHandlerObserver-Protocol.h"
#import "SPTNowPlayingModelObserver-Protocol.h"

@class NSString, SPTNowPlayingModel, SPTTheme, UIButton;
@protocol SPTNowPlayingAuxiliaryActionsHandler, SPTPodcastSpeedControlManager;

@interface SPTNowPlayingSpeedControlButtonViewController : UIViewController <SPTNowPlayingAuxiliaryActionsHandlerObserver, SPTNowPlayingModelObserver>
{
    SPTNowPlayingModel *_model;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTTheme *_theme;
    id <SPTPodcastSpeedControlManager> _speedControlManager;
    UIButton *_speedControlButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *speedControlButton; // @synthesize speedControlButton=_speedControlButton;
@property(readonly, nonatomic) id <SPTPodcastSpeedControlManager> speedControlManager; // @synthesize speedControlManager=_speedControlManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)auxiliaryActionsHandlerDidChangePodcastSpeed:(id)arg1;
- (void)updateSpeedControlButton;
- (id)speedControlButtonAccessibilityLabel;
- (id)createSpeedControlButton;
- (void)presentSpeedControlMenu:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithModel:(id)arg1 auxiliaryActionsHandler:(id)arg2 speedControlManager:(id)arg3 theme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTNavigationController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class NSString, YTTransitionManager;
@protocol YTModalPlaybackChangeResponderProvider;

@interface YTReelBackStackNavigationViewController : YTNavigationController <YTUserChangedObserver, UIGestureRecognizerDelegate>
{
    YTTransitionManager *_transitionManager;
    unsigned long long _priorPlaybackState;
    id <YTModalPlaybackChangeResponderProvider> _modalPlaybackChangeResponderProvider;
    _Bool _prefersStatusBarHidden;
    long long _preferredStatusBarStyle;
}

- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)previousViewControllerInNavController;
- (id)nearestGraftingViewController:(id)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)userDidChange;
- (void)userWillChange;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)strictlyDismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restorePriorWatchPlaybackState;
- (void)deactivateCurrentWatchPlayback;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setUpTransitions;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


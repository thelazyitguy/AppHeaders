//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSwipeLeftCoordinator-Protocol.h"
#import "YTSwipePresentTransitionManagerDelegate-Protocol.h"

@class GIMMe, NSString, YTICommand, YTInteractionLoggingProxyButton, YTSwipePresentTransitionManager;
@protocol YTSwipeLeftPresenter;

@interface YTAppSwipeLeftCoordinator : NSObject <YTSwipePresentTransitionManagerDelegate, YTSwipeLeftCoordinator>
{
    NSString *_lastCSN;
    YTICommand *_swipeLeftModel;
    YTICommand *_interceptedModel;
    YTSwipePresentTransitionManager *_transitionManager;
    YTInteractionLoggingProxyButton *_swipeStartButton;
    YTInteractionLoggingProxyButton *_swipeEngagedButton;
    YTInteractionLoggingProxyButton *_swipeCancelledButton;
    _Bool _loadOnSwipe;
    NSObject<YTSwipeLeftPresenter> *_presenter;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak NSObject<YTSwipeLeftPresenter> *presenter; // @synthesize presenter=_presenter;
- (id)swipeViewControllerFromModel:(id)arg1;
- (id)swipeLeftViewController;
- (id)swipeNavigationController;
- (id)swipeChildViewController;
- (_Bool)canReloadWithModel:(id)arg1;
- (void)setSwipeStartAsParentForModel:(id)arg1;
- (void)transitionManagerDidPresent:(id)arg1 wasInteractive:(_Bool)arg2;
- (void)transitionManagerDidDismiss:(id)arg1 wasInteractive:(_Bool)arg2;
- (void)transitionManagerWillPresent:(id)arg1;
- (void)bindSwipeLeftCommand:(id)arg1 toPresenter:(id)arg2;
- (_Bool)tryToSwipeLeftWithCommand:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

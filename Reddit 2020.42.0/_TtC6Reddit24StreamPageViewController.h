//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@interface _TtC6Reddit24StreamPageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>
{
    // Error parsing type: , name: controlView
    // Error parsing type: , name: loadingView
    // Error parsing type: , name: disabledAlpha
    // Error parsing type: , name: enabledAlpha
    // Error parsing type: , name: centerX
    // Error parsing type: , name: kSwipeTutorialDelaySeconds
    // Error parsing type: , name: presenter
    // Error parsing type: , name: didSeeFetchStreamErrorPopup
    // Error parsing type: , name: userIsPaging
    // Error parsing type: , name: pagingIsEnabled
    // Error parsing type: , name: mightBeDismissing
    // Error parsing type: , name: swipeTutorialView
    // Error parsing type: , name: swipeTutorialTimer
    // Error parsing type: , name: didShowPromptTooltip
    // Error parsing type: , name: promptTooltipView
    // Error parsing type: , name: isSettingViewControllers
    // Error parsing type: , name: dialogViewController
    // Error parsing type: , name: broadcastEligibilityPresenter
    // Error parsing type: , name: readyForSwitching
    // Error parsing type: , name: isAnimatingControls
    // Error parsing type: , name: streamViewControllerCache
    // Error parsing type: , name: isPresentingCommunity
    // Error parsing type: , name: hasStatic
    // Error parsing type: , name: isVideoV2Enabled
    // Error parsing type: , name: streamViewControllerCacheV1
    // Error parsing type: , name: streamViewControllerCacheV2
}

- (void).cxx_destruct;
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;
- (void)didTapOverflow:(id)arg1;
- (void)didTapRPANSubredditLink:(id)arg1;
- (void)didTapBroadcast:(id)arg1;
- (void)handleTapShare:(id)arg1;
- (void)didTapModerate:(id)arg1;
- (void)closeLiveStream:(id)arg1;
- (void)reachabilityDidChange;
- (void)didTapSubredditSelector;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)willEnterForeground;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)handleScreenLeftEdgePanWithGesture:(id)arg1;
- (void)didSwipeDown;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithLiveStreamViewerPresenter:(id)arg1;
@property(nonatomic, readonly) long long preferredStatusBarStyle;

@end

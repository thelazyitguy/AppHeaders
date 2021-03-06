//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <Module_Framework/UINavigationControllerDelegate-Protocol.h>
#import <Module_Framework/YTHotConfigObserver-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class GIMMe, NSString, UIScrollView, YTHotConfig;
@protocol UINavigationControllerDelegate, YTScrollableNavigationControllerDelegate;

@interface YTScrollableNavigationController : UINavigationController <UINavigationControllerDelegate, YTHotConfigObserver, YTSystemNotificationsObserver>
{
    double _lastContentOffsetY;
    double _lastSignedContentOffsetY;
    UIScrollView *_lastScrollView;
    _Bool _scrollingUp;
    id <UINavigationControllerDelegate> _externalDelegate;
    _Bool _isBidirectionalSymmetricalScrollEnabled;
    YTHotConfig *_hotConfig;
    _Bool _disableScrolling;
    GIMMe *_gimme;
    id <YTScrollableNavigationControllerDelegate> _scrollDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableScrolling; // @synthesize disableScrolling=_disableScrolling;
@property(nonatomic) __weak id <YTScrollableNavigationControllerDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (_Bool)isScrollViewAtBottom:(id)arg1 withOffset:(double)arg2;
- (void)scrollUpAnimated:(_Bool)arg1;
- (void)scrollNavHeaderViewWithOffset:(double)arg1;
- (void)setupHeaderForViewController:(id)arg1;
- (void)hotConfigDidChange:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)scrollDownAnimated:(_Bool)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setBidirectionalSymmetricalScrollEnabled:(_Bool)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollOnHome:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OGLDrawerViewControllerBase.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView, UIView, UIViewController;

@interface OGLSideDrawerViewController : OGLDrawerViewControllerBase <UIGestureRecognizerDelegate>
{
    UIViewController *_drawerContainerViewController;
    _Bool _topHeaderReceivesHorizontalPanning;
    UIView *_overlayView;
    UIView *_underlyingBackgroundView;
    UIImageView *_rightShadowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *rightShadowImageView; // @synthesize rightShadowImageView=_rightShadowImageView;
@property(retain, nonatomic) UIView *underlyingBackgroundView; // @synthesize underlyingBackgroundView=_underlyingBackgroundView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) _Bool topHeaderReceivesHorizontalPanning; // @synthesize topHeaderReceivesHorizontalPanning=_topHeaderReceivesHorizontalPanning;
- (void)voiceOverStatusChanged;
- (void)handleOverlayTap;
- (void)handleOverlayPanStateChange:(long long)arg1 forPanRecognizer:(id)arg2;
- (void)handleOverlayPan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)panRecognizerFromView:(id)arg1;
- (id)panRecognizerForRecognizer:(id)arg1;
- (void)detachDrawerSlideGestureRecognizerFromView:(id)arg1;
- (void)attachDrawerSlideGestureRecognizerToView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startDismissalTransitionAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startPresentationTransitionAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)setUpAndLayoutRightShadow;
- (void)openDrawer:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (double)drawerWidthForCurrentSetup;
- (void)layoutViewsBeforeDisplaying;
- (double)appBarHeight;
- (struct UIEdgeInsets)presentingViewSafeAreaInsets;
- (double)topHeaderHeight;
- (id)drawerContainerViewController;
- (id)overlayViewBackgroundColor;
- (id)orderedAccessibilityElements;
- (struct UIEdgeInsets)topDrawerHeaderEdgeInsets;
- (id)panningView;
- (void)dealloc;
- (id)initWithMainContentViewController:(id)arg1 headerViewController:(id)arg2 footerViewController:(id)arg3 theme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

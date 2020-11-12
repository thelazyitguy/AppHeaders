//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOONavigationChildController-Protocol.h"
#import "GOONavigationHeaderViewDelegate-Protocol.h"

@class GOONavigationHeaderController, GOONavigationHeaderView, GOONavigationStyle, NSHashTable, NSString, UIScrollView, UIViewController;

@interface GOOThickNavigationChildController : NSObject <GOONavigationHeaderViewDelegate, GOONavigationChildController>
{
    GOONavigationStyle *_style;
    UIScrollView *_observedScrollView;
    NSHashTable *_secondaryScrollViews;
    GOONavigationHeaderController *_headerController;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)barButtonItemPropertyKeyPaths;
- (id)navigationItemKeyPathContextMap;
- (void)stopObservingBarButtonItems:(id)arg1;
- (void)startObservingBarButtonItems:(id)arg1;
- (struct UIEdgeInsets)primaryScrollViewIndicatorInsets;
- (id)primaryScrollView;
- (void)stopTrackingScrollView;
- (void)startTrackingScrollView;
- (void)adjustScrollViewInsetsForScrollView:(id)arg1 indicatorInsets:(struct UIEdgeInsets)arg2;
- (void)syncSecondaryScrollViewContentOffsets;
- (void)updateSecondaryScrollViewInsets;
- (void)updatePrimaryScrollViewInsets;
- (void)navigationHeaderViewSafeAreaInsetsDidChange:(id)arg1;
- (void)reparentHeaderIfNeeded;
- (void)setHeaderViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isHeaderViewHidden) _Bool headerViewHidden;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (void)didShowViewControllerAnimated:(_Bool)arg1;
- (void)willShowViewControllerAnimated:(_Bool)arg1;
- (void)updateSecondaryScrollViews;
- (void)updatePrimaryScrollView;
- (void)safeAreaInsetsDidChange;
- (void)updateNavigationStyleWithTopSafeAreaSourceViewController:(id)arg1;
- (void)updateNavigationStyle;
- (void)adjustSecondaryScrollViewsWithPrimaryContentOffset:(struct CGPoint)arg1;
- (void)observedScrollViewContentOffsetDidChange:(struct CGPoint)arg1 snapHeader:(_Bool)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setShouldAdjustHeaderForScrollViewChanges:(_Bool)arg1;
@property(readonly, nonatomic) GOONavigationHeaderView *headerView;
- (void)dealloc;
- (id)init;
- (id)initWithViewController:(id)arg1 navigationStyle:(id)arg2 navigationDepth:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

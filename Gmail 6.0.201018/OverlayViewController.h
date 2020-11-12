//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HUBSnackbarManagerDelegate-Protocol.h"
#import "ListViewControllerScrollDelegate-Protocol.h"

@class ListViewController, MDCFloatingButton, NSString, UIView;
@protocol GBTClient, HUBSnackbarManager;

@interface OverlayViewController : UIViewController <HUBSnackbarManagerDelegate, ListViewControllerScrollDelegate>
{
    id <GBTClient> _client;
    MDCFloatingButton *_composeButton;
    UIView *_composeButtonContainer;
    id <HUBSnackbarManager> _snackbarManager;
    double _initialContentOffset;
    double _previousContentDelta;
    ListViewController *_listViewController;
    double _composeButtonBottomOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double composeButtonBottomOffset; // @synthesize composeButtonBottomOffset=_composeButtonBottomOffset;
@property(readonly, nonatomic) ListViewController *listViewController; // @synthesize listViewController=_listViewController;
- (void)tappedComposeButton:(id)arg1;
- (void)updateComposeButtonPosition;
- (struct CGPoint)composeButtonContainerOrigin;
- (void)viewSafeAreaInsetsDidChange;
- (_Bool)isComposeButtonVisible;
- (id)composeButton;
- (void)setUpComposeButton;
- (void)logTapOnVisualElementTag:(CDStruct_a9c8ee48)arg1;
- (void)collapseComposeButton;
- (void)expandComposeButton;
- (void)listViewControllerDidEndScrollingAnimation:(id)arg1 scrollView:(id)arg2;
- (void)listViewControllerDidScrollToTop:(id)arg1 scrollView:(id)arg2;
- (_Bool)listViewControllerShouldScrollToTop:(id)arg1 scrollView:(id)arg2;
- (void)listViewControllerDidScroll:(id)arg1 scrollView:(id)arg2;
- (void)listViewControllerWillBeginDragging:(id)arg1 scrollView:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (id)navigationItem;
- (void)loadView;
- (_Bool)overlayButtonsHidden;
- (void)setOverlayButtonsHidden:(_Bool)arg1;
- (void)animateComposeButton:(double)arg1;
- (void)didBecomeTopSnackbarDelegate;
- (void)animateDownComposeButton;
- (void)animateUpComposeButton;
- (void)snackbarDidDisappear;
- (void)isPresentingSnackbar;
- (double)snackbarBottomOffset;
- (void)shutdown;
- (void)updateOverlayViewOptionsForController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)updateOverlayViewOptions;
- (id)initWithClientPromise:(id)arg1 listViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTMultiSizeViewController.h>

#import <Module_Framework/YTResponder-Protocol.h>
#import <Module_Framework/YTTitleControlResponderProvider-Protocol.h>
#import <Module_Framework/YTTopController-Protocol.h>

@class GIMMe, NSHashTable, NSString, UIButton, YTCommandResponderEvent, YTInteractionLoggingProxyButton, YTNavigationBarTitleView, YTQTMButton;
@protocol YTColorStyle, YTLayoutStyle, YTResponder;

@interface YTStyledViewController : YTMultiSizeViewController <YTResponder, YTTopController, YTTitleControlResponderProvider>
{
    UIButton *_backButton;
    YTQTMButton *_titleButton;
    YTInteractionLoggingProxyButton *_titleErroneousTapTrackingButton;
    YTNavigationBarTitleView *_navBarTitleView;
    id <YTLayoutStyle> _layoutStyle;
    id <YTColorStyle> _colorStyle;
    NSHashTable *_titleTapListeners;
    _Bool _shouldSetupNavigationBarStyle;
    _Bool _viewAppeared;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool viewAppeared; // @synthesize viewAppeared=_viewAppeared;
@property(readonly, nonatomic) YTQTMButton *titleButton; // @synthesize titleButton=_titleButton;
@property(nonatomic) _Bool shouldSetupNavigationBarStyle; // @synthesize shouldSetupNavigationBarStyle=_shouldSetupNavigationBarStyle;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)setupNavigationBarAppearance;
- (id)styleContextInPopover;
- (id)styleContextForNavigationBar;
- (long long)controlContentAlignmentForTextAlignment:(long long)arg1;
- (_Bool)isHeaderViewParentOfView:(id)arg1;
- (void)updateTitleTabsViewFrame;
- (void)setupTitleButton;
- (void)updateTitleAccessibility;
- (void)updateShadowNavBar;
- (_Bool)shouldLogNoopTaps;
- (void)updateBackButtonStyle;
- (void)performBackNavigation;
- (void)didTapTitle:(id)arg1;
- (void)didTapBack:(id)arg1;
- (id)navBarForegroundColor;
- (_Bool)isLeftNavigationButtonHidden;
- (void)removeTitleTapObserver:(id)arg1;
- (void)addTitleTapObserver:(id)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)willAnimateTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setShouldCenterNavBarTitleView:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setTitleImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setNavBarTitleView:(id)arg1;
- (id)navBarTitleView;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end


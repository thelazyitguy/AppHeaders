//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTPageStyleProvider-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class CALayer, NSString, UICollectionView, UIControl, UIScrollView, YTIUnifiedSharePanelRenderer, YTQTMButton, YTShareBusyView, YTShareCommunityPostView, YTSharePanelPromoView, YTShareTitleView;
@protocol YTPageStyleProvider, YTResponder;

@interface YTShareMainView : UIView <YTPageStyling, YTPageStyleProvider, YTResponder>
{
    YTIUnifiedSharePanelRenderer *_renderer;
    YTShareBusyView *_busyView;
    YTQTMButton *_cancelButton;
    CALayer *_cancelButtonBorder;
    UICollectionView *_contentListView;
    UIControl *_dismissArea;
    UIControl *_safeArea;
    YTSharePanelPromoView *_promoView;
    YTShareTitleView *_titleView;
    YTShareCommunityPostView *_communityPostTitleView;
    UIScrollView *_communityPostScrollView;
    double _sharePanelHeight;
    id <YTResponder> _parentResponder;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (_Bool)isMovedToMakeRoomForKeyboard;
- (double)adjustHeightForSafeArea:(double)arg1 offsetYFromBottom:(double)arg2;
- (unsigned long long)currentTimeMs;
- (_Bool)shouldShowPromo;
- (void)layoutBusyView;
- (double)layoutCommunityPostScrollViewWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)layoutTitleViewWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)layoutPromoWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)heightForContentList;
- (double)layoutContentListWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)layoutCancelButtonWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)layoutSafeAreaWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (void)animateVerticallyWithView:(id)arg1 y:(double)arg2 height:(double)arg3;
- (double)sharePanelWidth;
- (void)updateViewDrawingOrder;
- (void)layoutBusyViewForClassInitialization;
- (_Bool)hasCommunityPostHeader;
- (_Bool)isLandscapeMode;
- (void)addCommunityPostScrollViewWithFrame:(struct CGRect)arg1;
- (void)addSafeArea;
- (void)addDismissArea;
- (void)addCancelButton;
- (void)addBusyViewWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) long long pageStyle;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setRenderer:(id)arg1;
- (void)setPromoView:(id)arg1;
- (void)setContentListView:(id)arg1;
- (void)setFormattedStringLabelDelegate:(id)arg1;
- (void)setCommunityPostViewDelegate:(id)arg1;
- (void)viewWillDisappear;
- (void)displayHint;
- (void)viewDidAppear;
- (void)layoutBusyViews;
- (void)setWaitingForContents:(_Bool)arg1;
- (void)setBusy:(_Bool)arg1;
- (void)resetAccessibilityCursor;
- (void)hidePromoWithDismissalExpiryMs:(long long)arg1;
- (void)setDismissTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDismissTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)accessibilityPerformEscape;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


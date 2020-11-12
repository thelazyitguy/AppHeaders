//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NavigationFramework/GMSNavStepPagingScrollViewDataSourceDelegate-Protocol.h>
#import <NavigationFramework/GMSNavStepPagingScrollViewDelegate-Protocol.h>

@class GMSNavHeaderBannerView, GMSNavStepPagingScrollView, GMSNavStepPagingScrollViewDataSource, NSString, UIColor, UIFont;
@protocol GMSNavHeaderViewDelegate, GMSUserEvent3Logging;

@interface GMSNavHeaderView : UIView <GMSNavStepPagingScrollViewDataSourceDelegate, GMSNavStepPagingScrollViewDelegate>
{
    _Bool _ignoreScrollViewDelegateCallback;
    long long _headerViewLayout;
    _Bool _nextStepHintHidden;
    _Bool _nightMode;
    _Bool _rerouting;
    _Bool _minimize;
    id <GMSNavHeaderViewDelegate> _delegate;
    GMSNavStepPagingScrollViewDataSource *_stepDataSource;
    id <GMSUserEvent3Logging> _ue3Logger;
    GMSNavStepPagingScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool minimize; // @synthesize minimize=_minimize;
@property(retain, nonatomic) GMSNavStepPagingScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic, getter=isRerouting) _Bool rerouting; // @synthesize rerouting=_rerouting;
@property(nonatomic) _Bool nightMode; // @synthesize nightMode=_nightMode;
@property(retain, nonatomic) id <GMSUserEvent3Logging> ue3Logger; // @synthesize ue3Logger=_ue3Logger;
@property(retain, nonatomic) GMSNavStepPagingScrollViewDataSource *stepDataSource; // @synthesize stepDataSource=_stepDataSource;
@property(nonatomic) __weak id <GMSNavHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool nextStepHintHidden; // @synthesize nextStepHintHidden=_nextStepHintHidden;
- (void)pagingScrollViewDidChangePages:(id)arg1;
- (void)navStepsPagingScrollViewDidTapPreviousStep:(id)arg1;
- (void)navStepsPagingScrollViewDidTapNextStep:(id)arg1;
- (void)navStepsPagingScrollViewDidChangeStep:(id)arg1;
- (void)navStepViewDataSource:(id)arg1 customizePageView:(id)arg2 atIndex:(long long)arg3 step:(id)arg4 pagingScrollView:(id)arg5;
- (void)viewWillAnimateTransitionToHeaderViewLayout:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToHeaderViewLayout:(long long)arg1 duration:(double)arg2;
- (void)willDisappearAnimated:(_Bool)arg1;
- (void)didAppearAnimated:(_Bool)arg1;
- (double)actionViewHeight;
- (double)laneGuidanceHeight;
- (struct CGRect)extraViewBounds;
@property(readonly, nonatomic) double backgroundViewHeight;
- (double)contentHeightForHeaderViewLayout:(long long)arg1;
- (double)contentHeight;
- (void)setSelectedPageIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setSelectedStep:(id)arg1 animated:(_Bool)arg2;
- (id)selectedStep;
- (void)updateNextStepHint;
- (void)minimizeHeader:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNextStepHintHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) UIColor *stepSeparationColor;
@property(copy, nonatomic) UIFont *navigationStyleInstructionsSmallFont;
@property(copy, nonatomic) UIFont *navigationStyleInstructionsSecondaryFont;
@property(copy, nonatomic) UIFont *navigationStyleInstructionsPrimaryFont;
@property(copy, nonatomic) UIColor *navigationStyleInstructionsTextColor;
@property(copy, nonatomic) UIFont *navigationStyleDistanceUnitsFont;
@property(copy, nonatomic) UIColor *navigationStyleDistanceUnitsTextColor;
@property(copy, nonatomic) UIFont *navigationStyleDistanceValueFont;
@property(copy, nonatomic) UIColor *navigationStyleDistanceValueTextColor;
@property(copy, nonatomic) UIFont *navigationStyleNextStepFont;
@property(copy, nonatomic) UIColor *navigationStyleNextStepTextColor;
@property(copy, nonatomic) UIColor *guidanceRecommendedLaneColor;
@property(copy, nonatomic) UIColor *nextStepNavigationManeuverIconColor;
@property(copy, nonatomic) UIColor *primaryNavigationManeuverIconColor;
@property(nonatomic) double backgroundAlpha;
@property(copy, nonatomic) UIColor *secondaryBackgroundColorForNightMode;
@property(copy, nonatomic) UIColor *primaryBackgroundColorForNightMode;
@property(copy, nonatomic) UIColor *secondaryBackgroundColor;
@property(copy, nonatomic) UIColor *primaryBackgroundColor;
- (void)reloadStepData;
@property(readonly, nonatomic) GMSNavHeaderBannerView *currentPageView;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithHeaderViewLayout:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

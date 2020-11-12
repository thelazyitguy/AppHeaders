//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_NIPagingScrollViewPage.h>

@class GMSAnalytics, GMSDDistanceFormatter, GMSDLaneGuidanceView, GMSDLaneIconResources, GMSDStep, GMSDTrip, GMSNInstructionFormatter, GMSServerResourceManager, GMSx_NextStepView, NSAttributedString, UIButton, UIColor, UIFont, UIImageView, UILabel, UIView;

@interface GMSNavHeaderBannerView : GMSx_NIPagingScrollViewPage
{
    UIView *_backgroundView;
    UIImageView *_actionImageView;
    UILabel *_distanceLabel;
    UILabel *_instructionsView;
    GMSDDistanceFormatter *_distanceFormatter;
    UIColor *_navigationStyleInstructionsTextShadowColor;
    GMSDStep *_step;
    GMSDTrip *_route;
    int _distanceMeters;
    NSAttributedString *_distanceAttributedText;
    long long _pathIndex;
    GMSAnalytics *_analytics;
    GMSServerResourceManager *_resourceManager;
    GMSNInstructionFormatter *_instructionFormatter;
    GMSDStep *_nextStep;
    int _metersToNextStep;
    _Bool _nextStepHidden;
    GMSx_NextStepView *_nextStepView;
    GMSDLaneIconResources *_laneIconResources;
    GMSDLaneGuidanceView *_laneGuidanceView;
    _Bool _laneGuidanceHidden;
    UIView *_actionBackgroundView;
    UIColor *_currentStepBackgroundColor;
    UIColor *_currentStepNightModeBackgroundColor;
    UIColor *_otherStepBackgroundColor;
    int _maneuverImageType;
    int _maneuverImageSize;
    double _actionImageDimension;
    double _actionImageMinimalVerticallyCompactDimension;
    double _textMaxPortraitLineHeight;
    _Bool _alwaysHideNextAndLaneViews;
    _Bool _minimalHeightVerticallyCompactMode;
    UIFont *_distanceValueFont;
    UIColor *_distanceValueColor;
    UIFont *_distanceUnitsFont;
    UIColor *_distanceUnitsColor;
    _Bool _nightMode;
    _Bool _current;
    long long _headerViewLayout;
    UIButton *_arrowLeftButton;
    UIButton *_arrowRightButton;
    long long _style;
    UIColor *_primaryBackgroundColor;
    UIColor *_secondaryBackgroundColor;
    UIColor *_primaryBackgroundColorForNightMode;
    UIColor *_secondaryBackgroundColorForNightMode;
    double _backgroundAlpha;
    UIColor *_primaryNavigationManeuverIconColor;
    UIColor *_nextStepNavigationManeuverIconColor;
    UIColor *_guidanceRecommendedLaneColor;
    UIColor *_navigationStyleNextStepTextColor;
    UIFont *_navigationStyleNextStepFont;
    UIColor *_navigationStyleDistanceValueTextColor;
    UIFont *_navigationStyleDistanceValueFont;
    UIColor *_navigationStyleDistanceUnitsTextColor;
    UIFont *_navigationStyleDistanceUnitsFont;
    UIColor *_navigationStyleInstructionsTextColor;
    UIFont *_navigationStyleInstructionsPrimaryFont;
    UIFont *_navigationStyleInstructionsSecondaryFont;
    UIFont *_navigationStyleInstructionsSmallFont;
    struct UIEdgeInsets _contentInsets;
}

+ (double)defaultHeightForHeaderViewLayout:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) UIFont *navigationStyleInstructionsSmallFont; // @synthesize navigationStyleInstructionsSmallFont=_navigationStyleInstructionsSmallFont;
@property(copy, nonatomic) UIFont *navigationStyleInstructionsSecondaryFont; // @synthesize navigationStyleInstructionsSecondaryFont=_navigationStyleInstructionsSecondaryFont;
@property(copy, nonatomic) UIFont *navigationStyleInstructionsPrimaryFont; // @synthesize navigationStyleInstructionsPrimaryFont=_navigationStyleInstructionsPrimaryFont;
@property(copy, nonatomic) UIColor *navigationStyleInstructionsTextColor; // @synthesize navigationStyleInstructionsTextColor=_navigationStyleInstructionsTextColor;
@property(copy, nonatomic) UIFont *navigationStyleDistanceUnitsFont; // @synthesize navigationStyleDistanceUnitsFont=_navigationStyleDistanceUnitsFont;
@property(copy, nonatomic) UIColor *navigationStyleDistanceUnitsTextColor; // @synthesize navigationStyleDistanceUnitsTextColor=_navigationStyleDistanceUnitsTextColor;
@property(copy, nonatomic) UIFont *navigationStyleDistanceValueFont; // @synthesize navigationStyleDistanceValueFont=_navigationStyleDistanceValueFont;
@property(copy, nonatomic) UIColor *navigationStyleDistanceValueTextColor; // @synthesize navigationStyleDistanceValueTextColor=_navigationStyleDistanceValueTextColor;
@property(copy, nonatomic) UIFont *navigationStyleNextStepFont; // @synthesize navigationStyleNextStepFont=_navigationStyleNextStepFont;
@property(copy, nonatomic) UIColor *navigationStyleNextStepTextColor; // @synthesize navigationStyleNextStepTextColor=_navigationStyleNextStepTextColor;
@property(copy, nonatomic) UIColor *guidanceRecommendedLaneColor; // @synthesize guidanceRecommendedLaneColor=_guidanceRecommendedLaneColor;
@property(copy, nonatomic) UIColor *nextStepNavigationManeuverIconColor; // @synthesize nextStepNavigationManeuverIconColor=_nextStepNavigationManeuverIconColor;
@property(copy, nonatomic) UIColor *primaryNavigationManeuverIconColor; // @synthesize primaryNavigationManeuverIconColor=_primaryNavigationManeuverIconColor;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(copy, nonatomic) UIColor *secondaryBackgroundColorForNightMode; // @synthesize secondaryBackgroundColorForNightMode=_secondaryBackgroundColorForNightMode;
@property(copy, nonatomic) UIColor *primaryBackgroundColorForNightMode; // @synthesize primaryBackgroundColorForNightMode=_primaryBackgroundColorForNightMode;
@property(copy, nonatomic) UIColor *secondaryBackgroundColor; // @synthesize secondaryBackgroundColor=_secondaryBackgroundColor;
@property(copy, nonatomic) UIColor *primaryBackgroundColor; // @synthesize primaryBackgroundColor=_primaryBackgroundColor;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIButton *arrowRightButton; // @synthesize arrowRightButton=_arrowRightButton;
@property(retain, nonatomic) UIButton *arrowLeftButton; // @synthesize arrowLeftButton=_arrowLeftButton;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long headerViewLayout; // @synthesize headerViewLayout=_headerViewLayout;
@property(nonatomic, getter=isCurrent) _Bool current; // @synthesize current=_current;
@property(nonatomic, getter=isNightMode) _Bool nightMode; // @synthesize nightMode=_nightMode;
@property(readonly, nonatomic) GMSDStep *step; // @synthesize step=_step;
- (void)updateInstructionFormatterAndShadow;
- (void)updatePrimaryBackgroundColors;
- (_Bool)mayUseCustomColors;
- (id)maneuverImageForStep:(id)arg1 imageType:(int)arg2 imageSize:(int)arg3;
- (_Bool)shouldShowNextStep;
- (_Bool)shouldShowLaneGuidanceView;
- (void)updateNextStepView;
- (void)minimizeHeader:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setMinimalHeightVerticallyCompactMode:(_Bool)arg1;
- (void)setLaneGuidanceHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNextStepHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)clearNextStep;
- (void)setNextStep:(id)arg1 metersToNextStep:(int)arg2;
- (void)hideSubviews;
- (void)showLeftViews;
- (id)distanceAttributedTextForMeters:(int)arg1;
- (void)updateDistanceLabelScale;
- (void)updateDistanceAttributedText;
- (void)updateInstructionsViewTextWithInstruction:(id)arg1;
- (void)updateInstructionAndDistanceViews;
- (void)updateLaneGuidanceViews;
- (void)setStep:(id)arg1 route:(id)arg2 pathIndex:(long long)arg3 distanceMeters:(int)arg4 resourceManager:(id)arg5 laneIconResources:(id)arg6;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)didChangeVisualState;
@property(readonly, nonatomic) double backgroundViewHeight;
@property(readonly, nonatomic) struct CGRect extraViewBounds;
- (void)layoutNextStepAndLaneIconViewsWithActionWidth:(double)arg1 maxActionSize:(struct CGSize)arg2;
@property(readonly, nonatomic) GMSDLaneGuidanceView *laneGuidanceView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviewsWithBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)shouldUseVerticallyCompactLayout;
@property(readonly, nonatomic) double actionViewHeight;
- (double)laneIconsContainerHeight;
- (double)yPositionOfLaneIconsContainer;
- (double)yPositionOfNextStepContainer;
@property(readonly, nonatomic) double laneGuidanceHeight;
- (double)contentHeightForHeaderViewLayout:(long long)arg1;
@property(readonly, nonatomic) double contentHeight;
- (void)setDirectionsPreviewViewStyle;
- (void)setNavigationViewStyle;
- (void)setSecondaryBackgroundColorNightMode:(id)arg1;
- (void)setPrimaryBackgroundColorNightMode:(id)arg1;
- (id)initWithResourceManager:(id)arg1 clientParams:(id)arg2 userDefaults:(id)arg3 analytics:(id)arg4;

@end

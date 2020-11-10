//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MDCButton.h>

#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>
#import <Module_Framework/MDCFloatingButtonModeAnimatorDelegate-Protocol.h>

@class GWAMegalogsContext, MDCFloatingButtonModeAnimator, NSArray, NSMutableDictionary, NSNumber, NSString, UIView;

@interface MDCFloatingButton : MDCButton <GWAMegalogsSupportingComponent, MDCFloatingButtonModeAnimatorDelegate>
{
    long long _shape;
    MDCFloatingButtonModeAnimator *_modeAnimator;
    UIView *_titleLabelContainerView;
    long long _mode;
    long long _imageLocation;
    double _imageTitleSpace;
    NSMutableDictionary *_shapeToModeToMinimumSize;
    NSMutableDictionary *_shapeToModeToMaximumSize;
    NSMutableDictionary *_shapeToModeToContentEdgeInsets;
    NSMutableDictionary *_shapeToModeToHitAreaInsets;
    NSMutableDictionary *_shapeToModeToCenterVisibleArea;
    NSMutableDictionary *_shapeToModeToVisibleAreaInsets;
}

+ (id)floatingButtonWithShape:(long long)arg1;
+ (double)miniDimension;
+ (double)defaultDimension;
+ (void)initialize;
+ (id)gmdc_primaryFABWithShape:(long long)arg1;
+ (id)gmdc_primaryFAB;
+ (id)gmdc_secondaryFABWithShape:(long long)arg1;
+ (id)gmdc_secondaryFAB;
+ (void)setResolvedBackgroundColorForButton:(id)arg1 color:(id)arg2 lightenColorByElevation:(_Bool)arg3;
+ (void)setInitialResolvedBackgroundColorsForButton:(id)arg1 color:(id)arg2 lightenColorByElevation:(_Bool)arg3;
+ (id)gmdc_brandedFAB;
+ (void)applySemanticColorScheme:(id)arg1 toButton:(id)arg2;
+ (id)animationWithKeypath:(id)arg1 toValue:(id)arg2 fromValue:(id)arg3 timingFunction:(id)arg4 fillMode:(id)arg5 duration:(double)arg6 beginOffset:(double)arg7;
+ (struct CATransform3D)expandTransform;
+ (struct CATransform3D)collapseTransform;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *shapeToModeToVisibleAreaInsets; // @synthesize shapeToModeToVisibleAreaInsets=_shapeToModeToVisibleAreaInsets;
@property(readonly, nonatomic) NSMutableDictionary *shapeToModeToCenterVisibleArea; // @synthesize shapeToModeToCenterVisibleArea=_shapeToModeToCenterVisibleArea;
@property(readonly, nonatomic) NSMutableDictionary *shapeToModeToHitAreaInsets; // @synthesize shapeToModeToHitAreaInsets=_shapeToModeToHitAreaInsets;
@property(readonly, nonatomic) NSMutableDictionary *shapeToModeToContentEdgeInsets; // @synthesize shapeToModeToContentEdgeInsets=_shapeToModeToContentEdgeInsets;
@property(readonly, nonatomic) NSMutableDictionary *shapeToModeToMaximumSize; // @synthesize shapeToModeToMaximumSize=_shapeToModeToMaximumSize;
@property(readonly, nonatomic) NSMutableDictionary *shapeToModeToMinimumSize; // @synthesize shapeToModeToMinimumSize=_shapeToModeToMinimumSize;
@property(nonatomic) double imageTitleSpace; // @synthesize imageTitleSpace=_imageTitleSpace;
@property(nonatomic) long long imageLocation; // @synthesize imageLocation=_imageLocation;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)updateShapeAndAllowResize:(_Bool)arg1;
- (void)updateVisibleAreaInsets;
- (struct UIEdgeInsets)visibleAreaInsetsForMode:(long long)arg1;
- (void)setVisibleAreaInsets:(struct UIEdgeInsets)arg1 forShape:(long long)arg2 inMode:(long long)arg3;
- (void)updateCenterVisibleArea;
- (_Bool)centerVisibleAreaForMode:(long long)arg1;
- (void)setCenterVisibleArea:(_Bool)arg1 forShape:(long long)arg2 inMode:(long long)arg3;
- (void)updateHitAreaInsets;
- (struct UIEdgeInsets)hitAreaInsetsForMode:(long long)arg1;
- (void)setHitAreaInsets:(struct UIEdgeInsets)arg1 forShape:(long long)arg2 inMode:(long long)arg3;
- (void)updateContentEdgeInsets;
- (struct UIEdgeInsets)contentEdgeInsetsForMode:(long long)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets)arg1 forShape:(long long)arg2 inMode:(long long)arg3;
- (_Bool)updateMaximumSize;
- (struct CGSize)maximumSizeForMode:(long long)arg1;
- (void)setMaximumSize:(struct CGSize)arg1 forShape:(long long)arg2 inMode:(long long)arg3;
- (_Bool)updateMinimumSize;
- (struct CGSize)minimumSizeForMode:(long long)arg1;
- (void)setMinimumSize:(struct CGSize)arg1 forShape:(long long)arg2 inMode:(long long)arg3;
- (void)setMode:(long long)arg1 animated:(_Bool)arg2 animateAlongside:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setMode:(long long)arg1 animated:(_Bool)arg2;
- (void)floatingButtonModeAnimatorCommitLayoutChanges:(id)arg1 mode:(long long)arg2;
- (id)modeAnimator;
- (struct CGRect)insetBoundsForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)intrinsicContentSizeForModeExpanded;
- (struct CGSize)intrinsicContentSizeForModeNormal;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)commonMDCFloatingButtonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shape:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)prepareMegalogsContexts;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext;
- (id)gmdc_drawBrandedIconWithTop:(id)arg1 bottom:(id)arg2 right:(id)arg3 left:(id)arg4;
- (id)brandedIconForLightTheme;
- (void)setDynamicBackgroundColor:(id)arg1 elevationOverlayEnabledForDarkMode:(_Bool)arg2;
- (void)gmdc_applyFilledThemeWithScheme:(id)arg1;
- (void)gmdc_applyFilledThemeWithColorScheme:(id)arg1;
- (void)gmdc_applySecondaryThemeWithScheme:(id)arg1;
- (void)gmdc_applyThemeWithShapeScheme:(id)arg1;
- (void)gmdc_applyThemeWithTypographyScheme:(id)arg1;
- (void)gmdc_applyBrandedThemeWithColorScheme:(id)arg1;
- (void)gmdc_applyBrandedThemeWithScheme:(id)arg1;
- (void)gmdc_applyUnbrandedThemeWithColorScheme:(id)arg1;
- (void)gmdc_applyUnbrandedThemeWithScheme:(id)arg1;
- (void)resetUIControlStatesForButtonTheming;
- (void)applySecondaryThemeWithTypographyScheme:(id)arg1;
- (void)applySecondaryThemeWithShapeScheme:(id)arg1;
- (void)applySecondaryThemeWithColorScheme:(id)arg1;
- (void)applySecondaryThemeWithScheme:(id)arg1;
- (void)collapse:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)expand:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


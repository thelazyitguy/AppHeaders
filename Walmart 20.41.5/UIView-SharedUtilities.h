//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WalmartCore/_TtP15SharedUtilities23WMUIAccessibilityHelper_-Protocol.h>
#import <WalmartCore/_TtP8Registry9Themeable_-Protocol.h>

@interface UIView (SharedUtilities) <_TtP15SharedUtilities23WMUIAccessibilityHelper_, _TtP8Registry9Themeable_>
+ (long long)al_constraintAxisForAxis:(long long)arg1;
+ (long long)al_attributeForDimension:(long long)arg1;
+ (long long)al_attributeForAxis:(long long)arg1;
+ (long long)al_attributeForEdge:(long long)arg1;
+ (void)sdal_removeConstraints:(id)arg1;
+ (void)sdal_removeConstraint:(id)arg1;
+ (void)sdal_setPriority:(float)arg1 forConstraints:(CDUnknownBlockType)arg2;
+ (id)newSDAutoLayoutView;
- (void)debugUIAccessibilityDescription;
- (void)setUIAccessibilityWithIdentifier:(id)arg1 traits:(unsigned long long)arg2 label:(id)arg3 value:(id)arg4 accessibilityElement:(_Bool)arg5 hint:(id)arg6;
- (void)setUIAccessibilityWithIdentifier:(id)arg1 traits:(unsigned long long)arg2 label:(id)arg3 value:(id)arg4 accessibilityElement:(_Bool)arg5;
- (void)setUIAccessibilityWithIdentifier:(id)arg1;
- (void)setUIAccessibilityWithIdentifier:(id)arg1 label:(id)arg2;
- (void)setUIAccessibilityWithIdentifier:(id)arg1 label:(id)arg2 accessibilityElement:(_Bool)arg3;
- (void)setUIAccessibilityWithIdentifier:(id)arg1 accessibilityElement:(_Bool)arg2;
- (void)setUIAccessibility:(id)arg1;
- (void)setUIAccessibilityForId:(id)arg1;
- (void)applyDropShadowStyleWithSize:(struct CGSize)arg1 opacity:(float)arg2 radius:(double)arg3 color:(id)arg4;
- (id)al_commonSuperviewWithView:(id)arg1;
- (void)al_addConstraintUsingGlobalPriority:(id)arg1;
- (void)sdal_setContentHuggingPriorityForAxis:(long long)arg1;
- (void)sdal_setContentCompressionResistancePriorityForAxis:(long long)arg1;
- (id)sdal_setDimension:(long long)arg1 toSize:(double)arg2 relation:(long long)arg3;
- (id)sdal_setDimension:(long long)arg1 toSize:(double)arg2;
- (id)sdal_setDimensionsToSize:(struct CGSize)arg1;
- (id)sdal_alignAxis:(long long)arg1 toSameAxisOfView:(id)arg2 withOffset:(double)arg3;
- (id)sdal_alignAxis:(long long)arg1 toSameAxisOfView:(id)arg2;
- (id)sdal_pinEdge:(long long)arg1 toEdge:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 relation:(long long)arg5;
- (id)sdal_pinEdge:(long long)arg1 toEdge:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (id)sdal_pinEdge:(long long)arg1 toEdge:(long long)arg2 ofView:(id)arg3;
- (id)sdal_pinEdgesToSuperviewEdgesWithInsets:(struct UIEdgeInsets)arg1 excludingEdge:(long long)arg2;
- (id)sdal_pinEdgesToSuperviewEdgesWithInsets:(struct UIEdgeInsets)arg1;
- (id)sdal_pinEdgeToSuperviewEdge:(long long)arg1 withInset:(double)arg2 relation:(long long)arg3;
- (id)sdal_pinEdgeToSuperviewEdge:(long long)arg1 withInset:(double)arg2;
- (id)sdal_pinEdgeToSuperviewEdge:(long long)arg1;
- (id)sdal_alignAxisToSuperviewAxis:(long long)arg1;
- (id)initForSDAutoLayout;
- (void)hideHUD;
- (void)showHUDWithGraceTime:(double)arg1;
- (void)showHUD;
- (void)applyNYBaseSkin;
- (void)applyBaseSkin;
- (id)WMPTableBackgroundColor;
- (void)themeDidChange:(id)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GRWTypographyStyle-Protocol.h>

@class NSString, UIFont;

@interface GRWGMTypographyStyle : NSObject <GRWTypographyStyle>
{
}

- (id)availableSizeCategoryForSizeCategory:(id)arg1;
- (id)fontCurveForTypographicScale:(unsigned long long)arg1;
- (id)fontForTypographicScale:(unsigned long long)arg1;
- (id)scaledFontOfTypographicScaleForDynamicType:(unsigned long long)arg1;
@property(readonly, nonatomic) UIFont *debugMenuBodyFont;
@property(readonly, nonatomic) UIFont *debugMenuHeaderFont;
@property(readonly, nonatomic) UIFont *debugMenuFooterFont;
@property(readonly, nonatomic) UIFont *resetUsageIDButtonFont;
@property(readonly, nonatomic) UIFont *resetUsageIDBodyFont;
@property(readonly, nonatomic) UIFont *cardBodyFont;
@property(readonly, nonatomic) UIFont *cardLargeTitleFont;
@property(readonly, nonatomic) UIFont *cardDefaultTitleFont;
@property(readonly, nonatomic) long long cardTitleAlignment;
@property(readonly, nonatomic) UIFont *messagingFeatureHighlightBodyFont;
@property(readonly, nonatomic) UIFont *messagingFeatureHighlightTitleFont;
- (long long)messagingTooltipSubtitleAlignment;
- (long long)messagingTooltipTitleAlignment;
@property(readonly, nonatomic) UIFont *messagingTooltipSubtitleFont;
@property(readonly, nonatomic) UIFont *messagingTooltipTitleFont;
@property(readonly, nonatomic) UIFont *messagingCardButtonFont;
@property(readonly, nonatomic) UIFont *messagingCardSubtitleFont;
@property(readonly, nonatomic) UIFont *messagingCardTitleFont;
@property(readonly, nonatomic) UIFont *smartActionLabelFont;
- (id)formattedAppSwitchingFeaturedAppActionButtonTitle:(id)arg1;
- (id)formattedAppSwitchingActionButtonTitle:(id)arg1;
- (id)formattedAppSwitchingHeaderTitle:(id)arg1;
@property(readonly, nonatomic) UIFont *appSwitchingOtherSettingsFont;
@property(readonly, nonatomic) UIFont *appSwitchingAppNameFont;
@property(readonly, nonatomic) long long appSwitchingFeaturedAppSubtitleAlignment;
@property(readonly, nonatomic) long long appSwitchingFeaturedAppTitleAlignment;
@property(readonly, nonatomic) UIFont *appSwitchingFeaturedAppActionButtonFont;
@property(readonly, nonatomic) UIFont *appSwitchingFeaturedAppDescriptionLabelFont;
@property(readonly, nonatomic) UIFont *appSwitchingFeaturedAppCellTitleFont;
@property(readonly, nonatomic) UIFont *appSwitchingCellRecommendedLabelFont;
@property(readonly, nonatomic) UIFont *appSwitchingCellDescriptionFont;
@property(readonly, nonatomic) UIFont *appSwitchingFooterFont;
@property(readonly, nonatomic) UIFont *appSwitchingCellLargeActionButtonFont;
@property(readonly, nonatomic) UIFont *appSwitchingCellActionButtonFont;
@property(readonly, nonatomic) long long appSwitchingTitleAlignment;
@property(readonly, nonatomic) UIFont *appSwitchingHeaderFont;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


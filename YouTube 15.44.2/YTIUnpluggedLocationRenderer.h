//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTIFormattedString, YTIThumbnailDetails, YTIUnpluggedAnimationDetails, YTIUnpluggedEditTextSupportedRenderers;

@interface YTIUnpluggedLocationRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTIUnpluggedAnimationDetails *animation; // @dynamic animation;
@property(retain, nonatomic) YTIFormattedString *bodyText; // @dynamic bodyText;
@property(nonatomic) unsigned int bodyTextColor; // @dynamic bodyTextColor;
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @dynamic buttonsArray;
@property(readonly, nonatomic) unsigned long long buttonsArray_Count; // @dynamic buttonsArray_Count;
@property(retain, nonatomic) YTIButtonSupportedRenderers *changeLocationButton; // @dynamic changeLocationButton;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasAnimation; // @dynamic hasAnimation;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasBodyTextColor; // @dynamic hasBodyTextColor;
@property(nonatomic) _Bool hasChangeLocationButton; // @dynamic hasChangeLocationButton;
@property(nonatomic) _Bool hasHeaderIcon; // @dynamic hasHeaderIcon;
@property(nonatomic) _Bool hasHeaderText; // @dynamic hasHeaderText;
@property(nonatomic) _Bool hasImproveLocationGhelpButton; // @dynamic hasImproveLocationGhelpButton;
@property(nonatomic) _Bool hasImproveLocationStartFlowButton; // @dynamic hasImproveLocationStartFlowButton;
@property(nonatomic) _Bool hasLocationName; // @dynamic hasLocationName;
@property(nonatomic) _Bool hasLogInButton; // @dynamic hasLogInButton;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnpluggedEditText; // @dynamic hasUnpluggedEditText;
@property(nonatomic) _Bool hasZipCode; // @dynamic hasZipCode;
@property(retain, nonatomic) YTIThumbnailDetails *headerIcon; // @dynamic headerIcon;
@property(retain, nonatomic) YTIFormattedString *headerText; // @dynamic headerText;
@property(retain, nonatomic) YTIButtonSupportedRenderers *improveLocationGhelpButton; // @dynamic improveLocationGhelpButton;
@property(retain, nonatomic) YTIButtonSupportedRenderers *improveLocationStartFlowButton; // @dynamic improveLocationStartFlowButton;
@property(retain, nonatomic) NSMutableArray *locationChoicesArray; // @dynamic locationChoicesArray;
@property(readonly, nonatomic) unsigned long long locationChoicesArray_Count; // @dynamic locationChoicesArray_Count;
@property(retain, nonatomic) YTIFormattedString *locationName; // @dynamic locationName;
@property(retain, nonatomic) YTIButtonSupportedRenderers *logInButton; // @dynamic logInButton;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIUnpluggedEditTextSupportedRenderers *unpluggedEditText; // @dynamic unpluggedEditText;
@property(retain, nonatomic) YTIFormattedString *zipCode; // @dynamic zipCode;

@end


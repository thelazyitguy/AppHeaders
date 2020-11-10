//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTIFormattedString, YTIThumbnailDetails;

@interface YTIUnlimitedFamilyProfileInterstitialRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTIFormattedString *additionalInfo; // @dynamic additionalInfo;
@property(retain, nonatomic) YTIFormattedString *additionalInfoHeader; // @dynamic additionalInfoHeader;
@property(retain, nonatomic) YTIButtonSupportedRenderers *dismissButton; // @dynamic dismissButton;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasAdditionalInfo; // @dynamic hasAdditionalInfo;
@property(nonatomic) _Bool hasAdditionalInfoHeader; // @dynamic hasAdditionalInfoHeader;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasMainThumbnail; // @dynamic hasMainThumbnail;
@property(nonatomic) _Bool hasManageButton; // @dynamic hasManageButton;
@property(nonatomic) _Bool hasMemberInfo; // @dynamic hasMemberInfo;
@property(nonatomic) _Bool hasMemberTitle; // @dynamic hasMemberTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *mainThumbnail; // @dynamic mainThumbnail;
@property(retain, nonatomic) YTIButtonSupportedRenderers *manageButton; // @dynamic manageButton;
@property(retain, nonatomic) YTIFormattedString *memberInfo; // @dynamic memberInfo;
@property(retain, nonatomic) YTIFormattedString *memberTitle; // @dynamic memberTitle;
@property(retain, nonatomic) NSMutableArray *secondaryThumbnailsArray; // @dynamic secondaryThumbnailsArray;
@property(readonly, nonatomic) unsigned long long secondaryThumbnailsArray_Count; // @dynamic secondaryThumbnailsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


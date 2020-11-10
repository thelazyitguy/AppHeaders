//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBUInt32Array, NSData, NSMutableArray, NSString, YTIChannelThumbnailSupportedRenderers, YTIDetailsHeaderAspectRatio, YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTIDetailsHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;
- (id)yt_headerRendererTitle;

// Remaining properties
@property(retain, nonatomic) YTIDetailsHeaderAspectRatio *aspectRatio; // @dynamic aspectRatio;
@property(retain, nonatomic) YTIChannelThumbnailSupportedRenderers *channelThumbnail; // @dynamic channelThumbnail;
@property(retain, nonatomic) YTIRenderer *collectionPicker; // @dynamic collectionPicker;
@property(retain, nonatomic) YTIFormattedString *descriptionHeader; // @dynamic descriptionHeader;
@property(retain, nonatomic) YTIFormattedString *descriptionText; // @dynamic descriptionText;
@property(retain, nonatomic) YTIRenderer *fab; // @dynamic fab;
@property(nonatomic) _Bool hasAspectRatio; // @dynamic hasAspectRatio;
@property(nonatomic) _Bool hasChannelThumbnail; // @dynamic hasChannelThumbnail;
@property(nonatomic) _Bool hasCollectionPicker; // @dynamic hasCollectionPicker;
@property(nonatomic) _Bool hasDescriptionHeader; // @dynamic hasDescriptionHeader;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasFab; // @dynamic hasFab;
@property(nonatomic) _Bool hasHeaderThumbnails; // @dynamic hasHeaderThumbnails;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasOwnerText; // @dynamic hasOwnerText;
@property(nonatomic) _Bool hasPoster; // @dynamic hasPoster;
@property(nonatomic) _Bool hasPrimaryButton; // @dynamic hasPrimaryButton;
@property(nonatomic) _Bool hasSecondaryButton; // @dynamic hasSecondaryButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(retain, nonatomic) YTIRenderer *headerThumbnails; // @dynamic headerThumbnails;
@property(retain, nonatomic) NSMutableArray *inlineMetadatasArray; // @dynamic inlineMetadatasArray;
@property(readonly, nonatomic) unsigned long long inlineMetadatasArray_Count; // @dynamic inlineMetadatasArray_Count;
@property(retain, nonatomic) YTIRenderer *offlineability; // @dynamic offlineability;
@property(retain, nonatomic) YTIFormattedString *ownerText; // @dynamic ownerText;
@property(retain, nonatomic) YTIThumbnailDetails *poster; // @dynamic poster;
@property(retain, nonatomic) YTIRenderer *primaryButton; // @dynamic primaryButton;
@property(retain, nonatomic) GPBUInt32Array *scrimColorValuesArray; // @dynamic scrimColorValuesArray;
@property(readonly, nonatomic) unsigned long long scrimColorValuesArray_Count; // @dynamic scrimColorValuesArray_Count;
@property(retain, nonatomic) YTIRenderer *secondaryButton; // @dynamic secondaryButton;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) NSMutableArray *underTitleBadgesArray; // @dynamic underTitleBadgesArray;
@property(readonly, nonatomic) unsigned long long underTitleBadgesArray_Count; // @dynamic underTitleBadgesArray_Count;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end


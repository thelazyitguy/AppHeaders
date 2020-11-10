//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIFormattedString, YTIVideoDescriptionMetadataRowContainerSupportedRenderers;

@interface YTIVideoDescriptionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *dateText; // @dynamic dateText;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDateText; // @dynamic hasDateText;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasMetadataRowContainer; // @dynamic hasMetadataRowContainer;
@property(nonatomic) _Bool hasShowLessText; // @dynamic hasShowLessText;
@property(nonatomic) _Bool hasShowMoreText; // @dynamic hasShowMoreText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIVideoDescriptionMetadataRowContainerSupportedRenderers *metadataRowContainer; // @dynamic metadataRowContainer;
@property(retain, nonatomic) YTIFormattedString *showLessText; // @dynamic showLessText;
@property(retain, nonatomic) YTIFormattedString *showMoreText; // @dynamic showMoreText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


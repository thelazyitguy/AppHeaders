//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIThumbnailDetails, YTIUnpluggedAnimationDetails;

@interface YTIUnpluggedTravelRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTIUnpluggedAnimationDetails *animation; // @dynamic animation;
@property(retain, nonatomic) YTICommand *backCommand; // @dynamic backCommand;
@property(retain, nonatomic) YTIFormattedString *bodyText; // @dynamic bodyText;
@property(copy, nonatomic) NSString *currentDmaId; // @dynamic currentDmaId;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasAnimation; // @dynamic hasAnimation;
@property(nonatomic) _Bool hasBackCommand; // @dynamic hasBackCommand;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasCurrentDmaId; // @dynamic hasCurrentDmaId;
@property(nonatomic) _Bool hasHeaderIcon; // @dynamic hasHeaderIcon;
@property(nonatomic) _Bool hasHeaderText; // @dynamic hasHeaderText;
@property(nonatomic) _Bool hasLearnMoreGhelpButton; // @dynamic hasLearnMoreGhelpButton;
@property(nonatomic) _Bool hasLocationName; // @dynamic hasLocationName;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *headerIcon; // @dynamic headerIcon;
@property(retain, nonatomic) YTIFormattedString *headerText; // @dynamic headerText;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(retain, nonatomic) YTIButtonSupportedRenderers *learnMoreGhelpButton; // @dynamic learnMoreGhelpButton;
@property(retain, nonatomic) YTIFormattedString *locationName; // @dynamic locationName;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


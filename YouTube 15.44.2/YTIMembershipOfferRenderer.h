//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIIcon, YTIRenderer, YTIThumbnailDetails;

@interface YTIMembershipOfferRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *alertsArray; // @dynamic alertsArray;
@property(readonly, nonatomic) unsigned long long alertsArray_Count; // @dynamic alertsArray_Count;
@property(retain, nonatomic) YTIThumbnailDetails *channelThumbnail; // @dynamic channelThumbnail;
@property(retain, nonatomic) YTIRenderer *customPerks; // @dynamic customPerks;
@property(retain, nonatomic) YTIButtonSupportedRenderers *dismissButton; // @dynamic dismissButton;
@property(nonatomic) _Bool hasChannelThumbnail; // @dynamic hasChannelThumbnail;
@property(nonatomic) _Bool hasCustomPerks; // @dynamic hasCustomPerks;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasHeaderImage; // @dynamic hasHeaderImage;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasOnAppReturnCommand; // @dynamic hasOnAppReturnCommand;
@property(nonatomic) _Bool hasPriceText; // @dynamic hasPriceText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasTransactionButton; // @dynamic hasTransactionButton;
@property(nonatomic) _Bool hasViewerThumbnail; // @dynamic hasViewerThumbnail;
@property(nonatomic) _Bool hasYtPerks; // @dynamic hasYtPerks;
@property(retain, nonatomic) YTIFormattedString *header; // @dynamic header;
@property(retain, nonatomic) YTIThumbnailDetails *headerImage; // @dynamic headerImage;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) NSMutableArray *metadatasArray; // @dynamic metadatasArray;
@property(readonly, nonatomic) unsigned long long metadatasArray_Count; // @dynamic metadatasArray_Count;
@property(retain, nonatomic) YTICommand *onAppReturnCommand; // @dynamic onAppReturnCommand;
@property(retain, nonatomic) NSMutableArray *paymentClausesArray; // @dynamic paymentClausesArray;
@property(readonly, nonatomic) unsigned long long paymentClausesArray_Count; // @dynamic paymentClausesArray_Count;
@property(retain, nonatomic) YTIFormattedString *priceText; // @dynamic priceText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIButtonSupportedRenderers *transactionButton; // @dynamic transactionButton;
@property(retain, nonatomic) YTIThumbnailDetails *viewerThumbnail; // @dynamic viewerThumbnail;
@property(retain, nonatomic) YTIRenderer *ytPerks; // @dynamic ytPerks;

@end


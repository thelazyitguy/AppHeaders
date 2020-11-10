//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTICommand, YTICurrencyImage, YTIFormattedString, YTILiveChatItemSupportedRenderers, YTIThumbnailDetails;

@interface YTILiveChatTickerPaidMessageItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *amount; // @dynamic amount;
@property(nonatomic) unsigned int amountTextColor; // @dynamic amountTextColor;
@property(copy, nonatomic) NSString *authorExternalChannelId; // @dynamic authorExternalChannelId;
@property(nonatomic) unsigned int authorNameTextColor; // @dynamic authorNameTextColor;
@property(retain, nonatomic) YTIThumbnailDetails *authorPhoto; // @dynamic authorPhoto;
@property(retain, nonatomic) YTICurrencyImage *currencyImage; // @dynamic currencyImage;
@property(nonatomic) unsigned int durationSec; // @dynamic durationSec;
@property(nonatomic) unsigned int endBackgroundColor; // @dynamic endBackgroundColor;
@property(nonatomic) unsigned int fullDurationSec; // @dynamic fullDurationSec;
@property(nonatomic) _Bool hasAmount; // @dynamic hasAmount;
@property(nonatomic) _Bool hasAmountTextColor; // @dynamic hasAmountTextColor;
@property(nonatomic) _Bool hasAuthorExternalChannelId; // @dynamic hasAuthorExternalChannelId;
@property(nonatomic) _Bool hasAuthorNameTextColor; // @dynamic hasAuthorNameTextColor;
@property(nonatomic) _Bool hasAuthorPhoto; // @dynamic hasAuthorPhoto;
@property(nonatomic) _Bool hasCurrencyImage; // @dynamic hasCurrencyImage;
@property(nonatomic) _Bool hasDurationSec; // @dynamic hasDurationSec;
@property(nonatomic) _Bool hasEndBackgroundColor; // @dynamic hasEndBackgroundColor;
@property(nonatomic) _Bool hasFullDurationSec; // @dynamic hasFullDurationSec;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasPurchasedMessage; // @dynamic hasPurchasedMessage;
@property(nonatomic) _Bool hasShowItemEndpoint; // @dynamic hasShowItemEndpoint;
@property(nonatomic) _Bool hasStartBackgroundColor; // @dynamic hasStartBackgroundColor;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) YTILiveChatItemSupportedRenderers *purchasedMessage; // @dynamic purchasedMessage;
@property(retain, nonatomic) YTICommand *showItemEndpoint; // @dynamic showItemEndpoint;
@property(nonatomic) unsigned int startBackgroundColor; // @dynamic startBackgroundColor;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


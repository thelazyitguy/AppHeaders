//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIButtonSupportedRenderers, YTIFormattedString, YTIThumbnailDetails;

@interface YTIDonationShelfRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *amountError; // @dynamic amountError;
@property(retain, nonatomic) YTIFormattedString *amountRaisedLabel; // @dynamic amountRaisedLabel;
@property(retain, nonatomic) YTIFormattedString *campaignDescription; // @dynamic campaignDescription;
@property(retain, nonatomic) YTIFormattedString *campaignSubtitle; // @dynamic campaignSubtitle;
@property(retain, nonatomic) YTIThumbnailDetails *campaignThumbnail; // @dynamic campaignThumbnail;
@property(retain, nonatomic) YTIFormattedString *campaignTitle; // @dynamic campaignTitle;
@property(retain, nonatomic) NSMutableArray *creatorMessagesArray; // @dynamic creatorMessagesArray;
@property(readonly, nonatomic) unsigned long long creatorMessagesArray_Count; // @dynamic creatorMessagesArray_Count;
@property(retain, nonatomic) YTIFormattedString *currencySymbol; // @dynamic currencySymbol;
@property(retain, nonatomic) YTIFormattedString *customAmountLabel; // @dynamic customAmountLabel;
@property(retain, nonatomic) YTIButtonSupportedRenderers *donateButton; // @dynamic donateButton;
@property(retain, nonatomic) YTIFormattedString *endLabel; // @dynamic endLabel;
@property(retain, nonatomic) YTIButtonSupportedRenderers *expandButton; // @dynamic expandButton;
@property(nonatomic) _Bool hasAmountError; // @dynamic hasAmountError;
@property(nonatomic) _Bool hasAmountRaisedLabel; // @dynamic hasAmountRaisedLabel;
@property(nonatomic) _Bool hasCampaignDescription; // @dynamic hasCampaignDescription;
@property(nonatomic) _Bool hasCampaignSubtitle; // @dynamic hasCampaignSubtitle;
@property(nonatomic) _Bool hasCampaignThumbnail; // @dynamic hasCampaignThumbnail;
@property(nonatomic) _Bool hasCampaignTitle; // @dynamic hasCampaignTitle;
@property(nonatomic) _Bool hasCurrencySymbol; // @dynamic hasCurrencySymbol;
@property(nonatomic) _Bool hasCustomAmountLabel; // @dynamic hasCustomAmountLabel;
@property(nonatomic) _Bool hasDonateButton; // @dynamic hasDonateButton;
@property(nonatomic) _Bool hasEndLabel; // @dynamic hasEndLabel;
@property(nonatomic) _Bool hasExpandButton; // @dynamic hasExpandButton;
@property(nonatomic) _Bool hasHeaderBackgroundDarkURL; // @dynamic hasHeaderBackgroundDarkURL;
@property(nonatomic) _Bool hasHeaderBackgroundURL; // @dynamic hasHeaderBackgroundURL;
@property(nonatomic) _Bool hasHeaderTitle; // @dynamic hasHeaderTitle;
@property(nonatomic) _Bool hasMatchLabel; // @dynamic hasMatchLabel;
@property(nonatomic) _Bool hasMaxAmountMicros; // @dynamic hasMaxAmountMicros;
@property(nonatomic) _Bool hasMinAmountMicros; // @dynamic hasMinAmountMicros;
@property(nonatomic) _Bool hasNonprofitDescription; // @dynamic hasNonprofitDescription;
@property(nonatomic) _Bool hasNonprofitSubtitle; // @dynamic hasNonprofitSubtitle;
@property(nonatomic) _Bool hasNonprofitTitle; // @dynamic hasNonprofitTitle;
@property(nonatomic) _Bool hasNonprofitWebsite; // @dynamic hasNonprofitWebsite;
@property(nonatomic) _Bool hasParsingError; // @dynamic hasParsingError;
@property(nonatomic) _Bool hasPrivacyCheckboxInitialState; // @dynamic hasPrivacyCheckboxInitialState;
@property(nonatomic) _Bool hasPrivacyCheckboxText; // @dynamic hasPrivacyCheckboxText;
@property(nonatomic) _Bool hasProgress; // @dynamic hasProgress;
@property(nonatomic) _Bool hasShelfType; // @dynamic hasShelfType;
@property(nonatomic) _Bool hasShowLessText; // @dynamic hasShowLessText;
@property(nonatomic) _Bool hasShowMoreText; // @dynamic hasShowMoreText;
@property(nonatomic) _Bool hasStartLabel; // @dynamic hasStartLabel;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(copy, nonatomic) NSString *headerBackgroundDarkURL; // @dynamic headerBackgroundDarkURL;
@property(copy, nonatomic) NSString *headerBackgroundURL; // @dynamic headerBackgroundURL;
@property(retain, nonatomic) YTIFormattedString *headerTitle; // @dynamic headerTitle;
@property(retain, nonatomic) YTIFormattedString *matchLabel; // @dynamic matchLabel;
@property(nonatomic) long long maxAmountMicros; // @dynamic maxAmountMicros;
@property(nonatomic) long long minAmountMicros; // @dynamic minAmountMicros;
@property(retain, nonatomic) YTIFormattedString *nonprofitDescription; // @dynamic nonprofitDescription;
@property(retain, nonatomic) YTIFormattedString *nonprofitSubtitle; // @dynamic nonprofitSubtitle;
@property(retain, nonatomic) YTIFormattedString *nonprofitTitle; // @dynamic nonprofitTitle;
@property(retain, nonatomic) YTIFormattedString *nonprofitWebsite; // @dynamic nonprofitWebsite;
@property(retain, nonatomic) YTIFormattedString *parsingError; // @dynamic parsingError;
@property(nonatomic) _Bool privacyCheckboxInitialState; // @dynamic privacyCheckboxInitialState;
@property(retain, nonatomic) YTIFormattedString *privacyCheckboxText; // @dynamic privacyCheckboxText;
@property(nonatomic) float progress; // @dynamic progress;
@property(nonatomic) int shelfType; // @dynamic shelfType;
@property(retain, nonatomic) YTIFormattedString *showLessText; // @dynamic showLessText;
@property(retain, nonatomic) YTIFormattedString *showMoreText; // @dynamic showMoreText;
@property(retain, nonatomic) YTIFormattedString *startLabel; // @dynamic startLabel;
@property(retain, nonatomic) NSMutableArray *suggestedAmountsArray; // @dynamic suggestedAmountsArray;
@property(readonly, nonatomic) unsigned long long suggestedAmountsArray_Count; // @dynamic suggestedAmountsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end


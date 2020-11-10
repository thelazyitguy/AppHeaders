//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIButtonSupportedRenderers, YTICommand, YTIConfirmDialogEndpointSupportedRenderers, YTIFormattedString;

@interface YTIKidsAccountSelectorBlockRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *accountSelector; // @dynamic accountSelector;
@property(retain, nonatomic) YTIFormattedString *accountSelectorAnnotation; // @dynamic accountSelectorAnnotation;
@property(retain, nonatomic) YTIConfirmDialogEndpointSupportedRenderers *addAccountConsent; // @dynamic addAccountConsent;
@property(retain, nonatomic) YTIConfirmDialogEndpointSupportedRenderers *badAccountDialog; // @dynamic badAccountDialog;
@property(retain, nonatomic) YTIFormattedString *bodyText; // @dynamic bodyText;
@property(nonatomic) _Bool hasAccountSelector; // @dynamic hasAccountSelector;
@property(nonatomic) _Bool hasAccountSelectorAnnotation; // @dynamic hasAccountSelectorAnnotation;
@property(nonatomic) _Bool hasAddAccountConsent; // @dynamic hasAddAccountConsent;
@property(nonatomic) _Bool hasBadAccountDialog; // @dynamic hasBadAccountDialog;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasNoAccountsNavEndpoint; // @dynamic hasNoAccountsNavEndpoint;
@property(nonatomic) _Bool hasRedAccountsNavEndpoint; // @dynamic hasRedAccountsNavEndpoint;
@property(nonatomic) _Bool hasRedVerificationExtraInfoText; // @dynamic hasRedVerificationExtraInfoText;
@property(nonatomic) _Bool hasSendEmailButton; // @dynamic hasSendEmailButton;
@property(nonatomic) _Bool hasSkipButton; // @dynamic hasSkipButton;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *noAccountsNavEndpoint; // @dynamic noAccountsNavEndpoint;
@property(retain, nonatomic) YTICommand *redAccountsNavEndpoint; // @dynamic redAccountsNavEndpoint;
@property(retain, nonatomic) YTIFormattedString *redVerificationExtraInfoText; // @dynamic redVerificationExtraInfoText;
@property(retain, nonatomic) YTIButtonSupportedRenderers *sendEmailButton; // @dynamic sendEmailButton;
@property(retain, nonatomic) YTIButtonSupportedRenderers *skipButton; // @dynamic skipButton;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


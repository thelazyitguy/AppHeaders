//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIActiveAccountHeaderFabSupportedRenderers, YTICommand, YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTIActiveAccountHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;
- (_Bool)hasImprovedAccountSettings;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *accountName; // @dynamic accountName;
@property(retain, nonatomic) YTIThumbnailDetails *accountPhoto; // @dynamic accountPhoto;
@property(retain, nonatomic) YTIRenderer *addAccountRenderer; // @dynamic addAccountRenderer;
@property(retain, nonatomic) YTIThumbnailDetails *channelArt; // @dynamic channelArt;
@property(retain, nonatomic) YTICommand *channelEndpoint; // @dynamic channelEndpoint;
@property(retain, nonatomic) YTIFormattedString *email; // @dynamic email;
@property(retain, nonatomic) YTIActiveAccountHeaderFabSupportedRenderers *fab; // @dynamic fab;
@property(retain, nonatomic) YTIRenderer *goIncognitoRenderer; // @dynamic goIncognitoRenderer;
@property(nonatomic) _Bool hasAccountName; // @dynamic hasAccountName;
@property(nonatomic) _Bool hasAccountPhoto; // @dynamic hasAccountPhoto;
@property(nonatomic) _Bool hasAddAccountRenderer; // @dynamic hasAddAccountRenderer;
@property(nonatomic) _Bool hasChannelArt; // @dynamic hasChannelArt;
@property(nonatomic) _Bool hasChannelEndpoint; // @dynamic hasChannelEndpoint;
@property(nonatomic) _Bool hasEmail; // @dynamic hasEmail;
@property(nonatomic) _Bool hasFab; // @dynamic hasFab;
@property(nonatomic) _Bool hasGoIncognitoRenderer; // @dynamic hasGoIncognitoRenderer;
@property(nonatomic) _Bool hasManageAccountTitle; // @dynamic hasManageAccountTitle;
@property(nonatomic) _Bool hasManageGoogleAccountRenderer; // @dynamic hasManageGoogleAccountRenderer;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasSettingsEndpoint; // @dynamic hasSettingsEndpoint;
@property(nonatomic) _Bool hasSignInEndpoint; // @dynamic hasSignInEndpoint;
@property(nonatomic) _Bool hasSwitchAccountRenderer; // @dynamic hasSwitchAccountRenderer;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *manageAccountTitle; // @dynamic manageAccountTitle;
@property(retain, nonatomic) YTIRenderer *manageGoogleAccountRenderer; // @dynamic manageGoogleAccountRenderer;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(retain, nonatomic) YTICommand *settingsEndpoint; // @dynamic settingsEndpoint;
@property(retain, nonatomic) YTICommand *signInEndpoint; // @dynamic signInEndpoint;
@property(retain, nonatomic) YTIRenderer *switchAccountRenderer; // @dynamic switchAccountRenderer;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) NSMutableArray *unlimitedStatusArray; // @dynamic unlimitedStatusArray;
@property(readonly, nonatomic) unsigned long long unlimitedStatusArray_Count; // @dynamic unlimitedStatusArray_Count;

@end


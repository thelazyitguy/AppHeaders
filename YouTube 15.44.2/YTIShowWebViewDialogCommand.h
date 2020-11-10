//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIFormattedString, YTIRenderer;

@interface YTIShowWebViewDialogCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(nonatomic) _Bool authenticateWithGoogleAccount; // @dynamic authenticateWithGoogleAccount;
@property(nonatomic) _Bool hasAuthenticateWithGoogleAccount; // @dynamic hasAuthenticateWithGoogleAccount;
@property(nonatomic) _Bool hasInformationButtonRenderer; // @dynamic hasInformationButtonRenderer;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(retain, nonatomic) YTIRenderer *informationButtonRenderer; // @dynamic informationButtonRenderer;
@property(retain, nonatomic) NSMutableArray *onDismissCommandsArray; // @dynamic onDismissCommandsArray;
@property(readonly, nonatomic) unsigned long long onDismissCommandsArray_Count; // @dynamic onDismissCommandsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


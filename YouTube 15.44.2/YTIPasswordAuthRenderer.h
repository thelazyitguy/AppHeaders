//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIFormattedString, YTIGaiaAuthenticatedIdentity, YTIRenderer;

@interface YTIPasswordAuthRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *checkboxMessage; // @dynamic checkboxMessage;
@property(retain, nonatomic) YTIFormattedString *confirmButtonText; // @dynamic confirmButtonText;
@property(retain, nonatomic) YTIFormattedString *forgotPasswordText; // @dynamic forgotPasswordText;
@property(nonatomic) _Bool hasCheckboxMessage; // @dynamic hasCheckboxMessage;
@property(nonatomic) _Bool hasConfirmButtonText; // @dynamic hasConfirmButtonText;
@property(nonatomic) _Bool hasForgotPasswordText; // @dynamic hasForgotPasswordText;
@property(nonatomic) _Bool hasMaxNumPasswordTries; // @dynamic hasMaxNumPasswordTries;
@property(nonatomic) _Bool hasReauthIdentity; // @dynamic hasReauthIdentity;
@property(nonatomic) _Bool hasReauthUserAccountItem; // @dynamic hasReauthUserAccountItem;
@property(nonatomic) _Bool hasShouldShowOtherAuthTypes; // @dynamic hasShouldShowOtherAuthTypes;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) int maxNumPasswordTries; // @dynamic maxNumPasswordTries;
@property(retain, nonatomic) NSMutableArray *messagesArray; // @dynamic messagesArray;
@property(readonly, nonatomic) unsigned long long messagesArray_Count; // @dynamic messagesArray_Count;
@property(retain, nonatomic) YTIGaiaAuthenticatedIdentity *reauthIdentity; // @dynamic reauthIdentity;
@property(retain, nonatomic) YTIRenderer *reauthUserAccountItem; // @dynamic reauthUserAccountItem;
@property(nonatomic) _Bool shouldShowOtherAuthTypes; // @dynamic shouldShowOtherAuthTypes;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


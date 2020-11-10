//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTICommand, YTIGaiaAuthenticatedIdentity, YTIUserProfile;

@interface YTISignInEndpoint : GPBMessage
{
}

+ (id)descriptor;
+ (id)exitIncognitoSignInEndpointWithTimedOutConfirmDialog;
- (id)gaiaAuthenticatedIdentity;
- (void)sanitizeNextEndpointForAccountChange;

// Remaining properties
@property(copy, nonatomic) NSString *authFeature; // @dynamic authFeature;
@property(copy, nonatomic) NSString *continueAction; // @dynamic continueAction;
@property(copy, nonatomic) NSString *directSigninId; // @dynamic directSigninId;
@property(retain, nonatomic) YTIGaiaAuthenticatedIdentity *directSigninIdentity; // @dynamic directSigninIdentity;
@property(retain, nonatomic) YTIUserProfile *directSigninUserProfile; // @dynamic directSigninUserProfile;
@property(copy, nonatomic) NSString *gaeParam; // @dynamic gaeParam;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasAuthFeature; // @dynamic hasAuthFeature;
@property(nonatomic) _Bool hasContinueAction; // @dynamic hasContinueAction;
@property(nonatomic) _Bool hasDirectSigninId; // @dynamic hasDirectSigninId;
@property(nonatomic) _Bool hasDirectSigninIdentity; // @dynamic hasDirectSigninIdentity;
@property(nonatomic) _Bool hasDirectSigninUserProfile; // @dynamic hasDirectSigninUserProfile;
@property(nonatomic) _Bool hasGaeParam; // @dynamic hasGaeParam;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasIdamTag; // @dynamic hasIdamTag;
@property(nonatomic) _Bool hasNextEndpoint; // @dynamic hasNextEndpoint;
@property(nonatomic) _Bool hasUsePopup; // @dynamic hasUsePopup;
@property(copy, nonatomic) NSString *idamTag; // @dynamic idamTag;
@property(retain, nonatomic) YTICommand *nextEndpoint; // @dynamic nextEndpoint;
@property(nonatomic) _Bool usePopup; // @dynamic usePopup;

@end


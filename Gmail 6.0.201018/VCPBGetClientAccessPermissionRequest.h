//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class VCPBClientBuild, VCPBCustomMessage_LocalizationInfo;

@interface VCPBGetClientAccessPermissionRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) VCPBClientBuild *clientBuild; // @dynamic clientBuild;
@property(retain, nonatomic) VCPBCustomMessage_LocalizationInfo *customMessageLocalizationInfo; // @dynamic customMessageLocalizationInfo;
@property(nonatomic) _Bool hasClientBuild; // @dynamic hasClientBuild;
@property(nonatomic) _Bool hasCustomMessageLocalizationInfo; // @dynamic hasCustomMessageLocalizationInfo;

@end

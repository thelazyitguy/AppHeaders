//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class CPBClientRequestHeader, NSData, NSMutableArray, NSString;

@interface CPBClientRegisterDeviceRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *androidAppId; // @dynamic androidAppId;
@property(retain, nonatomic) NSMutableArray *androidCapabilityArray; // @dynamic androidCapabilityArray;
@property(readonly, nonatomic) unsigned long long androidCapabilityArray_Count; // @dynamic androidCapabilityArray_Count;
@property(copy, nonatomic) NSString *androidDeveloperAccount; // @dynamic androidDeveloperAccount;
@property(nonatomic) long long androidId; // @dynamic androidId;
@property(copy, nonatomic) NSString *androidInstanceId; // @dynamic androidInstanceId;
@property(copy, nonatomic) NSString *androidRegistrationId; // @dynamic androidRegistrationId;
@property(nonatomic) int androidScreenSizeDps; // @dynamic androidScreenSizeDps;
@property(nonatomic) _Bool deviceAvailabilitySharingEnabled; // @dynamic deviceAvailabilitySharingEnabled;
@property(nonatomic) int deviceType; // @dynamic deviceType;
@property(retain, nonatomic) NSMutableArray *glassCapabilityArray; // @dynamic glassCapabilityArray;
@property(readonly, nonatomic) unsigned long long glassCapabilityArray_Count; // @dynamic glassCapabilityArray_Count;
@property(nonatomic) _Bool hasAndroidAppId; // @dynamic hasAndroidAppId;
@property(nonatomic) _Bool hasAndroidDeveloperAccount; // @dynamic hasAndroidDeveloperAccount;
@property(nonatomic) _Bool hasAndroidId; // @dynamic hasAndroidId;
@property(nonatomic) _Bool hasAndroidInstanceId; // @dynamic hasAndroidInstanceId;
@property(nonatomic) _Bool hasAndroidRegistrationId; // @dynamic hasAndroidRegistrationId;
@property(nonatomic) _Bool hasAndroidScreenSizeDps; // @dynamic hasAndroidScreenSizeDps;
@property(nonatomic) _Bool hasDeviceAvailabilitySharingEnabled; // @dynamic hasDeviceAvailabilitySharingEnabled;
@property(nonatomic) _Bool hasDeviceType; // @dynamic hasDeviceType;
@property(nonatomic) _Bool hasIosAppId; // @dynamic hasIosAppId;
@property(nonatomic) _Bool hasIosDeviceId; // @dynamic hasIosDeviceId;
@property(nonatomic) _Bool hasIosMcsAppId; // @dynamic hasIosMcsAppId;
@property(nonatomic) _Bool hasIosMcsDeveloperAccount; // @dynamic hasIosMcsDeveloperAccount;
@property(nonatomic) _Bool hasIosMcsRegistrationId; // @dynamic hasIosMcsRegistrationId;
@property(nonatomic) _Bool hasIosPushOauthToken; // @dynamic hasIosPushOauthToken;
@property(nonatomic) _Bool hasIosPushkitToken; // @dynamic hasIosPushkitToken;
@property(nonatomic) _Bool hasIosScreenSizeDps; // @dynamic hasIosScreenSizeDps;
@property(nonatomic) _Bool hasIosToken; // @dynamic hasIosToken;
@property(nonatomic) _Bool hasIosUploadedContactsPrivateKey; // @dynamic hasIosUploadedContactsPrivateKey;
@property(nonatomic) _Bool hasLocale; // @dynamic hasLocale;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPstnAppId; // @dynamic hasPstnAppId;
@property(nonatomic) _Bool hasPstnCarrierMcc; // @dynamic hasPstnCarrierMcc;
@property(nonatomic) _Bool hasPstnCarrierMnc; // @dynamic hasPstnCarrierMnc;
@property(nonatomic) _Bool hasPstnNumber; // @dynamic hasPstnNumber;
@property(nonatomic) _Bool hasRegistrationType; // @dynamic hasRegistrationType;
@property(nonatomic) _Bool hasRequestHeader; // @dynamic hasRequestHeader;
@property(nonatomic) _Bool hasStateUpdateVersion; // @dynamic hasStateUpdateVersion;
@property(nonatomic) _Bool hasUnregisterOnBehalfOfGaiaId; // @dynamic hasUnregisterOnBehalfOfGaiaId;
@property(copy, nonatomic) NSString *iosAppId; // @dynamic iosAppId;
@property(retain, nonatomic) NSMutableArray *iosCapabilityArray; // @dynamic iosCapabilityArray;
@property(readonly, nonatomic) unsigned long long iosCapabilityArray_Count; // @dynamic iosCapabilityArray_Count;
@property(copy, nonatomic) NSString *iosDeviceId; // @dynamic iosDeviceId;
@property(copy, nonatomic) NSString *iosMcsAppId; // @dynamic iosMcsAppId;
@property(copy, nonatomic) NSString *iosMcsDeveloperAccount; // @dynamic iosMcsDeveloperAccount;
@property(copy, nonatomic) NSString *iosMcsRegistrationId; // @dynamic iosMcsRegistrationId;
@property(retain, nonatomic) NSMutableArray *iosOauthTokensForParticipantsOnDeviceArray; // @dynamic iosOauthTokensForParticipantsOnDeviceArray;
@property(readonly, nonatomic) unsigned long long iosOauthTokensForParticipantsOnDeviceArray_Count; // @dynamic iosOauthTokensForParticipantsOnDeviceArray_Count;
@property(copy, nonatomic) NSString *iosPushOauthToken; // @dynamic iosPushOauthToken;
@property(copy, nonatomic) NSData *iosPushkitToken; // @dynamic iosPushkitToken;
@property(nonatomic) int iosScreenSizeDps; // @dynamic iosScreenSizeDps;
@property(copy, nonatomic) NSData *iosToken; // @dynamic iosToken;
@property(copy, nonatomic) NSString *iosUploadedContactsPrivateKey; // @dynamic iosUploadedContactsPrivateKey;
@property(copy, nonatomic) NSString *locale; // @dynamic locale;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *pstnAppId; // @dynamic pstnAppId;
@property(retain, nonatomic) NSMutableArray *pstnCapabilityArray; // @dynamic pstnCapabilityArray;
@property(readonly, nonatomic) unsigned long long pstnCapabilityArray_Count; // @dynamic pstnCapabilityArray_Count;
@property(nonatomic) int pstnCarrierMcc; // @dynamic pstnCarrierMcc;
@property(nonatomic) int pstnCarrierMnc; // @dynamic pstnCarrierMnc;
@property(copy, nonatomic) NSString *pstnNumber; // @dynamic pstnNumber;
@property(nonatomic) int registrationType; // @dynamic registrationType;
@property(retain, nonatomic) CPBClientRequestHeader *requestHeader; // @dynamic requestHeader;
@property(copy, nonatomic) NSString *stateUpdateVersion; // @dynamic stateUpdateVersion;
@property(copy, nonatomic) NSString *unregisterOnBehalfOfGaiaId; // @dynamic unregisterOnBehalfOfGaiaId;

@end

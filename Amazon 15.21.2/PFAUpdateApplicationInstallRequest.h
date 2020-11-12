//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class KSApplicationInformation, KSPayloadEncryptionInformation, KSPushInformation, KSServerAuthenticationInformation, NSNumber, NSString;

@interface PFAUpdateApplicationInstallRequest : CoralModel <NSCoding, NSCopying>
{
    NSString *_applicationInstallId;
    NSNumber *_sequenceNumber;
    KSApplicationInformation *_applicationInformation;
    KSPushInformation *_pushInformation;
    NSString *_marketplaceId;
    NSString *_localeId;
    NSString *_osNotificationState;
    KSPayloadEncryptionInformation *_payloadEncryptionInformation;
    KSServerAuthenticationInformation *_serverAuthenticationInformation;
}

+ (id)type;
@property(retain, nonatomic) KSServerAuthenticationInformation *serverAuthenticationInformation; // @synthesize serverAuthenticationInformation=_serverAuthenticationInformation;
@property(retain, nonatomic) KSPayloadEncryptionInformation *payloadEncryptionInformation; // @synthesize payloadEncryptionInformation=_payloadEncryptionInformation;
@property(copy, nonatomic) NSString *osNotificationState; // @synthesize osNotificationState=_osNotificationState;
@property(copy, nonatomic) NSString *localeId; // @synthesize localeId=_localeId;
@property(copy, nonatomic) NSString *marketplaceId; // @synthesize marketplaceId=_marketplaceId;
@property(retain, nonatomic) KSPushInformation *pushInformation; // @synthesize pushInformation=_pushInformation;
@property(retain, nonatomic) KSApplicationInformation *applicationInformation; // @synthesize applicationInformation=_applicationInformation;
@property(retain, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(copy, nonatomic) NSString *applicationInstallId; // @synthesize applicationInstallId=_applicationInstallId;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/CRPTService-Protocol.h>

@class GAZCredentialStore, GAZKeychain, GAZSSOServiceExtension, NSString;
@protocol SSOService;

@interface CRPTEnrollment1Service : NSObject <CRPTService>
{
    long long _registerOnceToken;
    GAZKeychain *_keychain;
    id <SSOService> _identityService;
    GAZSSOServiceExtension *_serviceExtension;
    GAZCredentialStore *_credentialStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GAZCredentialStore *credentialStore; // @synthesize credentialStore=_credentialStore;
@property(readonly, nonatomic) GAZSSOServiceExtension *serviceExtension; // @synthesize serviceExtension=_serviceExtension;
@property(readonly, nonatomic) id <SSOService> identityService; // @synthesize identityService=_identityService;
- (id)enrollment1Service;
- (void)successHintForSignCryptedMessage:(id)arg1;
- (void)clientErrorHintForSignCryptedMessage:(id)arg1;
- (id)verifyDecryptForEncryption:(id)arg1 signingKeyName:(id)arg2 encryptionKeyName:(id)arg3;
- (id)signCryptedMessageForUserID:(id)arg1 signingKeyName:(id)arg2 encryptionKeyName:(id)arg3 encryptionRequest:(id)arg4;
- (long long)timeMillisSinceScreenlockEnable;
- (id)metadataMessageForFeature:(int)arg1 userID:(id)arg2;
- (id)metadataForFeature:(int)arg1 userID:(id)arg2;
- (id)appMetadata;
- (void)setAppMetadata:(id)arg1;
- (void)setFeature:(int)arg1 metadataMessage:(id)arg2 userID:(id)arg3;
- (void)setFeature:(int)arg1 metadata:(id)arg2 userID:(id)arg3;
- (id)signatureFromData:(id)arg1 keyHandle:(id)arg2 error:(id *)arg3;
- (id)keyDataWithKeyHandle:(id)arg1;
- (id)keyPairForKeyHandle:(id)arg1 error:(id *)arg2;
- (id)symmetricKeyForKeyHandle:(id)arg1 error:(id *)arg2;
- (id)symmetricKeyForKeyName:(id)arg1 userID:(id)arg2;
- (id)activeKeyHandleForKeyName:(long long)arg1 userID:(id)arg2;
- (void)registerForKeyNames:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)registerKeyName:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)registerForKeyName:(long long)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

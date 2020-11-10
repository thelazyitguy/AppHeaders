//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/RegistrationController.h>

#import <Nbp/NfRegistrationController-Protocol.h>

@class NIDTokens, NSString, NrdCookies;

@interface NbpMigrationOnlyRegistration : RegistrationController <NfRegistrationController>
{
    shared_ptr_89bd54aa _systemData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_89bd54aa systemData; // @synthesize systemData=_systemData;
@property(readonly, nonatomic) NIDTokens *tokens;
@property(readonly, nonatomic) _Bool registered;
- (id)readConfiguration:(id)arg1;
- (id)lastSelectedDAK;
- (void)dealloc;
@property(copy, nonatomic) NSString *currentProfileGUID; // @dynamic currentProfileGUID;
- (id)initWithApplicationStorage:(id)arg1 esn:(id)arg2;
@property(copy, nonatomic) NSString *accountOwnerGUID; // @dynamic accountOwnerGUID;

// Remaining properties
@property(readonly, nonatomic) NIDTokens *accountOwnerTokens; // @dynamic accountOwnerTokens;
@property(readonly, nonatomic) NrdCookies *cookies; // @dynamic cookies;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool didRecoverFromKeychain;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool shouldSendNotifications;
@property(readonly) Class superclass;

@end

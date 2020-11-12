//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTGmailifyService-Protocol.h"

@class NSString;
@protocol GBTGmailifyServiceDependencies;

@interface GBTGmailifyServiceImpl : NSObject <GBTGmailifyService>
{
    id <GBTGmailifyServiceDependencies> _gmailifyServiceDependencies;
}

- (void).cxx_destruct;
- (id)descriptionForStartPairingResponseStatus:(int)arg1 withEmail:(id)arg2;
- (id)errorWithDescription:(id)arg1;
- (id)identityForGoogleAccount:(id)arg1;
- (id)authForGoogleAccount:(id)arg1;
- (id)authenticateGmailifyUrl:(id)arg1 withGoogleAccount:(id)arg2;
- (id)requestTokenAuthURLForGoogleAccount:(id)arg1 targetURL:(id)arg2;
- (id)fetchUrl:(id)arg1 withBody:(id)arg2 authWithGoogleAccount:(id)arg3 responseClass:(Class)arg4;
- (id)startPairingExternalEmailAddress:(id)arg1 withGoogleAccount:(id)arg2;
- (id)firstGoogleAccount;
- (id)syncSettingsForGoogleAccount:(id)arg1;
- (_Bool)isGoogleAccountGmailified:(id)arg1;
- (id)linkedAddressForGoogleAccount:(id)arg1;
- (id)authenticateUrl:(id)arg1 forWebViewWithGoogleAccount:(id)arg2;
- (id)localizedUrlWithString:(id)arg1;
- (id)updatePassword:(id)arg1 forExternalEmailAddress:(id)arg2 withGoogleAccount:(id)arg3;
- (id)disconnectExternalEmail:(id)arg1 fromGoogleAccount:(id)arg2 deleteMessages:(_Bool)arg3;
- (id)pairExternalEmailAddress:(id)arg1 withGoogleAccount:(id)arg2 usingPassword:(id)arg3 info:(id)arg4;
- (id)getInfoToPairExternalEmailAddress:(id)arg1 withGoogleAccount:(id)arg2;
- (id)checkAvailabilityForDomain:(id)arg1;
- (id)initWithGmailifyServiceDependencies:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

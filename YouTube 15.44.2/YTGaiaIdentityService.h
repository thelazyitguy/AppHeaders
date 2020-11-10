//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable, SSOAccountInterfaceDataSource, SSOAccountProfileSource, SSOAccountService;
@protocol SSOService, YTSSOConfig, YTSSOHostViewControllerResponderProvider;

@interface YTGaiaIdentityService : NSObject
{
    id <SSOService> _ssoService;
    id <YTSSOConfig> _ssoConfig;
    id <YTSSOHostViewControllerResponderProvider> _modalPresentationResponderProvider;
    NSHashTable *_gaiaIdentitiesChangedObservers;
    SSOAccountInterfaceDataSource *_accountDataSource;
    SSOAccountProfileSource *_accountProfileSource;
    SSOAccountService *_accountService;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)ssoService;
- (void)notifyObserversWithRemovedAccountsIDs:(id)arg1;
- (void)notifyObserversWithAddedAccounts:(id)arg1;
- (void)ssoIdentityListChanged:(id)arg1;
- (id)applicationScopes;
- (void)forceSignOutDueToError:(id)arg1 googleID:(id)arg2;
- (id)modalPresentationResponderProvider;
- (void)accessTokenRefreshFailed:(id)arg1;
- (id)ssoAuthorizationForSSOIdentity:(id)arg1;
- (id)googleAccountForSSOIdentity:(id)arg1;
- (id)googleAccountForEarlyDelegationID:(id)arg1;
- (id)googleAccountForLateDelegationID:(id)arg1;
- (id)oneGoogleAccountMenuSession;
- (id)oneGoogleTheme;
- (id)oneGoogleAccountMenuConfiguration;
- (id)accountService;
- (id)accountProfileSource;
- (id)accountDataSource;
- (void)removeGaiaIdentitiesChangedObserver:(id)arg1;
- (void)addGaiaIdentitiesChangedObserver:(id)arg1;
- (id)allUnicornAccounts;
- (id)allGoogleAccounts;
- (void)removeGoogleAccountFromDevice:(id)arg1;
- (id)lastDeviceIdentity;
- (id)googleAccountForIdentityID:(id)arg1;
- (id)delegatedGoogleAccountForUnicornID:(id)arg1 parentID:(id)arg2;
- (id)googleAccountForPersonaID:(id)arg1 ownerID:(id)arg2;
- (id)googleAccountForID:(id)arg1;
- (id)cachedAvatarImageForAccount:(id)arg1;
- (void)showGaiaSwitchAccountsFromCurrentGoogleAccount:(id)arg1 withSucceededBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3 cancelledBlock:(CDUnknownBlockType)arg4;
- (void)showGaiaSignInWithSucceededBlock:(CDUnknownBlockType)arg1 failedBlock:(CDUnknownBlockType)arg2 cancelledBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

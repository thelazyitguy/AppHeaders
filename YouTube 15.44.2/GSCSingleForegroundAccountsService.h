//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GSCAccountsExternalSourceDelegate-Protocol.h>
#import <Module_Framework/GSCAccountsService-Protocol.h>
#import <Module_Framework/GSCSingleForegroundAccountsService-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSString, PHSBroadcast;
@protocol GIPAccountID, GSCAccountsExternalSource, GSCAccountsStorageService, OS_dispatch_queue;

@interface GSCSingleForegroundAccountsService : NSObject <GSCAccountsExternalSourceDelegate, GSCAccountsService, GSCSingleForegroundAccountsService>
{
    long long _previousForegroundAccountAction;
    NSMutableDictionary *_accountsDict;
    id <GIPAccountID> _foregroundAccountId;
    NSMutableOrderedSet *_activeAccountIds;
    id <GSCAccountsStorageService> _accountsStorageService;
    id <GSCAccountsExternalSource> _accountsExternalSource;
    CDUnknownBlockType _deactivationWipeoutManagerInjector;
    CDUnknownBlockType _deletionWipeoutManagerInjector;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_storageQueue;
    NSObject<OS_dispatch_queue> *_pubsubQueue;
    NSObject<OS_dispatch_queue> *_globalConcurrentQueue;
    NSMutableDictionary *_accountUpdatesBroadcastsDict;
    PHSBroadcast *_accountsListUpdatesBroadcast;
}

- (void).cxx_destruct;
- (void)overwriteLocalAccountAndBroadcastUpdates:(id)arg1;
- (void)updateLocalAccountWithExternalAccount:(id)arg1;
- (void)combineLoadedAccounts:(id)arg1 foregroundAccountIds:(id)arg2 activeAccountIds:(id)arg3 externalSourceAccounts:(id)arg4;
- (id)accountWithSSOIdentity:(id)arg1;
- (void)saveAccountsToStorageAsync;
- (void)didChangeForegroundAccountFrom:(id)arg1 to:(id)arg2;
- (void)subscribeToAccountListUpdatesWithChannel:(id)arg1;
- (void)subscribeToUpdatesForAccountWithId:(id)arg1 channel:(id)arg2;
- (_Bool)hasForegroundAccountWithId:(id)arg1;
- (_Bool)hasActiveAccountWithId:(id)arg1;
- (id)accountWithId:(id)arg1;
- (id)foregroundAccounts;
- (id)activeAccounts;
- (id)accounts;
- (void)didUpdateAccounts;
- (void)didUpdateAccount:(id)arg1;
- (void)setForegroundAccountWithSSOIdentity:(id)arg1;
- (id)initWithAccountsExternalSource:(id)arg1 accountsStorageService:(id)arg2 accountDeactivationWipeoutManagerInjector:(CDUnknownBlockType)arg3 accountDeletionWipeoutManagerInjector:(CDUnknownBlockType)arg4 options:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTActionSheetControllerDelegate-Protocol.h>
#import <Module_Framework/YTIdentityProvider-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>
#import <Module_Framework/YTVisitorDataStore-Protocol.h>

@class GIMMe, NSString, YTIdentityNotifier, YTIdentityRestorer, YTIdentityRetriever, YTIdentityStore, YTIdentityTransactionCoalescer, YTUserDefaults;
@protocol YTIdentityStrategy;

@interface YTIdentityController : NSObject <YTActionSheetControllerDelegate, YTSystemNotificationsObserver, YTVisitorDataStore, YTIdentityProvider>
{
    YTUserDefaults *_userDefaults;
    YTIdentityStore *_store;
    YTIdentityTransactionCoalescer *_coalescer;
    YTIdentityRetriever *_retriever;
    YTIdentityNotifier *_notifier;
    id <YTIdentityStrategy> _strategy;
    YTIdentityRestorer *_restorer;
    CDUnknownBlockType _incognitoDialogCancelBlock;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(copy, nonatomic) NSString *visitorData;
- (void)actionSheetDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (unsigned long long)identityTypeFromIdentityState:(id)arg1;
- (void)setVisitorDataForIdentity:(id)arg1 visitorData:(id)arg2;
- (id)visitorDataForIdentity:(id)arg1;
- (void)presentExitIncognitoDialogWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)signOutWithError:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (id)trimDataSyncIdsToActiveDeviceAccounts:(id)arg1;
- (_Bool)isIncognitoActive;
- (void)allAvailableIdentitiesWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)identityForID:(id)arg1;
- (id)activeIdentity;
- (void)removeUserChangedObserver:(id)arg1;
- (void)addUserChangedObserver:(id)arg1;
- (_Bool)isSignedIn;
- (void)requestDirectSignInPreDelegatedChildIdentityWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)requestDirectSignInPreIncognitoIdentityWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)goIncognitoWithVisitorData:(id)arg1;
- (void)refreshUserWithNextCommand:(id)arg1 parentResponder:(id)arg2;
- (void)fixVisitorDataBugIfNeeded;
- (void)forceSignOutFromError:(id)arg1 forID:(id)arg2;
- (void)signOut;
- (void)requestDirectSignInWithGaiaAuthenticatedIdentity:(id)arg1 userProfile:(id)arg2 successBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (void)requestDirectSignInWithGaiaAuthenticatedIdentity:(id)arg1 userProfile:(id)arg2;
- (void)requestDirectSignInWithGoogleAccount:(id)arg1 accountItem:(id)arg2 successBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (void)requestDirectSignInWithGoogleAccount:(id)arg1 accountItem:(id)arg2;
- (void)requestSwitchAccountsWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)requestSignInWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)requestReauthenticationWithSuccessBlock:(CDUnknownBlockType)arg1 showSwitcher:(_Bool)arg2 errorBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;
- (void)launchFirstTimeSignInWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithServiceRegistryScope:(id)arg1 identityNotifier:(id)arg2 systemNotifications:(id)arg3 userDefaults:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


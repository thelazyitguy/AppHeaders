//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LastPassModel_OS-Protocol.h"
#import "LoginLogoutResponseHandler-Protocol.h"
#import "ServerRequestHandlerDelegate-Protocol.h"

@class LPLogin, LPLoginCheck, LP_Reachability, NSDate, NSMutableArray, NSMutableString, NSString, NSTimer, ServerRequestQueue;

@interface LastPassModel : NSObject <ServerRequestHandlerDelegate, LastPassModel_OS, LoginLogoutResponseHandler>
{
    _Bool _includeUsernameInVault;
    _Bool _searchInNotes;
    _Bool _searchInUsernames;
    _Bool _showListIndex;
    _Bool _retryDisabled;
    _Bool _isLoggedIn;
    _Bool _isLoggedInOffline;
    _Bool _isInAppPurchasingEnabled;
    _Bool _isSafeKey;
    _Bool _isSameCredentials;
    NSMutableString *_offlineUsername;
    NSMutableString *_offlinePassword;
    NSMutableString *_pendingUsername;
    NSMutableString *_pendingPassword;
    LPLogin *_login;
    LPLoginCheck *_loginCheck;
    NSTimer *_pollTimer;
    NSDate *_lastPollDate;
    ServerRequestQueue *_serverRequestQueue;
    LP_Reachability *_reachability;
    NSMutableArray *_observers;
    NSMutableArray *_wmessages;
    NSMutableArray *_callbacks;
}

+ (void)restoreState;
+ (void)clearSharedInstance;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
+ (void)setSharedDelegate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSameCredentials; // @synthesize isSameCredentials=_isSameCredentials;
@property(retain, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) NSMutableArray *wmessages; // @synthesize wmessages=_wmessages;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) LP_Reachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) ServerRequestQueue *serverRequestQueue; // @synthesize serverRequestQueue=_serverRequestQueue;
@property(retain, nonatomic) NSDate *lastPollDate; // @synthesize lastPollDate=_lastPollDate;
@property(retain, nonatomic) NSTimer *pollTimer; // @synthesize pollTimer=_pollTimer;
@property(readonly, nonatomic) _Bool isSafeKey; // @synthesize isSafeKey=_isSafeKey;
@property(retain, nonatomic) LPLoginCheck *loginCheck; // @synthesize loginCheck=_loginCheck;
@property(retain, nonatomic) LPLogin *login; // @synthesize login=_login;
@property(retain, nonatomic) NSMutableString *pendingPassword; // @synthesize pendingPassword=_pendingPassword;
@property(retain, nonatomic) NSMutableString *pendingUsername; // @synthesize pendingUsername=_pendingUsername;
@property(retain, nonatomic) NSMutableString *offlinePassword; // @synthesize offlinePassword=_offlinePassword;
@property(retain, nonatomic) NSMutableString *offlineUsername; // @synthesize offlineUsername=_offlineUsername;
@property(readonly) _Bool isInAppPurchasingEnabled; // @synthesize isInAppPurchasingEnabled=_isInAppPurchasingEnabled;
@property(nonatomic) _Bool isLoggedInOffline; // @synthesize isLoggedInOffline=_isLoggedInOffline;
@property(nonatomic) _Bool isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
@property(nonatomic) _Bool retryDisabled; // @synthesize retryDisabled=_retryDisabled;
@property(nonatomic) _Bool showListIndex; // @synthesize showListIndex=_showListIndex;
@property(nonatomic) _Bool searchInUsernames; // @synthesize searchInUsernames=_searchInUsernames;
@property(nonatomic) _Bool searchInNotes; // @synthesize searchInNotes=_searchInNotes;
@property(nonatomic) _Bool includeUsernameInVault; // @synthesize includeUsernameInVault=_includeUsernameInVault;
- (_Bool)deleteApplicationLocally:(id)arg1;
@property(readonly) _Bool canAutoLogin; // @dynamic canAutoLogin;
- (_Bool)canSaveApplication:(id)arg1;
- (_Bool)saveApplicationLocally:(id)arg1;
- (_Bool)isApplicationMovingToOrFromSharedFolder:(id)arg1;
- (_Bool)deleteAccountLocally:(id)arg1;
- (_Bool)canSaveAccounts:(id)arg1;
- (_Bool)canSaveAccount:(id)arg1;
- (_Bool)saveAccountsLocally:(id)arg1;
- (_Bool)saveAccountLocally:(id)arg1;
- (_Bool)isAccountMovingToLinkedPersonalFolder:(id)arg1;
- (_Bool)isAccountMovingToNonExistentSharedFolder:(id)arg1;
- (_Bool)isAccountMovingToOrFromSharedFolder:(id)arg1;
- (void)serverRequestFailed:(id)arg1 withError:(id)arg2;
- (void)serverRequestSucceeded:(id)arg1;
- (void)notifySessionLost;
- (void)sessionLost;
- (void)setInAppPurchasingEnabled:(_Bool)arg1;
- (void)onSecurityChallengeRankFailed:(id)arg1;
- (void)onSecurityChallengePercentile:(double)arg1;
- (void)onSecurityChallengeRank:(long long)arg1;
- (void)onCreateAccountFailed:(id)arg1;
- (void)onCreateAccountSuccessful:(id)arg1;
- (void)onSaveGeneratedPasswordFailed:(id)arg1;
- (void)onDeleteFormFillFailed:(id)arg1;
- (void)onSaveFormFillFailed:(id)arg1;
- (void)onDeleteApplicationFailed:(id)arg1;
- (void)onSaveApplicationFailed:(id)arg1;
- (void)onDeleteAccountFailed:(id)arg1;
- (void)onSaveAccountFailed:(id)arg1;
- (void)onSaveGeneratedPasswordSuccessfulWithAccount:(id)arg1;
- (void)onDeleteFormFillSuccessful;
- (void)onSaveFormFillSuccessful;
- (void)onDeleteApplicationSuccessful;
- (void)onSaveApplicationSuccessful;
- (void)onDeleteAccountSuccessful:(id)arg1;
- (void)onSaveAccountSuccessful:(id)arg1;
- (void)reachabilityChangedNotified:(id)arg1;
@property(readonly) _Bool isOnline; // @dynamic isOnline;
@property(readonly) int networkStatus;
- (void)attachmentsReadyNotified:(id)arg1;
- (void)attachmentsReady;
- (void)accountsReadyNotified:(id)arg1;
- (void)accountsReady;
- (void)notifyStateRestored;
- (void)notifyPollServerFailed;
- (void)notifyPollServerSuccesful;
- (void)notifyReachabilityChanged:(int)arg1;
- (void)notifyPrefsChanged;
- (void)notifyRequiresMultifactorRepromptWithType:(id)arg1 postdata:(id)arg2 question:(id)arg3 autotrust:(id)arg4 hidedisable:(id)arg5 reseturl:(id)arg6 allowtrust:(id)arg7 capabilities:(id)arg8 smshash:(id)arg9 smstime:(id)arg10 smsuid:(id)arg11 sms_nextcode:(id)arg12 outofbandtype:(id)arg13 textoverride:(id)arg14 allowmultifactortrust:(id)arg15 outofbandimage:(id)arg16 trustexpired:(id)arg17 trustlabel:(id)arg18 enabledProviders:(id)arg19 enabledProviderNames:(id)arg20;
- (void)notifyInAppPurchasingEnabledChanged;
- (void)notifySecurityChallengeRankFailed:(id)arg1;
- (void)notifySecurityChallengePercentile:(double)arg1;
- (void)notifySecurityChallengeRank:(long long)arg1;
- (void)notifyCreateAccountFailed:(id)arg1;
- (void)notifyCreateAccountSuccessful:(id)arg1 model:(long long)arg2 trialDays:(long long)arg3;
- (void)notifyRequireIdleTimerReset;
- (void)notifyRequireFingerprint;
- (void)notifyRequirePin;
- (void)notifySaveGeneratedPasswordFailed:(id)arg1;
- (void)notifySaveGeneratedPasswordSuccessfulWithAccount:(id)arg1;
- (void)notifyDeleteFormFillFailed:(id)arg1;
- (void)notifyDeleteFormFillSuccessful;
- (void)notifySaveFormFillFailed:(id)arg1;
- (void)notifySaveFormFillSuccessful;
- (void)notifyDeleteApplicationFailed:(id)arg1;
- (void)notifyDeleteApplicationSuccessful;
- (void)notifySaveApplicationFailed:(id)arg1;
- (void)notifySaveApplicationSuccessful;
- (void)notifyDeleteAccountFailed:(id)arg1;
- (void)notifyDeleteAccountSuccessful:(id)arg1;
- (void)notifySaveAccountFailed:(id)arg1;
- (void)notifySaveAccountSuccessful:(id)arg1;
- (void)notifyDataAvailable;
- (void)dataAvailable:(id)arg1 formfills:(id)arg2;
- (void)notifyOnlineStateChanged;
- (void)notifyLoggedOut;
- (void)notifyForcedLogout:(id)arg1 cause:(id)arg2;
- (void)notifyLoginResponse:(_Bool)arg1 message:(id)arg2 cause:(id)arg3;
- (void)onLoginResponse:(_Bool)arg1 message:(id)arg2 cause:(id)arg3;
- (void)onLoginResponse:(_Bool)arg1 message:(id)arg2;
- (void)onLoginFailed:(id)arg1;
- (void)refresh;
- (void)removeMessage:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)sendEmailVerificationMessage;
- (void)updateSharedFolderKeys;
- (void)submitCrashReport:(id)arg1;
- (void)sendMultifactorTrustUuid:(id)arg1 trustLabel:(id)arg2 csrfToken:(id)arg3;
- (void)sendSmsHash:(id)arg1 time:(id)arg2 uid:(id)arg3;
- (void)checkInAppPurchaseEnabled;
- (void)deleteNeverUrl:(id)arg1 neverType:(int)arg2;
- (void)addNeverUrl:(id)arg1 neverType:(int)arg2;
- (void)fetchSecurityChallengeRank:(id)arg1;
- (void)createAccountWithUsername:(id)arg1 password:(id)arg2 passwordHint:(id)arg3 keepHistory:(_Bool)arg4 contactPermission:(_Bool)arg5 openedConsentOptions:(_Bool)arg6 tag:(id)arg7;
- (void)launchBookmarklet:(int)arg1;
- (void)moveApplication:(id)arg1 toSharedFolder:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveAccounts:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)moveAccount:(id)arg1 toSharedFolder:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteFormFill:(id)arg1 subType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteFormFill:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveFormFill:(id)arg1 subType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveFormFill:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveGeneratedPassword:(id)arg1 forURL:(id)arg2;
- (void)saveGeneratedPassword:(id)arg1;
- (void)deleteFormFill:(id)arg1 subType:(long long)arg2;
- (void)deleteFormFill:(id)arg1;
- (void)clearFieldsForDeletionOnFormFill:(id)arg1 subType:(long long)arg2;
- (void)saveFormFill:(id)arg1 subType:(long long)arg2;
- (void)saveFormFill:(id)arg1;
- (void)deleteApplication:(id)arg1;
- (void)saveApplication:(id)arg1;
- (void)deleteAccount:(id)arg1;
- (void)saveAccount:(id)arg1;
- (void)pollServer;
- (void)checkLoginIgnoreThrottle:(_Bool)arg1;
- (void)checkLogin;
- (void)saveState;
@property(readonly) _Bool requireFingerprintOnLogin; // @dynamic requireFingerprintOnLogin;
@property(readonly) _Bool requirePinScreenOnLogin; // @dynamic requirePinScreenOnLogin;
- (void)clearSavedCredentials;
- (void)onForcedLogout:(id)arg1 cause:(id)arg2;
- (void)logout;
- (void)login:(id)arg1 rememberUsername:(_Bool)arg2 password:(id)arg3 rememberPassword:(_Bool)arg4 offlineLogin:(_Bool)arg5 authSessionId:(id)arg6 alpFragmentId:(id)arg7 calculatedFragmentId:(id)arg8;
- (void)login:(id)arg1 rememberUsername:(_Bool)arg2 password:(id)arg3 rememberPassword:(_Bool)arg4 offlineLogin:(_Bool)arg5;
- (void)federatedLoginOpenID:(id)arg1 rememberUsername:(_Bool)arg2 password:(id)arg3 alpFragmentId:(id)arg4 calculatedFragmentId:(id)arg5;
- (void)federatedLogin:(id)arg1 rememberUsername:(_Bool)arg2 password:(id)arg3 authSessionId:(id)arg4;
- (void)wipeTemporaryCredentials;
- (void)retrieveSavedUsername:(id)arg1 password:(id)arg2;
@property(readonly) _Bool hasSavedPassword; // @dynamic hasSavedPassword;
@property(readonly) _Bool hasSavedCredentials; // @dynamic hasSavedCredentials;
- (_Bool)hasAccountWithSameHostInUrl:(id)arg1 andUsername:(id)arg2;
- (id)vaultEntitiesForFormFill;
- (id)vaultFolderForIASorted:(_Bool)arg1 nested:(_Bool)arg2 usingNoneFolder:(_Bool)arg3;
- (id)vaultFolderForIASorted:(_Bool)arg1 nested:(_Bool)arg2;
- (id)vaultFolderForIA;
- (id)favoritesByGroupMergeNoneGroup;
- (id)notesByGroupMergeNoneGroup:(id)arg1;
- (id)notesByGroupMergeNoneGroup;
- (id)sitesByGroupMergeNoneGroup:(id)arg1;
- (id)sitesByGroupMergeNoneGroup;
- (id)accountsByGroupMergeNoneGroup;
- (id)favoritesByGroup;
- (id)notesByGroup:(id)arg1;
- (id)notesByGroup;
- (id)sitesByGroup:(id)arg1;
- (id)sitesByGroup;
- (id)accountsByGroup;
- (id)groupsUnfiltered;
- (id)applicationGroups;
- (id)noteGroups;
- (id)siteGroups;
- (id)groups;
- (id)messages;
- (id)formFills;
- (id)favoriteNotes;
- (id)favoriteSites;
- (id)favorites;
- (id)applications;
- (id)sites;
- (id)notes;
- (id)accountsIncludingGroups:(_Bool)arg1;
- (id)accountsWithGroups;
- (id)accounts;
@property(readonly) _Bool isLoggedOut;
- (void)loadPropertyState;
- (void)enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)observersPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)observersPerformSelector:(SEL)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)pollTimer_fired:(id)arg1;
- (void)invalidatePollTimer;
- (void)cleanup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

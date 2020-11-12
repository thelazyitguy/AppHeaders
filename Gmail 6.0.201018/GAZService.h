//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRPTKeyedOperationQueue, GAZAppInfo, GAZCredentialStore, GAZDateProvider, GAZEnrollmentManager, GAZPromptManager, GAZPromptStore, GAZProtocolManager, GAZWebViewPromptStore, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, SSOService;

@interface GAZService : NSObject
{
    NSMutableSet *_enrollmentsInProgress;
    NSMutableDictionary *_transactionIdToStateMachineMap;
    NSMutableArray *_enrollmentCompletionBlocks;
    _Bool _checkedCachedDeviceToken;
    NSObject<OS_dispatch_queue> *_keychainQueue;
    GAZAppInfo *_appInfo;
    GAZCredentialStore *_credentialStore;
    GAZDateProvider *_dateProvider;
    GAZEnrollmentManager *_enrollmentManager;
    CRPTKeyedOperationQueue *_keyedOperationQueue;
    GAZPromptManager *_promptManager;
    GAZPromptStore *_promptStore;
    GAZProtocolManager *_protocolManager;
    GAZWebViewPromptStore *_webViewPromptStore;
    NSData *_encodedPublicKey;
    id <SSOService> _authSSOService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SSOService> authSSOService; // @synthesize authSSOService=_authSSOService;
@property(readonly, nonatomic) NSData *encodedPublicKey; // @synthesize encodedPublicKey=_encodedPublicKey;
- (CDUnknownBlockType)markFinishedCallback:(CDUnknownBlockType)arg1 forUserID:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)queueAction:(CDUnknownBlockType)arg1 forUserID:(id)arg2;
- (void)removeFromEnrollmentsInProgress:(id)arg1;
- (void)dismissDuplicatedPromptsFromCurrentPrompts:(id)arg1 newPrompts:(id)arg2;
- (id)promptsAfterRespondingToNewPrompts:(id)arg1;
- (void)authorizeUserID:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handleCancelRequestMessage:(id)arg1;
- (void)finishedEnrollmentForUserID:(id)arg1 error:(id)arg2;
- (void)startEnrollmentForUserID:(id)arg1 reason:(int)arg2;
- (id)signedCleartextMessageFromBuilder:(id)arg1 signatureScheme:(int)arg2 body:(id)arg3;
- (id)symmetricKeyFromPublicKey:(id)arg1;
- (id)publicKey;
- (void)addEnrollmentCompletionBlock:(CDUnknownBlockType)arg1;
- (void)handleServerSecureMessage:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)respondToPrompt:(id)arg1 withTransactionResponse:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)logDisplayOfUserInitiatedPrompt:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)cachedStateMachineForPrompt:(id)arg1;
- (void)addWebViewPromptWithTransactionID:(id)arg1 URL:(id)arg2 userID:(id)arg3 timeUntilExpiration:(double)arg4 deliveryDate:(id)arg5;
- (void)addPromptFromTransactionRequest:(id)arg1 serverDate:(id)arg2 deliveryDate:(id)arg3;
- (void)syncTransactionRequestsForUserID:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)syncTransactionRequestsForKeyHandle:(id)arg1 sessionId:(id)arg2 hadAPNAlert:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (double)timeSinceScreenlockEnable;
- (_Bool)isPasscodeStable;
- (_Bool)isPasscodeSet;
- (void)updateScreenlockStatus;
- (void)removeEnrollmentsForUserID:(id)arg1;
- (void)startFailureRecoveryEnrollmentForUserIDs:(id)arg1;
- (void)ensureEnrollmentForUserID:(id)arg1 isNewUser:(_Bool)arg2;
- (void)ensureEnrollmentsOnlyForUserIDs:(id)arg1;
@property(copy, nonatomic) NSData *deviceToken;
- (id)initWithSSOService:(id)arg1 promptStore:(id)arg2 promptOrganizer:(id)arg3 webViewPromptStore:(id)arg4;

@end

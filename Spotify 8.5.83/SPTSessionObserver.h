//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAuthLegacySessionObserver-Protocol.h"
#import "SPTIncognitoModeHandlerObserver-Protocol.h"

@class NSString, SPCore, SPTApplicationStateTracker, SPTAuthLegacySession, SPTIncognitoModeHandler, SPTRequestLifetime;
@protocol SPTAlertInterface, SPTLogCenter, SPTNetworkConnectivityController, SPTResolver;

@interface SPTSessionObserver : NSObject <SPTAuthLegacySessionObserver, SPTIncognitoModeHandlerObserver>
{
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    SPCore *_core;
    SPTAuthLegacySession *_session;
    SPTIncognitoModeHandler *_incognitoModeHandler;
    SPTApplicationStateTracker *_applicationStateTracker;
    id <SPTResolver> _cosmosRouter;
    id <SPTLogCenter> _logCenter;
    id <SPTAlertInterface> _alertInterface;
    SPTRequestLifetime *_offlineErrorSubscription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTRequestLifetime *offlineErrorSubscription; // @synthesize offlineErrorSubscription=_offlineErrorSubscription;
@property(retain, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <SPTResolver> cosmosRouter; // @synthesize cosmosRouter=_cosmosRouter;
@property(nonatomic) __weak SPTApplicationStateTracker *applicationStateTracker; // @synthesize applicationStateTracker=_applicationStateTracker;
@property(nonatomic) __weak SPTIncognitoModeHandler *incognitoModeHandler; // @synthesize incognitoModeHandler=_incognitoModeHandler;
@property(nonatomic) __weak SPTAuthLegacySession *session; // @synthesize session=_session;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
- (void)showDialogWithTitle:(id)arg1 message:(id)arg2;
- (void)showDialogOfflineLicenseLost;
- (void)showDialogOfflineModeExpired;
- (void)syncErrorNotEnoughSpaceOnDevice;
- (void)logOfflineErrorAlertUIImpressionWithTargetUri:(id)arg1 impressionType:(id)arg2;
- (void)session:(id)arg1 offlineSyncError:(id)arg2;
- (void)session:(id)arg1 autoUpdateWithURL:(id)arg2;
- (void)incognitoModeHandler:(id)arg1 incognitoModeChangedByTimeout:(_Bool)arg2;
- (void)tryToDisableOfflineMode;
- (void)onOfflineError:(long long)arg1;
- (void)subscribeToOfflineErrors;
- (void)applicationStateChanged:(id)arg1;
- (void)updateApplicationState;
- (void)dealloc;
- (id)initWithCore:(id)arg1 session:(id)arg2 incognitoModeHandler:(id)arg3 applicationStateTracker:(id)arg4 cosmosRouter:(id)arg5 logCenter:(id)arg6 networkConnectivityController:(id)arg7 alertInterface:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


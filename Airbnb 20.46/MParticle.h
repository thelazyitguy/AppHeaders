//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPBackendControllerDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"

@class CLLocation, MPAppNotificationHandler, MPBackendController, MPCommerce, MPIdentityApi, MPKitActivity, MPKitContainer, MPNetworkOptions, MPPersistenceController, MPStateMachine, MParticleOptions, MParticleSession, MParticleWebView, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface MParticle : NSObject <MPBackendControllerDelegate, WKScriptMessageHandler>
{
    _Bool isLoggingUncaughtExceptions;
    _Bool sdkInitialized;
    _Bool _optOut;
    _Bool _consoleLogging;
    _Bool _initialized;
    _Bool _proxiedAppDelegate;
    _Bool _automaticSessionTracking;
    _Bool _collectUserAgent;
    _Bool _collectSearchAdsAttribution;
    _Bool _trackNotifications;
    MPCommerce *_commerce;
    MPIdentityApi *_identity;
    MPPersistenceController *_persistenceController;
    MPStateMachine *_stateMachine;
    MPKitContainer *_kitContainer;
    MPAppNotificationHandler *_appNotificationHandler;
    NSString *_customUserAgent;
    MPNetworkOptions *_networkOptions;
    MPBackendController *_backendController;
    MParticleOptions *_options;
    NSMutableDictionary *_configSettings;
    MPKitActivity *_kitActivity;
    NSMutableArray *_kitsInitializedBlocks;
    NSArray *_deferredKitConfiguration;
    MParticleWebView *_webView;
    NSString *_dataPlanId;
    NSNumber *_dataPlanVersion;
}

+ (_Bool)registerExtension:(id)arg1;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
+ (void)executeOnMessage:(CDUnknownBlockType)arg1;
+ (_Bool)isMessageQueue;
+ (id)messageQueue;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *dataPlanVersion; // @synthesize dataPlanVersion=_dataPlanVersion;
@property(retain, nonatomic) NSString *dataPlanId; // @synthesize dataPlanId=_dataPlanId;
@property(retain, nonatomic) MParticleWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSArray *deferredKitConfiguration; // @synthesize deferredKitConfiguration=_deferredKitConfiguration;
@property(retain, nonatomic) NSMutableArray *kitsInitializedBlocks; // @synthesize kitsInitializedBlocks=_kitsInitializedBlocks;
@property(retain, nonatomic) MPKitActivity *kitActivity; // @synthesize kitActivity=_kitActivity;
@property(retain, nonatomic) NSMutableDictionary *configSettings; // @synthesize configSettings=_configSettings;
@property(retain, nonatomic) MParticleOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) MPBackendController *backendController; // @synthesize backendController=_backendController;
@property(readonly) _Bool trackNotifications; // @synthesize trackNotifications=_trackNotifications;
@property(retain, nonatomic) MPNetworkOptions *networkOptions; // @synthesize networkOptions=_networkOptions;
@property(readonly) _Bool collectSearchAdsAttribution; // @synthesize collectSearchAdsAttribution=_collectSearchAdsAttribution;
@property(readonly) _Bool collectUserAgent; // @synthesize collectUserAgent=_collectUserAgent;
@property(readonly) NSString *customUserAgent; // @synthesize customUserAgent=_customUserAgent;
@property(readonly, nonatomic) _Bool automaticSessionTracking; // @synthesize automaticSessionTracking=_automaticSessionTracking;
@property(readonly, nonatomic) _Bool proxiedAppDelegate; // @synthesize proxiedAppDelegate=_proxiedAppDelegate;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(readonly, nonatomic) _Bool consoleLogging; // @synthesize consoleLogging=_consoleLogging;
@property(retain, nonatomic) MPAppNotificationHandler *appNotificationHandler; // @synthesize appNotificationHandler=_appNotificationHandler;
@property(retain, nonatomic) MPKitContainer *kitContainer; // @synthesize kitContainer=_kitContainer;
@property(retain, nonatomic) MPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) MPPersistenceController *persistenceController; // @synthesize persistenceController=_persistenceController;
- (void)logNotificationWithUserInfo:(id)arg1 behavior:(unsigned long long)arg2;
- (void)logNotificationOpenedWithUserInfo:(id)arg1;
- (void)logNotificationReceivedWithUserInfo:(id)arg1;
- (void)handleWebviewCommand:(id)arg1 dictionary:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)initializeWKWebView:(id)arg1;
- (void)initializeWKWebView:(id)arg1 bridgeName:(id)arg2;
- (id)bridgeVersion;
- (id)webviewBridgeValueWithCustomerBridgeName:(id)arg1;
- (_Bool)isValidBridgeName:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2;
- (id)surveyURL:(unsigned long long)arg1;
- (void)upload;
- (void)endSession;
- (void)beginSession;
- (void)setSessionAttribute:(id)arg1 value:(id)arg2;
- (id)incrementSessionAttribute:(id)arg1 byValue:(id)arg2;
- (void)logNetworkPerformance:(id)arg1 httpMethod:(id)arg2 startTime:(double)arg3 duration:(double)arg4 bytesSent:(unsigned long long)arg5 bytesReceived:(unsigned long long)arg6;
- (void)endLocationTracking;
- (void)beginLocationTracking:(double)arg1 minDistance:(double)arg2 authorizationRequest:(unsigned long long)arg3;
- (void)beginLocationTracking:(double)arg1 minDistance:(double)arg2;
@property(retain, nonatomic) CLLocation *location;
@property(nonatomic) _Bool backgroundLocationTracking;
- (void)kitInstance:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)kitInstance:(id)arg1;
- (_Bool)isKitActive:(id)arg1;
- (void)executeKitsInitializedBlocks;
- (void)onKitsInitialized:(CDUnknownBlockType)arg1;
- (id)integrationAttributesForKit:(id)arg1;
- (id)clearIntegrationAttributesForKit:(id)arg1;
- (id)setIntegrationAttributes:(id)arg1 forKit:(id)arg2;
- (void)logLTVIncrease:(double)arg1 eventName:(id)arg2 eventInfo:(id)arg3;
- (void)logLTVIncrease:(double)arg1 eventName:(id)arg2;
- (void)logCommerceEvent:(id)arg1;
- (void)logException:(id)arg1 topmostContext:(id)arg2;
- (void)logException:(id)arg1;
- (void)logError:(id)arg1 eventInfo:(id)arg2;
- (void)logError:(id)arg1;
- (void)leaveBreadcrumb:(id)arg1 eventInfo:(id)arg2;
- (void)leaveBreadcrumb:(id)arg1;
- (void)endUncaughtExceptionLogging;
- (void)beginUncaughtExceptionLogging;
- (id)attributionInfo;
- (void)logScreen:(id)arg1 eventInfo:(id)arg2;
- (void)logScreenEvent:(id)arg1;
- (void)logEvent:(id)arg1 eventType:(unsigned long long)arg2 eventInfo:(id)arg3;
- (void)logCustomEvent:(id)arg1;
- (void)logEvent:(id)arg1;
- (id)eventWithName:(id)arg1;
- (void)endTimedEvent:(id)arg1;
- (void)beginTimedEvent:(id)arg1;
- (id)activeTimedEvents;
- (void)reset;
- (_Bool)continueUserActivity:(id)arg1 restorationHandler:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 options:(id)arg2;
- (void)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 withResponseInfo:(id)arg3;
- (void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2;
- (void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1;
- (void)didFailToRegisterForRemoteNotificationsWithError:(id)arg1;
- (void)didReceiveRemoteNotification:(id)arg1;
@property(retain, nonatomic) NSData *pushNotificationToken;
@property(readonly) MParticleSession *currentSession;
- (id)sessionIDFromUUID:(id)arg1;
- (void)startWithOptions:(id)arg1;
@property(readonly, nonatomic) NSString *version;
- (id)userAttributesForUserId:(id)arg1;
@property(readonly, nonatomic) double uploadInterval;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) double sessionTimeout;
@property(nonatomic) _Bool optOut; // @synthesize optOut=_optOut;
@property(nonatomic) unsigned long long logLevel;
@property(readonly, nonatomic) unsigned long long environment;
@property(readonly, nonatomic) MPCommerce *commerce; // @synthesize commerce=_commerce;
@property(readonly, nonatomic) MPIdentityApi *identity; // @synthesize identity=_identity;
- (void)forwardLogUpdate;
- (void)forwardLogInstall;
- (void)sessionDidEnd:(id)arg1;
- (void)sessionDidBegin:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


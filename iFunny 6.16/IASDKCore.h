//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IAInterfaceSingleton-Protocol.h>
#import <Funny/IARemoteConfigReadyDelegate-Protocol.h>

@class IACriteoApi, NSMapTable, NSMutableArray, NSString;
@protocol IAGlobalAdDelegate, OS_dispatch_queue;

@interface IASDKCore : NSObject <IARemoteConfigReadyDelegate, IAInterfaceSingleton>
{
    NSObject<OS_dispatch_queue> *_initSyncQueue;
    NSObject<OS_dispatch_queue> *_initCompletionQueue;
    _Bool _isInitiatedAtLeastOnce;
    _Bool _initialised;
    _Bool _isUnderFairBid;
    _Bool _adReportingEnabled;
    _Bool _isValidConfig;
    long long _GDPRConsent;
    NSString *_GDPRConsentString;
    NSString *_CCPAString;
    NSString *_userID;
    NSString *_appID;
    NSString *_publisherAppStoreID;
    id <IAGlobalAdDelegate> _globalAdDelegate;
    CDUnknownBlockType _initCompletionBlock;
    NSString *_FairBidSDKVersion;
    NSMutableArray *_supportedNetworkBuilders;
    NSMutableArray *_supportedContentParsers;
    NSMutableArray *_supportedContentLoaders;
    NSMapTable *_configReadyObservers;
    IACriteoApi *_criteoApi;
    double _configRetryCooldownInSec;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
+ (id)sharedInstance;
+ (void)initNetworkBuilder;
+ (void)load;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) double configRetryCooldownInSec; // @synthesize configRetryCooldownInSec=_configRetryCooldownInSec;
@property(nonatomic) _Bool isValidConfig; // @synthesize isValidConfig=_isValidConfig;
@property(retain, nonatomic) IACriteoApi *criteoApi; // @synthesize criteoApi=_criteoApi;
@property(retain, nonatomic) NSMapTable *configReadyObservers; // @synthesize configReadyObservers=_configReadyObservers;
@property(retain) NSMutableArray *supportedContentLoaders; // @synthesize supportedContentLoaders=_supportedContentLoaders;
@property(retain, nonatomic) NSMutableArray *supportedContentParsers; // @synthesize supportedContentParsers=_supportedContentParsers;
@property(retain, nonatomic) NSMutableArray *supportedNetworkBuilders; // @synthesize supportedNetworkBuilders=_supportedNetworkBuilders;
@property _Bool adReportingEnabled; // @synthesize adReportingEnabled=_adReportingEnabled;
@property(retain, nonatomic) NSString *FairBidSDKVersion; // @synthesize FairBidSDKVersion=_FairBidSDKVersion;
@property(nonatomic) _Bool isUnderFairBid; // @synthesize isUnderFairBid=_isUnderFairBid;
@property(copy, nonatomic) CDUnknownBlockType initCompletionBlock; // @synthesize initCompletionBlock=_initCompletionBlock;
@property __weak id <IAGlobalAdDelegate> globalAdDelegate; // @synthesize globalAdDelegate=_globalAdDelegate;
@property(retain) NSString *publisherAppStoreID; // @synthesize publisherAppStoreID=_publisherAppStoreID;
@property(getter=isInitialised) _Bool initialised; // @synthesize initialised=_initialised;
@property(retain) NSString *appID; // @synthesize appID=_appID;
- (void)remoteConfigurationHasFinishedWithResult:(_Bool)arg1 error:(id)arg2;
- (void)sendATSSettingsErrorWithMessage:(id)arg1;
- (void)notifyConfigIsReady;
- (void)networkReachabilityDidChange:(id)arg1;
- (void)requestRemoteConfigAndBeNotified;
- (void)privateInit;
- (void)returnSDKInitResultWithError:(id)arg1;
- (void)localConfigIsReady;
- (void)removeConfigReadyObserver:(id)arg1;
- (void)addConfigReadyObserver:(id)arg1;
- (void)addSupportedLoaderClass:(Class)arg1;
- (Class)supportedLoaderClassByContentType:(long long)arg1;
- (void)addSupportedParserClass:(Class)arg1;
- (Class)supportedParserClassByContentType:(long long)arg1;
- (void)addSupportedNetworkBuilderClass:(Class)arg1;
- (Class)supportedNetworkBuilderClassByContentType:(long long)arg1;
- (id)localNetworkingRawValue;
- (id)arbitraryLoadsForMediaRawValue;
- (id)arbitraryLoadsInWebContentRawValue;
- (id)SKNetworkItems;
- (_Bool)isArbitraryLoadsAllowed;
- (_Bool)isArbitraryLoadsInWebContentAllowed;
- (_Bool)isArbitraryLoadsAllowedAndConfiguredCorrectly;
- (void)initWithAppID:(id)arg1 FairBidSDKVersion:(id)arg2;
- (void)clearGDPRConsentData;
@property(retain) NSString *userID; // @synthesize userID=_userID;
@property(retain) NSString *CCPAString; // @synthesize CCPAString=_CCPAString;
@property(retain) NSString *GDPRConsentString; // @synthesize GDPRConsentString=_GDPRConsentString;
@property long long GDPRConsent; // @synthesize GDPRConsent=_GDPRConsent;
- (void)setPublisherAppStoreIDIfNeeded;
- (id)version;
- (void)initWithAppID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)initWithAppID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


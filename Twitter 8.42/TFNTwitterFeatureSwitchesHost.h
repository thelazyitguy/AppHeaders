//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSFeatureSwitchesHosting-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableDictionary, NSString, TFNTwitterFeatureSwitchesHostBridgeScribeDelegate, TLTBackgroundTaskManager;
@protocol OS_dispatch_queue, TFNTwitterFeatureSwitchesHostAuthenticatedServicesProvider;

@interface TFNTwitterFeatureSwitchesHost : NSObject <TFSFeatureSwitchesHosting>
{
    id <TFNTwitterFeatureSwitchesHostAuthenticatedServicesProvider> _authenticatedServicesProvider;
    NSMapTable *_scribeRegistry;
    NSMutableDictionary *_loggerRegistry;
    TFNTwitterFeatureSwitchesHostBridgeScribeDelegate *_guestScribe;
    NSObject<OS_dispatch_queue> *_registryQueue;
    TLTBackgroundTaskManager *_backgroundTaskManager;
    NSMutableDictionary *_taskHandleMap;
    NSHashTable *_accountFeatureSwitches;
    NSObject<OS_dispatch_queue> *_accountFeatureSwitchesQueue;
}

+ (id)configurationPath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accountFeatureSwitchesQueue; // @synthesize accountFeatureSwitchesQueue=_accountFeatureSwitchesQueue;
@property(retain, nonatomic) NSHashTable *accountFeatureSwitches; // @synthesize accountFeatureSwitches=_accountFeatureSwitches;
@property(retain, nonatomic) NSMutableDictionary *taskHandleMap; // @synthesize taskHandleMap=_taskHandleMap;
@property(retain, nonatomic) TLTBackgroundTaskManager *backgroundTaskManager; // @synthesize backgroundTaskManager=_backgroundTaskManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *registryQueue; // @synthesize registryQueue=_registryQueue;
@property(retain, nonatomic) TFNTwitterFeatureSwitchesHostBridgeScribeDelegate *guestScribe; // @synthesize guestScribe=_guestScribe;
@property(retain, nonatomic) NSMutableDictionary *loggerRegistry; // @synthesize loggerRegistry=_loggerRegistry;
@property(retain, nonatomic) NSMapTable *scribeRegistry; // @synthesize scribeRegistry=_scribeRegistry;
@property(retain, nonatomic) id <TFNTwitterFeatureSwitchesHostAuthenticatedServicesProvider> authenticatedServicesProvider; // @synthesize authenticatedServicesProvider=_authenticatedServicesProvider;
- (id)pathForArchiveFileNamed:(id)arg1;
- (id)featureSwitchesSentinelForAccountID:(id)arg1;
- (id)featureSwitchesEventLoggingForAccountID:(id)arg1;
- (id)featureSwitchesFetchTaskForAccountID:(id)arg1;
- (void)featureSwitchesArchiveDidEndForAccountID:(id)arg1;
- (void)featureSwitchesArchiveDidStartForAccountID:(id)arg1;
- (void)featureSwitchUpdateRequiresRestart;
- (void)featureSwitchesDidPartialUpdateForAccountID:(id)arg1;
- (void)featureSwitchesDidUpdatePendingConfigForAccountID:(id)arg1;
- (void)featureSwitchesDidUpdateForAccountID:(id)arg1;
- (void)registerFeatureSwitches:(id)arg1;
- (void)registerScribeDelegate:(id)arg1 accountID:(id)arg2;
- (id)initWithAuthenticatedServicesProvider:(id)arg1;
- (void)shutdown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


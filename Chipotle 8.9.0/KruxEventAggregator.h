//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KruxTrackerController-Protocol.h"

@class Consent, KruxConfig, KruxLocationController, KruxReachability, NSArray, NSOperationQueue, NSSet, NSString, NSTimer, RequestQueue;
@protocol KruxConsentCallback;

@interface KruxEventAggregator : NSObject <KruxTrackerController>
{
    _Bool isNetworkAvailable;
    double lastConfigAndSegmentExecutionTime;
    _Bool bypassTimeIntervalRestriction;
    double lastConsentExecutionTime;
    _Bool bypassConsentTimeIntervalRestriction;
    long long schedulerInterval;
    long long consentSchedulerInterval;
    NSString *udid;
    NSString *idfa;
    NSTimer *timer;
    NSTimer *consentTimer;
    KruxLocationController *kxLocation;
    _Bool _debug;
    _Bool _dryRun;
    NSString *_configId;
    NSArray *_segments;
    NSString *_configHost;
    NSString *_jslogHost;
    KruxReachability *_reachability;
    KruxConfig *_config;
    id <KruxConsentCallback> _consentCallback;
    Consent *_consent;
    RequestQueue *_queue;
    NSString *_configUrl;
    NSString *_consentBaseUrl;
    NSString *_jslogUrl;
    NSSet *_whitelistHosts;
    long long _consentRetries;
    NSOperationQueue *_requestOperationQueue;
    NSObject *_consentLock;
    NSObject *_configLock;
}

@property(retain, nonatomic) NSObject *configLock; // @synthesize configLock=_configLock;
@property(retain, nonatomic) NSObject *consentLock; // @synthesize consentLock=_consentLock;
@property(retain, nonatomic) NSOperationQueue *requestOperationQueue; // @synthesize requestOperationQueue=_requestOperationQueue;
@property long long consentRetries; // @synthesize consentRetries=_consentRetries;
@property(retain) NSSet *whitelistHosts; // @synthesize whitelistHosts=_whitelistHosts;
@property(retain) NSString *jslogUrl; // @synthesize jslogUrl=_jslogUrl;
@property(retain) NSString *consentBaseUrl; // @synthesize consentBaseUrl=_consentBaseUrl;
@property(retain) NSString *configUrl; // @synthesize configUrl=_configUrl;
@property(retain) RequestQueue *queue; // @synthesize queue=_queue;
@property(retain) Consent *consent; // @synthesize consent=_consent;
@property(retain) id <KruxConsentCallback> consentCallback; // @synthesize consentCallback=_consentCallback;
@property(retain) KruxConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) KruxReachability *reachability; // @synthesize reachability=_reachability;
@property(retain) NSString *jslogHost; // @synthesize jslogHost=_jslogHost;
@property(retain) NSString *configHost; // @synthesize configHost=_configHost;
@property(retain) NSArray *segments; // @synthesize segments=_segments;
@property(retain) NSString *configId; // @synthesize configId=_configId;
@property _Bool dryRun; // @synthesize dryRun=_dryRun;
@property _Bool debug; // @synthesize debug=_debug;
- (void).cxx_destruct;
- (id)getBaseUrl:(long long)arg1;
- (void)processRequest:(id)arg1 type:(long long)arg2;
- (void)consumerPortabilityRequest:(id)arg1;
- (void)consumerRemoveRequest:(id)arg1;
- (void)consentGetRequest:(id)arg1;
- (void)consentSetRequest:(id)arg1;
- (unsigned char)validateIdParameters:(id)arg1 type:(long long)arg2;
- (id)getUrl:(id)arg1 baseUrl:(id)arg2;
- (void)processResponseCallback:(long long)arg1 response:(id)arg2;
- (void)processErrorCallback:(long long)arg1 errorMessage:(id)arg2;
- (void)getConsent;
- (unsigned char)setConsentSettings:(id)arg1 type:(long long)arg2;
- (id)deviceName;
- (void)sendToKrux:(id)arg1 withError:(id)arg2 withReqestURL:(id)arg3;
- (_Bool)getlocationService;
- (id)replacePlaceholdersWithKruxConfigInRequestString:(id)arg1;
- (void)executeQueue;
- (void)trackTransactionWithAttributes:(id)arg1;
- (_Bool)fireEvent:(id)arg1 eventAttributes:(id)arg2 withError:(id *)arg3;
- (void)trackPageView:(id)arg1 attributes:(id)arg2;
- (void)trackPageView:(id)arg1 pageAttributes:(id)arg2 userAttributes:(id)arg3;
- (void)appendPrefix:(id)arg1 to:(id)arg2;
- (id)getSegmentUrl:(id)arg1 baseUrl:(id)arg2;
- (id)getFullUrl:(id)arg1 baseUrl:(id)arg2;
- (id)getUDID;
- (void)sendAsyncRequest:(id)arg1 type:(long long)arg2;
- (id)getResponseData:(id)arg1 data:(id)arg2 response:(id)arg3 error:(id)arg4;
- (id)sendSyncRequest:(id)arg1;
- (void)fetchSegments;
- (void)updateOptOutStatus;
- (void)handleNetworkChange:(id)arg1;
- (void)fetchConfig;
- (void)getSegmentsAndConfig;
- (void)stopConsentScheduler;
- (void)stopScheduler;
- (void)startConsentScheduler;
- (void)startScheduler;
- (void)startReachabilityNotifier;
- (_Bool)isValidHostName:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConfigId:(id)arg1;
- (id)initWithConfigId:(id)arg1 debugFlag:(_Bool)arg2 configHost:(id)arg3 jslogHost:(id)arg4 consentCallback:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTViewLogger-Protocol.h"

@class NSArray, NSMutableDictionary, NSNumber, NSSet, NSString, NSURL, NSUUID, SPTObserverManager;
@protocol OS_os_log, SPTPerformanceKitUUIDProvider, SPTViewLoadSequenceTransport, SPTViewLoggerConnectionTypeProvider;

@interface SPTViewLogger : NSObject <SPTViewLogger>
{
    _Bool _didLogViewLoadingFinished;
    NSString *_pageIdentifier;
    long long _state;
    NSUUID *_uuid;
    id <SPTViewLoadSequenceTransport> _transport;
    NSURL *_viewURI;
    id <SPTViewLoggerConnectionTypeProvider> _connectionTypeProvider;
    id <SPTPerformanceKitUUIDProvider> _uuidProvider;
    long long _initialConnectionType;
    long long _terminalConnectionType;
    struct __CFRunLoopObserver *_runLoopObserver;
    NSMutableDictionary *_steps;
    long long _terminalState;
    NSMutableDictionary *_metaData;
    SPTObserverManager *_observerManager;
    NSObject<OS_os_log> *_instrumentationLog;
    unsigned long long _signpostID;
    NSNumber *_viewStartedLoadingAt;
    NSSet *_pendingImageLoadingRequests;
    NSArray *_finishedImageLoadingRequests;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *finishedImageLoadingRequests; // @synthesize finishedImageLoadingRequests=_finishedImageLoadingRequests;
@property(copy, nonatomic) NSSet *pendingImageLoadingRequests; // @synthesize pendingImageLoadingRequests=_pendingImageLoadingRequests;
@property(retain, nonatomic) NSNumber *viewStartedLoadingAt; // @synthesize viewStartedLoadingAt=_viewStartedLoadingAt;
@property(nonatomic) _Bool didLogViewLoadingFinished; // @synthesize didLogViewLoadingFinished=_didLogViewLoadingFinished;
@property(readonly, nonatomic) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
@property(readonly, nonatomic) NSObject<OS_os_log> *instrumentationLog; // @synthesize instrumentationLog=_instrumentationLog;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) NSMutableDictionary *metaData; // @synthesize metaData=_metaData;
@property(nonatomic) long long terminalState; // @synthesize terminalState=_terminalState;
@property(retain, nonatomic) NSMutableDictionary *steps; // @synthesize steps=_steps;
@property(nonatomic) struct __CFRunLoopObserver *runLoopObserver; // @synthesize runLoopObserver=_runLoopObserver;
@property(nonatomic) long long terminalConnectionType; // @synthesize terminalConnectionType=_terminalConnectionType;
@property(nonatomic) long long initialConnectionType; // @synthesize initialConnectionType=_initialConnectionType;
@property(readonly, nonatomic) __weak id <SPTPerformanceKitUUIDProvider> uuidProvider; // @synthesize uuidProvider=_uuidProvider;
@property(readonly, nonatomic) id <SPTViewLoggerConnectionTypeProvider> connectionTypeProvider; // @synthesize connectionTypeProvider=_connectionTypeProvider;
@property(copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(retain, nonatomic) id <SPTViewLoadSequenceTransport> transport; // @synthesize transport=_transport;
@property long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void)removeImageLoadingRequest:(id)arg1;
- (void)addImageLoadingRequest:(id)arg1;
- (void)notifyObserversOfStateChange:(long long)arg1 timeSinceStart:(double)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)logViewLoadingRendered;
- (void)logViewLoadingCancelledWithPageIdentifier:(id)arg1 dataSource:(long long)arg2;
- (void)logViewDataDidFailToLoadWithPageIdentifier:(id)arg1 dataSource:(long long)arg2;
- (void)logImageLoadingEndedForImageWithURI:(id)arg1;
- (void)logImageLoadingStartedForImageWithURI:(id)arg1;
- (void)logViewDataDidLoadWithPageIdentifier:(id)arg1 dataSource:(long long)arg2;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1 reason:(long long)arg2;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic, getter=isViewLoadingInProgress) _Bool viewLoadingInProgress;
- (void)deliverSequence;
- (void)logViewLoadWithStepName:(long long)arg1 timeSinceStart:(double)arg2 isTerminalStep:(_Bool)arg3 deliverSequence:(_Bool)arg4;
- (double)durationSinceStart:(id)arg1;
- (void)dealloc;
- (id)initWithTransport:(id)arg1 viewURI:(id)arg2 connectionTypeProvider:(id)arg3 uuidProvider:(id)arg4 instrumentationLog:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEventSenderService-Protocol.h"

@class INSEventSender, NSString, NSURL, SPTAllocationContext, SPTEventSenderCanaryKeeper, SPTEventSenderCoreImplementation, SPTEventSenderDebugState, SPTEventSenderImplementation, SPTEventSenderSatelliteServiceResponderImplementation, SPTEventSenderTransportImplementation;
@protocol SPTConnectivityService, SPTContainerService, SPTCoreService, SPTDebugService, SPTNetworkService, SPTResolver;

@interface SPTEventSenderServiceImplementation : NSObject <SPTEventSenderService>
{
    NSURL *_overrideDatabaseLocation;
    id <SPTContainerService> _containerService;
    id <SPTDebugService> _debugService;
    id <SPTNetworkService> _networkService;
    id <SPTConnectivityService> _connectivityService;
    id <SPTCoreService> _coreService;
    SPTEventSenderTransportImplementation *_transport;
    INSEventSender *_sdk;
    SPTEventSenderImplementation *_eventSender;
    SPTEventSenderSatelliteServiceResponderImplementation *_satelliteServiceResponder;
    SPTEventSenderCanaryKeeper *_canaryKeeper;
    SPTEventSenderDebugState *_eventSenderDebugState;
    id <SPTResolver> _cosmosResolver;
    SPTEventSenderCoreImplementation *_eventSenderCore;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTEventSenderCoreImplementation *eventSenderCore; // @synthesize eventSenderCore=_eventSenderCore;
@property(retain, nonatomic) id <SPTResolver> cosmosResolver; // @synthesize cosmosResolver=_cosmosResolver;
@property(retain, nonatomic) SPTEventSenderDebugState *eventSenderDebugState; // @synthesize eventSenderDebugState=_eventSenderDebugState;
@property(retain, nonatomic) SPTEventSenderCanaryKeeper *canaryKeeper; // @synthesize canaryKeeper=_canaryKeeper;
@property(retain, nonatomic) SPTEventSenderSatelliteServiceResponderImplementation *satelliteServiceResponder; // @synthesize satelliteServiceResponder=_satelliteServiceResponder;
@property(retain, nonatomic) SPTEventSenderImplementation *eventSender; // @synthesize eventSender=_eventSender;
@property(retain, nonatomic) INSEventSender *sdk; // @synthesize sdk=_sdk;
@property(retain, nonatomic) SPTEventSenderTransportImplementation *transport; // @synthesize transport=_transport;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTConnectivityService> connectivityService; // @synthesize connectivityService=_connectivityService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(retain, nonatomic) NSURL *overrideDatabaseLocation; // @synthesize overrideDatabaseLocation=_overrideDatabaseLocation;
- (id)provideEventSenderStateViewController;
- (id)provideSatelliteResponder;
- (id)provideEventSender;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTPlayModeMonitor;
@protocol SPTContainerUIService, SPTNetworkService, SPTSessionService, _TtP18CoreSessionFeature21SPTCoreSessionService_;

@interface SPTPlayModeMonitorService : NSObject <SPTService>
{
    id <SPTNetworkService> _networkService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTSessionService> _sessionService;
    id <_TtP18CoreSessionFeature21SPTCoreSessionService_> _coreSessionService;
    SPTPlayModeMonitor *_playModeMonitor;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTPlayModeMonitor *playModeMonitor; // @synthesize playModeMonitor=_playModeMonitor;
@property(nonatomic) __weak id <_TtP18CoreSessionFeature21SPTCoreSessionService_> coreSessionService; // @synthesize coreSessionService=_coreSessionService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
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


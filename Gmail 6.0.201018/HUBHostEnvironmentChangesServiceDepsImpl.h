//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBHostEnvironmentChangesServiceDeps-Protocol.h"

@class GOOProvider, NSString;
@protocol DYNGuestEnvironmentChangesService, GBTGuestEnvironmentChangesService, HUBAppScopedAppAvailabilityService, HUBPerformanceMonitoringManagerService;

@interface HUBHostEnvironmentChangesServiceDepsImpl : NSObject <HUBHostEnvironmentChangesServiceDeps>
{
    GOOProvider *_appScopedAppAvailabilityServiceProvider;
    GOOProvider *_dynGuestEnvironmentChangesServiceProvider;
    GOOProvider *_gbtGuestEnvironmentChangesServiceProvider;
    GOOProvider *_performanceMonitoringServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *performanceMonitoringServiceProvider; // @synthesize performanceMonitoringServiceProvider=_performanceMonitoringServiceProvider;
@property(readonly, nonatomic) GOOProvider *gbtGuestEnvironmentChangesServiceProvider; // @synthesize gbtGuestEnvironmentChangesServiceProvider=_gbtGuestEnvironmentChangesServiceProvider;
@property(readonly, nonatomic) GOOProvider *dynGuestEnvironmentChangesServiceProvider; // @synthesize dynGuestEnvironmentChangesServiceProvider=_dynGuestEnvironmentChangesServiceProvider;
@property(readonly, nonatomic) GOOProvider *appScopedAppAvailabilityServiceProvider; // @synthesize appScopedAppAvailabilityServiceProvider=_appScopedAppAvailabilityServiceProvider;
@property(readonly, nonatomic) id <HUBPerformanceMonitoringManagerService> performanceMonitoringService;
@property(readonly, nonatomic) id <GBTGuestEnvironmentChangesService> gbtGuestEnvironmentChangesService;
@property(readonly, nonatomic) id <DYNGuestEnvironmentChangesService> dynGuestEnvironmentChangesService;
@property(readonly, nonatomic) id <HUBAppScopedAppAvailabilityService> appScopedAppAvailabilityService;
- (id)initWithAppScopedAppAvailabilityServiceProvider:(id)arg1 dynGuestEnvironmentChangesService:(id)arg2 gbtGuestEnvironmentChangesService:(id)arg3 performanceMonitoringService:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


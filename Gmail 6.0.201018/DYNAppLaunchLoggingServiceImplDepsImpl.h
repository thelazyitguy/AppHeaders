//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNAppLaunchLoggingServiceImplDeps-Protocol.h"

@class GOOProvider, NSString;
@protocol HUBPerformanceMonitoringService;

@interface DYNAppLaunchLoggingServiceImplDepsImpl : NSObject <DYNAppLaunchLoggingServiceImplDeps>
{
    GOOProvider *_performanceMonitoringServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *performanceMonitoringServiceProvider; // @synthesize performanceMonitoringServiceProvider=_performanceMonitoringServiceProvider;
@property(readonly, nonatomic) id <HUBPerformanceMonitoringService> performanceMonitoringService;
- (id)initWithPerformanceMonitoringServiceProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

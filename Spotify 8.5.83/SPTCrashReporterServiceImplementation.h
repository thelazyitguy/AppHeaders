//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCrashReporterService-Protocol.h"

@class NSString, SPTAllocationContext, SPTCrashReporterImplementation;
@protocol SPTConnectivityService, SPTRemoteConfigurationService;

@interface SPTCrashReporterServiceImplementation : NSObject <SPTCrashReporterService>
{
    SPTCrashReporterImplementation *_crashReporter;
    id <SPTConnectivityService> _connectivityService;
    id <SPTRemoteConfigurationService> _configService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> configService; // @synthesize configService=_configService;
@property(nonatomic) __weak id <SPTConnectivityService> connectivityService; // @synthesize connectivityService=_connectivityService;
@property(retain, nonatomic) SPTCrashReporterImplementation *crashReporter; // @synthesize crashReporter=_crashReporter;
- (void)unload;
- (id)provideCrashReporter;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

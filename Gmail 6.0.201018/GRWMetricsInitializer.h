//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRWComponentInitializer-Protocol.h"

@class NSString, NSTimer;
@protocol GRWInstalledAppsProvider;

@interface GRWMetricsInitializer : NSObject <GRWComponentInitializer>
{
    _Bool _isInitializationComplete;
    CDUnknownBlockType _installedBundleIDsVendor;
    NSTimer *_loggingTimer;
    id <GRWInstalledAppsProvider> _installedAppsProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GRWInstalledAppsProvider> installedAppsProvider; // @synthesize installedAppsProvider=_installedAppsProvider;
- (void)logInstalledBundleIDs;
- (void)logColdStartEventsIfNeeded;
- (void)initializeComponentWithOptions:(id)arg1 deviceState:(id)arg2;
@property(readonly, nonatomic) unsigned long long priority;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


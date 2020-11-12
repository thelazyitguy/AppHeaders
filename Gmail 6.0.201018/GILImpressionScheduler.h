//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GILImpressionScheduler-Protocol.h"
#import "GILLoggingStateListener-Protocol.h"

@class NSMutableArray, NSString;
@protocol GILImpressionScanner;

@interface GILImpressionScheduler : NSObject <GILLoggingStateListener, GILImpressionScheduler>
{
    id <GILImpressionScanner> _impressionScanner;
    NSMutableArray *_pendingViews;
    NSMutableArray *_pendingSyntheticCVEs;
    _Bool _scanAlreadyScheduled;
    _Bool _loggingEnabled;
    double _impressionScanInterval;
}

- (void).cxx_destruct;
- (void)processPendingImpressions;
- (void)scheduleImpressionProcessing;
- (void)enabledStateDidChange:(_Bool)arg1;
- (void)scheduleImpressionOfSyntheticCVE:(id)arg1;
- (void)scheduleImpressionOfView:(id)arg1;
- (void)dealloc;
- (id)initWithConfigurationService:(id)arg1 impressionScanner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

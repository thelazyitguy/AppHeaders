//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccessoryStateManager-Protocol.h"

@class NSHashTable, NSSet, NSString, SPTAccessoryManagerLogging;
@protocol SPTCrashReporter;

@interface SPTAccessoryStateManagerImplementation : NSObject <SPTAccessoryStateManager>
{
    id <SPTCrashReporter> _crashReporter;
    SPTAccessoryManagerLogging *_logger;
    NSSet *_accessories;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSSet *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) SPTAccessoryManagerLogging *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
- (void)notifyAccessoryDisconnected:(id)arg1;
- (void)notifyAccessoryConnected:(id)arg1;
- (void)notifyCrashReporterForAccessory:(id)arg1 forState:(id)arg2;
- (void)removeAccessory:(id)arg1;
- (void)addAccessory:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)currentAccessories;
- (id)initWithCrashReporter:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAutoLockController-Protocol.h"

@class NSHashTable, NSSet, NSString, UIApplication, UIDevice;

@interface SPTAutoLockControllerImplementation : NSObject <SPTAutoLockController>
{
    UIApplication *_application;
    UIDevice *_device;
    unsigned long long _screenLockers;
    unsigned long long _forcedScreenLockers;
    NSHashTable *_activeLockTokens;
}

+ (id)defaultController;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *activeLockTokens; // @synthesize activeLockTokens=_activeLockTokens;
@property(nonatomic) unsigned long long forcedScreenLockers; // @synthesize forcedScreenLockers=_forcedScreenLockers;
@property(nonatomic) unsigned long long screenLockers; // @synthesize screenLockers=_screenLockers;
@property(nonatomic) __weak UIDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak UIApplication *application; // @synthesize application=_application;
- (void)enableIdleTimer;
- (void)disableIdleTimer;
- (id)tokenReasonsMatchingPredicate:(CDUnknownBlockType)arg1;
- (void)enableScreenLockingForToken:(id)arg1;
- (id)disableScreenLockingWithReason:(id)arg1 mode:(long long)arg2;
- (void)sessionUserDidLogoutNotification:(id)arg1;
- (void)deviceBatteryStateDidChangeNotification:(id)arg1;
- (void)resetScreenLocking;
- (void)updateScreenLockerState;
@property(readonly, nonatomic) NSSet *activeForcedLockReasons;
@property(readonly, nonatomic) NSSet *activeUnforcedLockReasons;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 device:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

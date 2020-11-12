//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBAppStateManager-Protocol.h"

@class NSHashTable, NSNotificationCenter, NSString, UIApplication;

@interface HUBAppStateManagerImpl : NSObject <HUBAppStateManager>
{
    NSNotificationCenter *_notificationCenter;
    UIApplication *_application;
    long long _applicationState;
    NSHashTable *_appStateListeners;
    _Bool _isEnteringForeground;
    _Bool _fullLaunchComplete;
    _Bool _isWarmStart;
    _Bool _applicationOpenedWithPendingAction;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool applicationOpenedWithPendingAction; // @synthesize applicationOpenedWithPendingAction=_applicationOpenedWithPendingAction;
@property(nonatomic) _Bool isWarmStart; // @synthesize isWarmStart=_isWarmStart;
@property(nonatomic) _Bool fullLaunchComplete; // @synthesize fullLaunchComplete=_fullLaunchComplete;
- (void)updateApplicationState;
- (void)eventuallyCallDidEnterForeground;
- (void)fireAppStateListenerEventForSelector:(SEL)arg1;
- (void)willTerminate;
- (void)didEnterBackground;
- (void)didEnterForeground;
- (void)willEnterForeground;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)didFinishLaunching;
- (void)applicationDidBecomeActive;
- (void)applicationWillFinishLaunchingWithOptions;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (long long)applicationState;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

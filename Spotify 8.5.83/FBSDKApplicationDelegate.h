//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface FBSDKApplicationDelegate : NSObject
{
    NSHashTable *_applicationObservers;
    _Bool _isAppLaunched;
}

+ (_Bool)isSDKInitialized;
+ (long long)applicationState;
+ (id)sharedInstance;
+ (void)initializeSDK:(id)arg1;
+ (void)initializeWithLaunchData:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_logSwiftRuntimeAvailability;
- (void)_logIfAutoAppLinkEnabled;
- (void)_logSDKInitialize;
- (void)_logIfAppLinkEvent:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNetworkConnectivityController-Protocol.h"

@class APLReachability, CTTelephonyNetworkInfo, NSHashTable, NSMapTable, NSNotificationCenter, NSString, NSUserDefaults;
@protocol SPTAuthLegacyLoginController, SPTConnectivityManager;

@interface SPTNetworkConnectivityControllerImplementation : NSObject <SPTNetworkConnectivityController>
{
    NSHashTable *_activeKeepAliveTokens;
    id <SPTConnectivityManager> _connectivityManager;
    APLReachability *_reachability;
    id <SPTAuthLegacyLoginController> _legacyLoginController;
    NSMapTable *_observers;
    NSNotificationCenter *_center;
    NSUserDefaults *_defaults;
    CTTelephonyNetworkInfo *_networkInfo;
    long long _previousConnectionType;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long previousConnectionType; // @synthesize previousConnectionType=_previousConnectionType;
@property(retain, nonatomic) CTTelephonyNetworkInfo *networkInfo; // @synthesize networkInfo=_networkInfo;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) NSNotificationCenter *center; // @synthesize center=_center;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <SPTAuthLegacyLoginController> legacyLoginController; // @synthesize legacyLoginController=_legacyLoginController;
@property(retain, nonatomic) APLReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) id <SPTConnectivityManager> connectivityManager; // @synthesize connectivityManager=_connectivityManager;
@property(retain, nonatomic) NSHashTable *activeKeepAliveTokens; // @synthesize activeKeepAliveTokens=_activeKeepAliveTokens;
- (void)setDefaultsForcedOffline:(_Bool)arg1;
- (_Bool)defaultsForcedOffline;
- (void)setDefaultsAllowSyncOver3G:(_Bool)arg1;
- (_Bool)defaultsAllowSyncOver3G;
- (long long)connectionTypeFromReachabilityStatus:(long long)arg1;
- (long long)refinedCellularType;
- (void)defaultsChanged;
- (void)updateKeepAliveStatus;
- (void)keepAliveTokenRelinquished:(id)arg1;
- (id)keepAlivePersistentConnectionsWithReason:(id)arg1;
- (void)setAllowSyncOver3G:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool allowSyncOver3G;
- (void)setForcedOffline:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool forcedOffline;
- (void)setConnectionType:(long long)arg1;
@property(readonly, nonatomic) long long connectionType;
- (_Bool)isDisconnectedOrForcedOffline;
- (_Bool)isOfflineType:(long long)arg1;
- (void)reconnectIfNecessary:(_Bool)arg1;
- (void)networkReachabilityChanged;
- (void)iterateObservers:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithConnectivityManager:(id)arg1 legacyLoginController:(id)arg2 reachability:(id)arg3 networkInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


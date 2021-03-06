//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAuthConnectivityPolicyProviderObserver-Protocol.h"

@class NSMapTable, NSString, SPTAuthSession;
@protocol SPTAsyncScheduler, SPTAuthConnectivityPolicyProvider, SPTProductState;

@interface SPTAuthLegacySession : NSObject <SPTAuthConnectivityPolicyProviderObserver>
{
    NSMapTable *_observers;
    struct scoped_connection _accesspointForcedUpdateConnection;
    struct scoped_connection _accesspointTemporaryConnectionErrorConnection;
    struct scoped_connection _loginModeChangedConnection;
    _Bool _isOnline;
    _Bool _isOffline;
    _Bool _isLoggedIn;
    SPTAuthSession *_session;
    long long _currentLoginMode;
    id <SPTAuthConnectivityPolicyProvider> _connectivityPolicyProvider;
    id <SPTAsyncScheduler> _scheduler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) __weak id <SPTAuthConnectivityPolicyProvider> connectivityPolicyProvider; // @synthesize connectivityPolicyProvider=_connectivityPolicyProvider;
@property(nonatomic) long long currentLoginMode; // @synthesize currentLoginMode=_currentLoginMode;
@property(nonatomic) _Bool isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
@property(nonatomic) __weak SPTAuthSession *session; // @synthesize session=_session;
- (void)disableProductStateFromUCS;
- (void)productStateUpdated:(id)arg1;
- (id)webTokenRequestForURL:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
@property(readonly, nonatomic) NSString *currentAP;
- (void)processLoginModeChanged;
- (void)processTemporaryConnectionErrorWithError:(id)arg1 connectionError:(id)arg2;
- (void)processAutoUpdateEvent;
- (void)acceptLicenses:(id)arg1;
- (void)unacceptedLicencesWithCallback:(CDUnknownBlockType)arg1;
- (void)logout;
- (void)tryReconnect:(_Bool)arg1 toAp:(id)arg2;
- (void)updateOnlineStates;
- (void)loginModeChanged;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1 onQueue:(id)arg2;
- (void)addObserver:(id)arg1 onQueue:(id)arg2;
- (void)connectivityPolicyProvider:(id)arg1 didChangeFromPolicy:(long long)arg2 toPolicy:(long long)arg3;
- (void)invalidate;
@property(readonly, nonatomic) id <SPTProductState> productState;
@property(readonly, nonatomic) NSString *verbatimUsername;
@property(readonly, nonatomic) NSString *currentUsername;
- (void)dealloc;
- (id)initWithConnectivityPolicyProvider:(id)arg1 isPerfTracingEnabled:(_Bool)arg2 session:(id)arg3 scheduler:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTNetworkConnectivityController;

@protocol SPTNetworkConnectivityControllerObserver <NSObject>

@optional
- (void)networkConnectivityController:(id <SPTNetworkConnectivityController>)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)networkConnectivityController:(id <SPTNetworkConnectivityController>)arg1 didChangeAllowSyncOver3G:(_Bool)arg2;
- (void)networkConnectivityController:(id <SPTNetworkConnectivityController>)arg1 didChangeForcedOffline:(_Bool)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTConnectivityManagerDelegate;

@protocol SPTConnectivityManager <NSObject>
@property(nonatomic) __weak id <SPTConnectivityManagerDelegate> delegate;
@property _Bool keepAliveAPNetwork;
@property _Bool allowNetwork;
@property _Bool allowSyncOver3G;
@property long long connectionType;
- (void)setKeepAliveAPNetwork:(_Bool)arg1 callback:(void (^)(void))arg2;
- (void)setAllowNetwork:(_Bool)arg1 callback:(void (^)(void))arg2;
- (void)setAllowSyncOver3G:(_Bool)arg1 callback:(void (^)(void))arg2;
- (void)setConnectionType:(long long)arg1 callback:(void (^)(void))arg2;
- (void)invalidate;
@end


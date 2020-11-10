//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class YTReachabilityNetworkProperties;
@protocol YTReachabilityNetworkPropertiesObserver, YTReachabilityObserver;

@protocol YTReachabilityController <NSObject>
+ (id)new;
+ (id)alloc;
@property(readonly, nonatomic) YTReachabilityNetworkProperties *networkProperties;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic, getter=isOnWiFi) _Bool onWiFi;
@property(readonly, nonatomic) int detailedNetworkType;
@property(readonly, nonatomic) int connectionType;
- (void)removeNetworkPropertiesObserver:(id <YTReachabilityNetworkPropertiesObserver>)arg1;
- (void)addNetworkPropertiesObserver:(id <YTReachabilityNetworkPropertiesObserver>)arg1;
- (void)removeReachabilityObserver:(id <YTReachabilityObserver>)arg1;
- (void)addReachabilityObserver:(id <YTReachabilityObserver>)arg1;
- (void)refreshReachability;
- (void)clearConnectionTypeOverride;
- (void)setConnectionTypeOverride:(int)arg1;
- (_Bool)hasConnectionTypeOverride;
- (_Bool)isOfflineModeForced;
@end


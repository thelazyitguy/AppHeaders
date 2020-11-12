//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DXPConfig, NSMutableDictionary;
@protocol GIPClock;

@interface DXPPolicyRequestManager : NSObject
{
    DXPConfig *_config;
    id <GIPClock> _clock;
    double _jitterFactor;
    NSMutableDictionary *_failedRequestInfoMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *failedRequestInfoMap; // @synthesize failedRequestInfoMap=_failedRequestInfoMap;
@property(readonly, nonatomic) double jitterFactor; // @synthesize jitterFactor=_jitterFactor;
@property(readonly, nonatomic) id <GIPClock> clock; // @synthesize clock=_clock;
@property(readonly, nonatomic) DXPConfig *config; // @synthesize config=_config;
- (double)backoffTimeWithConsecutiveFailures:(int)arg1;
- (id)failedRequestInfoForUser:(id)arg1;
- (void)filterRequestManagerForActiveIdentities:(id)arg1;
- (void)clearFailedRequestInfoForIdentity:(id)arg1;
- (void)updateRequestRetryStatusForIdentity:(id)arg1 retryStatus:(long long)arg2;
- (double)updateFailedRequestInfoForIdentity:(id)arg1 timestamp:(id)arg2;
- (_Bool)shouldRetryFailedRequestForIdentity:(id)arg1;
- (_Bool)shouldRequestPolicyFromNetworkForIdentity:(id)arg1;
- (id)initWithConfig:(id)arg1 clock:(id)arg2 jitterFactor:(double)arg3;

@end

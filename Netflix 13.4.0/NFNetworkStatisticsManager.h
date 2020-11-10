//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NFNetworkStatisticsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableDictionary *_networkStatistics;
    const struct __SCNetworkReachability *_reachabilityRef;
    unsigned long long _connectionType;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) const struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(retain, nonatomic) NSMutableDictionary *networkStatistics; // @synthesize networkStatistics=_networkStatistics;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
- (id)statisticsForHost:(id)arg1;
- (void)recordSessionTaskMetrics:(id)arg1 forTask:(id)arg2;
- (_Bool)isDebugLoggingEnabled;
- (void)handleReachabilityChanged:(unsigned long long)arg1;
- (void)teardownReachabilityNotifications;
- (void)setupReachabilityNotifications;
- (id)_statisticsForHost:(id)arg1;
- (void)resetStatistics;
- (id)init;

@end

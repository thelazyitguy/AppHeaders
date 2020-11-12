//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DTBMetricsProcessor : NSObject
{
    NSMutableArray *reportQueue;
    _Bool isRunning;
}

+ (id)cacheBusterQueryString;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)endpointForPixelsBasedOnUrl:(id)arg1 withReportObject:(id)arg2;
- (void)dispenseReports;
- (void)submitLatencyReportBidId:(id)arg1 type:(id)arg2 interval:(long long)arg3;
- (void)submitSimpleReportBidId:(id)arg1 type:(id)arg2;
- (void)submitAlertReport:(id)arg1 extra:(id)arg2;
- (void)submitExpiredReport:(id)arg1;
- (void)addReport:(id)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface A9VSLatencyMetricsHelper : NSObject
{
}

+ (void)recordMetricWithStartDate:(id)arg1 endDate:(id)arg2 eventName:(id)arg3;
+ (void)logLatencyMetrics:(id)arg1 source:(id)arg2 modeName:(id)arg3;
+ (void)logSessionTransactionMetrics:(id)arg1 source:(id)arg2 modeName:(id)arg3;

@end

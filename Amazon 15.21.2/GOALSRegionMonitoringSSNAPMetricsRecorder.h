//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GOALSRegionMonitoringSSNAPMetricsRecorder : NSObject
{
}

+ (id)sharedInstance;
- (void)logMetric:(id)arg1;
- (id)getLoggerWithSource:(id)arg1;
- (void)logCounter:(id)arg1 count:(double)arg2 source:(id)arg3;
- (void)logTimer:(id)arg1 source:(id)arg2 value:(double)arg3;

@end

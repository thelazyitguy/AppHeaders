//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CXIStoreUtils : NSObject
{
}

+ (void)logCartApiMetric:(id)arg1 metricId:(id)arg2;
+ (void)logTapMetricWithStoreConfig:(id)arg1 componentIdentifier:(id)arg2 widgetIdentifier:(id)arg3;
+ (void)logTapMetric:(id)arg1 componentIdentifier:(id)arg2 widgetIdentifier:(id)arg3;
+ (void)navigateToUriAndLogTapMetric:(id)arg1 storeIdentifier:(id)arg2 componentIdentifier:(id)arg3 widgetIdentifier:(id)arg4;

@end


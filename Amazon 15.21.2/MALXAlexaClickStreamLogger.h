//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMIDefaultMetricsFactory, CMIUsageInfo, NSString;

@interface MALXAlexaClickStreamLogger : NSObject
{
    CMIUsageInfo *_usageInfo;
    CMIDefaultMetricsFactory *_metricsFactory;
    NSString *_refMarkerPrefix;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *refMarkerPrefix; // @synthesize refMarkerPrefix=_refMarkerPrefix;
@property(retain, nonatomic) CMIDefaultMetricsFactory *metricsFactory; // @synthesize metricsFactory=_metricsFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic) CMIUsageInfo *usageInfo; // @synthesize usageInfo=_usageInfo;
- (id)clickStreamMetric;
- (void)addCommonLogAttributesToMetric:(id)arg1;
- (void)logMetric:(id)arg1;
- (void)logMetricWithRefmarker:(id)arg1;
- (id)init;

@end


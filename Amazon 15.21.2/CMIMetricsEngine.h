//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMIDeviceUtil, NSMutableDictionary, NSOperationQueue;

@interface CMIMetricsEngine : NSObject
{
    CMIDeviceUtil *_deviceUtil;
    NSOperationQueue *_engineOperationQueue;
    NSMutableDictionary *_metricsPipelines;
}

@property(readonly, nonatomic) NSMutableDictionary *metricsPipelines; // @synthesize metricsPipelines=_metricsPipelines;
@property(readonly, nonatomic) NSOperationQueue *engineOperationQueue; // @synthesize engineOperationQueue=_engineOperationQueue;
@property(readonly, nonatomic) CMIDeviceUtil *deviceUtil; // @synthesize deviceUtil=_deviceUtil;
- (void).cxx_destruct;
- (void)uploadMetrics;
- (void)recordMetricEntry:(id)arg1 with:(int)arg2;
- (id)createBatchTransmitterWithPipelineConfiguration:(id)arg1 metricsTransport:(id)arg2 batchQueue:(id)arg3 operationQueue:(id)arg4;
- (id)createBatchQueueWithPipelineConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

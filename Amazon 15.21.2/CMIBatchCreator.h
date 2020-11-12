//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMIDeviceUtil, CMIMetricBatch, CMIPipelineConfiguration, NSOperationQueue;
@protocol CMIBatchQueue, OS_dispatch_source;

@interface CMIBatchCreator : NSObject
{
    int _batchType;
    CMIMetricBatch *_runningBatch;
    CMIPipelineConfiguration *_pipelineConfiguration;
    CMIDeviceUtil *_deviceUtil;
    id <CMIBatchQueue> _batchQueue;
    long long _lastEnqueueTimeMillis;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_batchClosingTimer;
}

@property(readonly, nonatomic) int batchType; // @synthesize batchType=_batchType;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *batchClosingTimer; // @synthesize batchClosingTimer=_batchClosingTimer;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) long long lastEnqueueTimeMillis; // @synthesize lastEnqueueTimeMillis=_lastEnqueueTimeMillis;
@property(readonly, nonatomic) id <CMIBatchQueue> batchQueue; // @synthesize batchQueue=_batchQueue;
@property(readonly, nonatomic) CMIDeviceUtil *deviceUtil; // @synthesize deviceUtil=_deviceUtil;
@property(readonly, nonatomic) CMIPipelineConfiguration *pipelineConfiguration; // @synthesize pipelineConfiguration=_pipelineConfiguration;
@property(retain, nonatomic) CMIMetricBatch *runningBatch; // @synthesize runningBatch=_runningBatch;
- (void).cxx_destruct;
- (void)enqueueRunningBatch;
- (_Bool)maxBatchSizeReached;
- (_Bool)maxBatchCountReached;
- (void)addMetricEntry:(id)arg1;
- (_Bool)maxBatchOpenTimeReached;
- (void)checkBatchOpenTime;
- (void)dealloc;
- (id)initWithPipelineConfiguration:(id)arg1 batchType:(int)arg2 deviceUtil:(id)arg3 batchQueue:(id)arg4 operationQueue:(id)arg5;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

#import <T1Twitter/TFNTwitterMediaAssetPackedSegmentedUploadAppendCommandOperationDelegate-Protocol.h>
#import <T1Twitter/TFSOperationDependencyResult-Protocol.h>

@class NSData, NSError, NSHashTable, NSObject, NSOperation, NSOperationQueue, NSString, TFNTwitterMediaAssetPackedSegmentedUploadContext;
@protocol OS_dispatch_queue, TFNTwitterMediaAssetPackedSegmentedUploadAppendOperationDelegate;

@interface TFNTwitterMediaAssetPackedSegmentedUploadAppendOperation : TFSDependentConcurrentOperation <TFNTwitterMediaAssetPackedSegmentedUploadAppendCommandOperationDelegate, TFSOperationDependencyResult>
{
    float _progress;
    id <TFNTwitterMediaAssetPackedSegmentedUploadAppendOperationDelegate> _delegate;
    NSString *_mediaID;
    NSData *_data;
    unsigned long long _resultNumberOfSegmentsAppended;
    unsigned long long _resultTotalRequestRetryCount;
    TFNTwitterMediaAssetPackedSegmentedUploadContext *_context;
    NSObject<OS_dispatch_queue> *_taskQueue;
    NSOperationQueue *_operationQueue;
    unsigned long long _resultState;
    NSError *_resultError;
    NSHashTable *_weakOperationsToCancel;
    NSOperation *_completeCommandOperationsOperation;
    unsigned long long _nextSegmentIndex;
    unsigned long long _nextSegmentPosition;
    unsigned long long _completedDataLength;
}

- (void).cxx_destruct;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long completedDataLength; // @synthesize completedDataLength=_completedDataLength;
@property(nonatomic) unsigned long long nextSegmentPosition; // @synthesize nextSegmentPosition=_nextSegmentPosition;
@property(nonatomic) unsigned long long nextSegmentIndex; // @synthesize nextSegmentIndex=_nextSegmentIndex;
@property(readonly, nonatomic) NSOperation *completeCommandOperationsOperation; // @synthesize completeCommandOperationsOperation=_completeCommandOperationsOperation;
@property(readonly, nonatomic) NSHashTable *weakOperationsToCancel; // @synthesize weakOperationsToCancel=_weakOperationsToCancel;
@property(retain) NSError *resultError; // @synthesize resultError=_resultError;
@property unsigned long long resultState; // @synthesize resultState=_resultState;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) TFNTwitterMediaAssetPackedSegmentedUploadContext *context; // @synthesize context=_context;
@property unsigned long long resultTotalRequestRetryCount; // @synthesize resultTotalRequestRetryCount=_resultTotalRequestRetryCount;
@property unsigned long long resultNumberOfSegmentsAppended; // @synthesize resultNumberOfSegmentsAppended=_resultNumberOfSegmentsAppended;
@property(retain) NSData *data; // @synthesize data=_data;
@property(copy) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(nonatomic) __weak id <TFNTwitterMediaAssetPackedSegmentedUploadAppendOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_tfn_task_commandOperationDidCompleteWithSegmentRange:(struct _NSRange)arg1;
- (void)_tfn_task_commandOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)packedSegmentedUploadAppendCommandOperation:(id)arg1 didAppendSegmentedDataWithError:(id)arg2;
- (void)packedSegmentedUploadAppendCommandOperationDidSendSegmentedData:(id)arg1;
- (void)_tfn_task_commandOperationDidProgressSegmentedDataRange:(struct _NSRange)arg1;
- (void)packedSegmentedUploadAppendCommandOperation:(id)arg1 didProgressSegmentedData:(float)arg2;
- (id)packedSegmentedUploadAppendCommandOperationDelegateQueue:(id)arg1;
- (void)_tfn_task_cancel;
- (void)cancel;
- (void)_tfn_task_completeCommandOperations;
- (id)_tfn_background_createCompleteCommandOperationsOperation;
- (void)_tfn_task_enqueueCompleteCommandOperationsOperation;
- (void)_tfn_task_enqueueCommandOperationWithSegmentIndex:(unsigned long long)arg1 segmentRange:(struct _NSRange)arg2 retryCount:(unsigned long long)arg3;
- (void)_tfn_task_retryCommandOperation:(id)arg1;
- (void)_tfn_task_enqueueCommandOperation;
- (void)run;
- (id)initWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

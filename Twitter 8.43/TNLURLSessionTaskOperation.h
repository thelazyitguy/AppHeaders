//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/TNLSafeOperation.h>

#import <TwitterNetworkLayer/NSURLSessionDataDelegate-Protocol.h>
#import <TwitterNetworkLayer/NSURLSessionDownloadDelegate-Protocol.h>
#import <TwitterNetworkLayer/TNLContentDecoderClient-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSHTTPURLResponse, NSMutableData, NSObject, NSString, NSURLRequest, NSURLSession, NSURLSessionDataTask, NSURLSessionDownloadTask, NSURLSessionTask, NSURLSessionTaskMetrics, NSURLSessionUploadTask, TNLRequestConfiguration, TNLRequestOperation, TNLRequestOperationQueue, TNLResponse, TNLResponseInfo, TNLTemporaryFile;
@protocol OS_dispatch_source, TNLContentDecoder, TNLContentDecoderContext, TNLRequest, TNLURLSessionManager, TNLURLSessionTaskOperationDelegate;

@interface TNLURLSessionTaskOperation : TNLSafeOperation <TNLContentDecoderClient, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>
{
    id <TNLURLSessionManager> _sessionManager;
    NSURLSession *_URLSession;
    NSURLSessionDataTask *_dataTask;
    NSURLSessionDownloadTask *_downloadTask;
    NSURLSessionUploadTask *_uploadTask;
    NSURLRequest *_taskRequest;
    NSData *_uploadData;
    NSString *_uploadFilePath;
    NSData *_resumeData;
    id <TNLRequest> _hydratedRequest;
    Class _responseClass;
    NSDate *_startDate;
    unsigned long long _startMachTime;
    NSDate *_endDate;
    unsigned long long _endMachTime;
    NSDate *_completeDate;
    unsigned long long _completeMachTime;
    long long _taskResumePriority;
    NSDate *_taskResumeDate;
    NSDate *_responseBodyStartDate;
    NSDate *_responseBodyEndDate;
    NSDate *_completionCallbackDate;
    NSDate *_taskMetricsCallbackDate;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSError *_cachedFailure;
    NSHTTPURLResponse *_cancelledRedirectResponse;
    NSURLSession *_cachedCompletionSession;
    NSURLSessionTask *_cachedCompletionTask;
    NSError *_cachedCompletionError;
    void *_hashContextRef;
    NSData *_hashData;
    long long _hashAlgo;
    NSDictionary *_authChallengeCancelledUserInfo;
    NSMutableData *_storedData;
    TNLTemporaryFile *_tempFile;
    long long _layer8BodyBytesReceived;
    double _responseDecodeLatency;
    NSURLSessionTaskMetrics *_taskMetrics;
    // Error parsing type: Aq, name: _internalState
    struct {
        unsigned int didCancel:1;
        unsigned int didStart:1;
        unsigned int didIncrementExecutionCount:1;
        unsigned int shouldComputeHash:1;
        unsigned int isComputingHash:1;
        unsigned int isFinalizing:1;
        unsigned int useIdleTimeout:1;
        unsigned int useIdleTimeoutForInitialConnection:1;
        unsigned int shouldCaptureResponse:1;
        unsigned int encounteredCompletionBeforeTaskMetrics:1;
        unsigned int shouldDeleteUploadFile:1;
    } _flags;
    _Bool _isObservingURLSessionTask;
    TNLRequestOperationQueue *_requestOperationQueue;
    long long _executionMode;
    long long _requestPriority;
    TNLRequestConfiguration *_requestConfiguration;
    TNLResponseInfo *_responseInfo;
    TNLResponse *_finalResponse;
    NSURLRequest *_hydratedURLRequest;
    TNLRequestOperation<TNLURLSessionTaskOperationDelegate> *_requestOperation;
    NSError *_error;
    NSDictionary *_additionalDecoders;
    id <TNLContentDecoder> _contentDecoder;
    id <TNLContentDecoderContext> _contentDecoderContext;
    NSMutableData *_contentDecoderRecentData;
    id <TNLRequest> _originalRequest;
}

- (void).cxx_destruct;
- (_Bool)tnl_dataWasDecoded:(id)arg1 error:(out id *)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)start;
- (_Bool)isExecuting;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (void)dealloc;
- (id)init;
@property(readonly, copy) NSString *description;
- (id)network_taskMetrics;
- (id)network_metaDataWithLowerCaseHeaderFields:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLSession.h>

#import <NFURLSession/NSURLSessionDataDelegate-Protocol.h>
#import <NFURLSession/NSURLSessionDelegate-Protocol.h>
#import <NFURLSession/NSURLSessionDownloadDelegate-Protocol.h>
#import <NFURLSession/NSURLSessionStreamDelegate-Protocol.h>
#import <NFURLSession/NSURLSessionTaskDelegate-Protocol.h>

@class NSMutableDictionary, NSObject, NSOperationQueue, NSString, NSURLSessionConfiguration;
@protocol NFAddressTranslationProvider, NFURequestPreprocessor, NSURLSessionDelegate, OS_dispatch_queue;

@interface NFURLSession : NSURLSession <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSURLSessionStreamDelegate>
{
    _Bool _addressTranslationEnabled;
    _Bool _invalidationRequested;
    _Bool _sharedSession;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSURLSession *_urlSession;
    id <NSURLSessionDelegate> _urlSessionDelegate;
    id <NSURLSessionDelegate> _urlSessionDelegateStrong;
    NSMutableDictionary *_sessionTasks;
    id <NFAddressTranslationProvider> _addressTranslationProvider;
    id <NFURequestPreprocessor> _requestPreprocessor;
    NSOperationQueue *_delegateOperationQueue;
    NSURLSessionConfiguration *_cachedConfiguration;
}

+ (void)processChallenge:(id)arg1 withDispositionHandler:(CDUnknownBlockType)arg2;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (id)sessionWithConfiguration:(id)arg1;
+ (_Bool)isCurlLoggingEnabled;
+ (_Bool)isDebugLoggingEnabled;
+ (id)defaultRequestProcessor;
+ (id)defaultAddressTranslationProvider;
+ (id)pinnedCertificateEvaluator;
+ (id)trustStore;
+ (void)setPinnedCertificateEvaluator:(id)arg1;
+ (void)setTrustStore:(id)arg1;
+ (void)setPinnedCertificateData:(id)arg1;
+ (void)setDefaultRequestPreprocessor:(id)arg1;
+ (void)setDefaultAddressTranslationProvider:(id)arg1;
+ (id)sharedSession;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool sharedSession; // @synthesize sharedSession=_sharedSession;
@property(nonatomic) _Bool invalidationRequested; // @synthesize invalidationRequested=_invalidationRequested;
@property(nonatomic) _Bool addressTranslationEnabled; // @synthesize addressTranslationEnabled=_addressTranslationEnabled;
@property(retain, nonatomic) NSURLSessionConfiguration *cachedConfiguration; // @synthesize cachedConfiguration=_cachedConfiguration;
@property(retain, nonatomic) NSOperationQueue *delegateOperationQueue; // @synthesize delegateOperationQueue=_delegateOperationQueue;
@property(retain, nonatomic) id <NFURequestPreprocessor> requestPreprocessor; // @synthesize requestPreprocessor=_requestPreprocessor;
@property(retain, nonatomic) id <NFAddressTranslationProvider> addressTranslationProvider; // @synthesize addressTranslationProvider=_addressTranslationProvider;
@property(retain, nonatomic) NSMutableDictionary *sessionTasks; // @synthesize sessionTasks=_sessionTasks;
@property(retain, nonatomic) id <NSURLSessionDelegate> urlSessionDelegateStrong; // @synthesize urlSessionDelegateStrong=_urlSessionDelegateStrong;
@property(nonatomic) __weak id <NSURLSessionDelegate> urlSessionDelegate; // @synthesize urlSessionDelegate=_urlSessionDelegate;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(readonly, copy) NSString *description;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 writeClosedForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 readClosedForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeStreamTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)streamTaskWithNetService:(id)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleBlockBasedCompletionOfDownloadTask:(id)arg1 downloadedFileLocation:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleBlockBasedCompletionOfUploadTask:(id)arg1 fromData:(id)arg2 responseData:(id)arg3 response:(id)arg4 error:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleBlockBasedCompletionOfUploadTask:(id)arg1 fromFile:(id)arg2 withData:(id)arg3 response:(id)arg4 error:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleBlockBasedCompletionOfDataTask:(id)arg1 data:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)dataTaskWithRequest:(id)arg1;
- (void)scheduleRetryBlock:(CDUnknownBlockType)arg1 afterDelay:(long long)arg2;
- (_Bool)_needsRetryForResponse:(id)arg1 task:(id)arg2 error:(id)arg3;
- (_Bool)needsRetryForResponse:(id)arg1 task:(id)arg2 error:(id)arg3;
- (unsigned long long)_retryDelayInMSForTask:(id)arg1;
- (unsigned long long)retryDelayInMSForTask:(id)arg1;
- (id)_downloadTaskForIdentifier:(unsigned long long)arg1;
- (id)downloadTaskForIdentifier:(unsigned long long)arg1;
- (id)_dataTaskForIdentifier:(unsigned long long)arg1;
- (id)dataTaskForIdentifier:(unsigned long long)arg1;
- (id)_uploadTaskForIdentifier:(unsigned long long)arg1;
- (id)uploadTaskForIdentifier:(unsigned long long)arg1;
- (id)_taskForIdentifier:(unsigned long long)arg1;
- (void)_removeNFURLSessionTaskByIdentifier:(unsigned long long)arg1;
- (void)removeNFURLSessionTaskByIdentifier:(unsigned long long)arg1;
- (void)_addNFURLSessionTask:(id)arg1;
- (void)addNFURLSessionTask:(id)arg1;
- (id)_translateURL:(id)arg1 withPreviousTryHistory:(id)arg2;
- (id)translateRequest:(id)arg1 withPreviousTryHistory:(id)arg2;
- (id)_preprocessRequest:(id)arg1;
- (_Bool)isConfiguredToRetryRequests;
- (void)getAllTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateAndCancel;
- (void)finishTasksAndInvalidate;
@property(copy) NSString *sessionDescription;
@property(readonly, copy) NSURLSessionConfiguration *configuration;
@property(readonly, retain) id <NSURLSessionDelegate> delegate;
@property(readonly, retain) NSOperationQueue *delegateQueue;
- (void)disableAddressTranslation;
- (id)initWithConfiguration:(id)arg1 delegateQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


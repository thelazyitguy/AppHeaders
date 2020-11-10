//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/AVAssetDownloadDelegate-Protocol.h>
#import <Nbp/DownloadSessionProtocol-Protocol.h>
#import <Nbp/NSURLSessionDownloadDelegate-Protocol.h>

@class AVAssetDownloadURLSession, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSURLSession;
@protocol DownloadSessionDelegate, OS_dispatch_queue;

@interface DefaultDownloadSession : NSObject <AVAssetDownloadDelegate, NSURLSessionDownloadDelegate, DownloadSessionProtocol>
{
    CDUnknownBlockType _backgroundDownloadCompletionBlock;
    id <DownloadSessionDelegate> _delegate;
    NSMapTable *_delegatesToMyTasks;
    NSMapTable *_nsTasksToMyTasks;
    NSObject<OS_dispatch_queue> *_sessionDispatchQueue;
    NSOperationQueue *_sessionOperationQueue;
    AVAssetDownloadURLSession *_wifiOnlyDownloadSession;
    AVAssetDownloadURLSession *_cellularAllowedDownloadSession;
    AVAssetDownloadURLSession *_smartDownloadSession;
    NSURLSession *_extraDownloadSession;
    NSMutableArray *_queuedDownloadTasks;
    NSMutableSet *_pendingDownloadTasks;
    long long _sessionTaskRecoveryCount;
    NSMutableDictionary *_completionBlocksBySessionIdentifier;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *completionBlocksBySessionIdentifier; // @synthesize completionBlocksBySessionIdentifier=_completionBlocksBySessionIdentifier;
@property long long sessionTaskRecoveryCount; // @synthesize sessionTaskRecoveryCount=_sessionTaskRecoveryCount;
@property(retain) NSMutableSet *pendingDownloadTasks; // @synthesize pendingDownloadTasks=_pendingDownloadTasks;
@property(retain) NSMutableArray *queuedDownloadTasks; // @synthesize queuedDownloadTasks=_queuedDownloadTasks;
@property(retain) NSURLSession *extraDownloadSession; // @synthesize extraDownloadSession=_extraDownloadSession;
@property(retain) AVAssetDownloadURLSession *smartDownloadSession; // @synthesize smartDownloadSession=_smartDownloadSession;
@property(retain) AVAssetDownloadURLSession *cellularAllowedDownloadSession; // @synthesize cellularAllowedDownloadSession=_cellularAllowedDownloadSession;
@property(retain) AVAssetDownloadURLSession *wifiOnlyDownloadSession; // @synthesize wifiOnlyDownloadSession=_wifiOnlyDownloadSession;
@property(retain) NSOperationQueue *sessionOperationQueue; // @synthesize sessionOperationQueue=_sessionOperationQueue;
@property(retain) NSObject<OS_dispatch_queue> *sessionDispatchQueue; // @synthesize sessionDispatchQueue=_sessionDispatchQueue;
@property(retain) NSMapTable *nsTasksToMyTasks; // @synthesize nsTasksToMyTasks=_nsTasksToMyTasks;
@property(retain) NSMapTable *delegatesToMyTasks; // @synthesize delegatesToMyTasks=_delegatesToMyTasks;
@property __weak id <DownloadSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) CDUnknownBlockType backgroundDownloadCompletionBlock; // @synthesize backgroundDownloadCompletionBlock=_backgroundDownloadCompletionBlock;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_5c5366e1)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_5c5366e1)arg5 forMediaSelection:(id)arg6;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)_fireCompletionBlocksForIdentifierPrefix:(id)arg1;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)setBackgroundDownloadCompletion:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;
- (_Bool)hasDownloadSessionIdentifier:(id)arg1;
- (CDUnknownBlockType)backgroundDownloadCompletionForIdentifier:(id)arg1;
- (_Bool)isDownloadRunningForDelegate:(id)arg1;
- (void)resumeDownloadForDelegate:(id)arg1;
- (void)suspendDownloadForDelegate:(id)arg1;
- (void)_resumeDownloadForDelegate:(id)arg1;
- (void)_suspendDownloadForDelegate:(id)arg1;
- (void)cancelTaskForDelegate:(id)arg1;
- (void)_cancelTaskForDelegate:(id)arg1;
- (void)startDownloadForDelegate:(id)arg1;
- (void)_startDownloadForDelegate:(id)arg1;
- (void)_startDownloadWithTask:(id)arg1 asset:(id)arg2 error:(id)arg3;
- (id)_dlTaskForNSTask:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)_setupDownloadSessions;
- (void)_recoverExtantTasks;
- (void)_recoverDownloadTasks:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

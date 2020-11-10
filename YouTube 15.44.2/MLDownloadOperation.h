//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <Module_Framework/NSURLConnectionDelegate-Protocol.h>

@class GIMMe, HAMRange, MLLocalSegment, MLRemoteSegment, MLStreamStore, NSDate, NSDictionary, NSOperationQueue, NSString, NSURLConnection, YTEncryptedFileWriter;
@protocol MLDownloadOperationDelegate, MLDownloadSchedulerDelegate;

@interface MLDownloadOperation : NSOperation <NSURLConnectionDelegate>
{
    MLStreamStore *_streamStore;
    NSURLConnection *_connection;
    YTEncryptedFileWriter *_segmentWriter;
    NSOperationQueue *_connectionQueue;
    HAMRange *_requestedRange;
    long long _bytesReceived;
    NSDate *_lastDataReceivedDate;
    _Bool _executing;
    _Bool _finished;
    _Bool _cancelledBeforeFinishing;
    GIMMe *_gimme;
    MLRemoteSegment *_remoteSegment;
    MLLocalSegment *_localSegment;
    NSDictionary *_userInfo;
    id <MLDownloadOperationDelegate> _delegate;
    id <MLDownloadSchedulerDelegate> _schedulerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MLDownloadSchedulerDelegate> schedulerDelegate; // @synthesize schedulerDelegate=_schedulerDelegate;
@property(nonatomic) __weak id <MLDownloadOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) MLLocalSegment *localSegment; // @synthesize localSegment=_localSegment;
@property(readonly, nonatomic) MLRemoteSegment *remoteSegment; // @synthesize remoteSegment=_remoteSegment;
@property(readonly, nonatomic, getter=wasCancelledBeforeFinishing) _Bool cancelledBeforeFinishing; // @synthesize cancelledBeforeFinishing=_cancelledBeforeFinishing;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(readonly, copy) NSString *description;
- (void)setStateFinished;
- (void)beginDownload;
- (void)executeBlockOnConnectionQueue:(CDUnknownBlockType)arg1;
- (void)failWithErrorCode:(long long)arg1 details:(id)arg2 underlyingError:(id)arg3;
- (void)failWithErrorCode:(long long)arg1 details:(id)arg2;
- (void)openConnectionWithRequest:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (_Bool)isConcurrent;
- (void)cancel;
- (void)start;
- (id)copy;
- (id)initWithRemoteSegment:(id)arg1 localSegment:(id)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


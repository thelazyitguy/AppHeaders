//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAggregateAssetDownloadTask, DefaultDownloadSession, NSArray;
@protocol DownloadTaskDelegate;

@interface DownloadTask : NSObject
{
    _Bool _canceled;
    DefaultDownloadSession *_session;
    id <DownloadTaskDelegate> _delegate;
    AVAggregateAssetDownloadTask *_assetTask;
    NSArray *_extraTasks;
}

- (void).cxx_destruct;
@property _Bool canceled; // @synthesize canceled=_canceled;
@property(retain) NSArray *extraTasks; // @synthesize extraTasks=_extraTasks;
@property(retain) AVAggregateAssetDownloadTask *assetTask; // @synthesize assetTask=_assetTask;
@property(retain) id <DownloadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) DefaultDownloadSession *session; // @synthesize session=_session;
- (void)nsTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)assetTask:(id)arg1 didLoadTimeRange:(CDStruct_5c5366e1)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(CDStruct_5c5366e1)arg4 forMediaSelection:(id)arg5;
- (void)assetTask:(id)arg1 didCompleteForMediaSelection:(id)arg2;
- (void)assetTask:(id)arg1 willDownloadToURL:(id)arg2;
- (void)nsTask:(id)arg1 didDownloadToURL:(id)arg2;
- (void)nsTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)_reportUpdatedDownloadPercentage:(id)arg1;
- (void)startAllNSTasks;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;

@end


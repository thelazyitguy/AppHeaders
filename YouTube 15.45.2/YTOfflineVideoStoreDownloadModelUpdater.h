//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTOfflineVideoDownloadDataModelUpdater-Protocol.h>

@class GIMMe, NSString;

@interface YTOfflineVideoStoreDownloadModelUpdater : NSObject <YTOfflineVideoDownloadDataModelUpdater>
{
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)purgeStreamsForVideoWithID:(id)arg1;
- (void)notifyDownloadDidCancelWithVideoID:(id)arg1;
- (void)changeVideoStatusAndNotifyDidDownloadCancelledForVideoID:(id)arg1 videoStatus:(int)arg2;
- (void)offlineVideoExistsForVideoID:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)attemptToMarkVideoIDForRetry:(id)arg1 retryScheduledCompletionBlock:(CDUnknownBlockType)arg2;
- (void)updateBackgroundTaskDidRestoreWithVideoID:(id)arg1;
- (void)updateDownloadDidFailPermanentlyWithVideoID:(id)arg1 error:(id)arg2;
- (void)updateDownloadDidFailRetryablyWithVideoID:(id)arg1;
- (void)updateDownloadDidCancelWithVideoID:(id)arg1 cancelReason:(long long)arg2;
- (void)updateDownloadDidCompleteWithVideoID:(id)arg1 bytesDownloaded:(unsigned long long)arg2;
- (void)updateDownloadDidPauseWithVideoID:(id)arg1;
- (void)updateDownloadDidProgressWithVideoID:(id)arg1 bytesDownloaded:(unsigned long long)arg2 estimatedTotalBytes:(unsigned long long)arg3;
- (void)updateDownloadDidStartWithVideoID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


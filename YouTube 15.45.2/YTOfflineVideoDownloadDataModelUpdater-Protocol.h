//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSError, NSString;

@protocol YTOfflineVideoDownloadDataModelUpdater <NSObject>
- (void)attemptToMarkVideoIDForRetry:(NSString *)arg1 retryScheduledCompletionBlock:(void (^)(_Bool))arg2;
- (void)updateBackgroundTaskDidRestoreWithVideoID:(NSString *)arg1;
- (void)updateDownloadDidFailPermanentlyWithVideoID:(NSString *)arg1 error:(NSError *)arg2;
- (void)updateDownloadDidFailRetryablyWithVideoID:(NSString *)arg1;
- (void)updateDownloadDidCancelWithVideoID:(NSString *)arg1 cancelReason:(long long)arg2;
- (void)updateDownloadDidCompleteWithVideoID:(NSString *)arg1 bytesDownloaded:(unsigned long long)arg2;
- (void)updateDownloadDidPauseWithVideoID:(NSString *)arg1;
- (void)updateDownloadDidProgressWithVideoID:(NSString *)arg1 bytesDownloaded:(unsigned long long)arg2 estimatedTotalBytes:(unsigned long long)arg3;
- (void)updateDownloadDidStartWithVideoID:(NSString *)arg1;
@end

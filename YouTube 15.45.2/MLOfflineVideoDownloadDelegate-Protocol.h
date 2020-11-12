//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class MLVideoDownloadTask, NSError, NSString;
@protocol MLOfflineVideoDownloadController;

@protocol MLOfflineVideoDownloadDelegate <NSObject>
- (void)offlineDownloadController:(id <MLOfflineVideoDownloadController>)arg1 didFinishBackgroundTaskRestorationWithTask:(MLVideoDownloadTask *)arg2;
- (void)offlineDownloadDidEnterBackgroundWithVideoID:(NSString *)arg1;
- (void)offlineDownloadBackgroundTaskDidExpire;
- (void)offlineDownloadDidFailWithVideoID:(NSString *)arg1 error:(NSError *)arg2;
- (void)offlineDownloadDidCancelWithVideoID:(NSString *)arg1;
- (void)offlineDownloadDidPauseWithVideoID:(NSString *)arg1;
- (void)offlineDownloadDidCompleteWithVideoID:(NSString *)arg1 totalBytes:(unsigned long long)arg2;
- (void)offlineDownloadDidProgressWithVideoID:(NSString *)arg1 bytesDownloaded:(unsigned long long)arg2 estimatedTotalBytes:(unsigned long long)arg3;
- (void)offlineDownloadDidStartWithVideoID:(NSString *)arg1;
@end

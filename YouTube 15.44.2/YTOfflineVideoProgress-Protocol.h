//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSError, NSString;

@protocol YTOfflineVideoProgress <NSObject>

@optional
- (void)downloadDidWaitForStorageWithVideoID:(NSString *)arg1;
- (void)downloadDidWaitForConnectionWithVideoID:(NSString *)arg1;
- (void)downloadDidWaitForWiFiWithVideoID:(NSString *)arg1;
- (void)downloadDidPauseWithVideoID:(NSString *)arg1;
- (void)downloadDidFailWithVideoID:(NSString *)arg1 error:(NSError *)arg2;
- (void)downloadDidCompleteWithVideoID:(NSString *)arg1 pinTypes:(int)arg2;
- (void)downloadDidCancelWithVideoID:(NSString *)arg1;
- (void)downloadDidProgressWithVideoID:(NSString *)arg1 percentageDownloaded:(double)arg2;
- (void)downloadDidStartWithVideoID:(NSString *)arg1;
@end


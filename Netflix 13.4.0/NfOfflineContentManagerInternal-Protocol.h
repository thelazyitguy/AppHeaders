//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NfOfflineContentManager-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURLSessionTask, WatchableInfo;
@protocol NfOfflineDownloader;

@protocol NfOfflineContentManagerInternal <NfOfflineContentManager>
- (_Bool)isSecureInvalidationReady;
- (_Bool)supportsAVAggregate;
- (NSArray *)webVTTPlist;
- (void)syncDeactivateLinksResponseDirect:(NSDictionary *)arg1 didIncludeSPC:(_Bool)arg2;
- (NSArray *)deactivateLinksV2;
- (NSArray *)deactivateLinks;
- (_Bool)queueDeactivateLinkForWatchable:(WatchableInfo *)arg1;
- (WatchableInfo *)getWatchableInfoForLinksKey:(NSString *)arg1;
- (id <NfOfflineDownloader>)createDownloaderWithWatchableInfo:(WatchableInfo *)arg1 andTask:(NSURLSessionTask *)arg2;
@end

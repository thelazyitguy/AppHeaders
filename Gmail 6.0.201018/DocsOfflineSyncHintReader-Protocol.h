//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

@protocol DocsOfflineSyncHintReader
- (void)getSyncHintInformationForFileID:(NSString *)arg1 userID:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSDate *, NSError *))arg3;
- (NSArray *)userIDsWithSyncHints;
- (void)getSyncHintsForUserID:(NSString *)arg1 mimeTypes:(NSSet *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)setUpAccountListMonitoring;
@end

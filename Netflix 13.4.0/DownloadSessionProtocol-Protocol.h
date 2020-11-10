//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@class NSString;
@protocol DownloadTaskDelegate;

@protocol DownloadSessionProtocol <NSObject>
- (void)setBackgroundDownloadCompletion:(void (^)(void))arg1 forIdentifier:(NSString *)arg2;
- (_Bool)hasDownloadSessionIdentifier:(NSString *)arg1;
- (void (^)(void))backgroundDownloadCompletionForIdentifier:(NSString *)arg1;
- (_Bool)isDownloadRunningForDelegate:(id <DownloadTaskDelegate>)arg1;
- (void)resumeDownloadForDelegate:(id <DownloadTaskDelegate>)arg1;
- (void)suspendDownloadForDelegate:(id <DownloadTaskDelegate>)arg1;
- (void)cancelTaskForDelegate:(id <DownloadTaskDelegate>)arg1;
- (void)startDownloadForDelegate:(id <DownloadTaskDelegate>)arg1;
@end

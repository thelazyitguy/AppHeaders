//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterCrashlytics/GDTCORUploader-Protocol.h>
#import <TwitterCrashlytics/NSURLSessionDelegate-Protocol.h>

@class GDTCORClock, NSString, NSURL, NSURLSession, NSURLSessionUploadTask;
@protocol OS_dispatch_queue;

@interface GDTCCTUploader : NSObject <NSURLSessionDelegate, GDTCORUploader>
{
    _Bool _isCurrentlyUploading;
    NSObject<OS_dispatch_queue> *_uploaderQueue;
    NSURLSession *_uploaderSession;
    NSURLSessionUploadTask *_currentTask;
    GDTCORClock *_CCTNextUploadTime;
    GDTCORClock *_FLLNextUploadTime;
    NSURL *_testServerURL;
}

+ (id)sharedInstance;
+ (void)load;
@property _Bool isCurrentlyUploading; // @synthesize isCurrentlyUploading=_isCurrentlyUploading;
@property(retain, nonatomic) NSURL *testServerURL; // @synthesize testServerURL=_testServerURL;
@property(retain, nonatomic) GDTCORClock *FLLNextUploadTime; // @synthesize FLLNextUploadTime=_FLLNextUploadTime;
@property(retain, nonatomic) GDTCORClock *CCTNextUploadTime; // @synthesize CCTNextUploadTime=_CCTNextUploadTime;
@property(retain, nonatomic) NSURLSessionUploadTask *currentTask; // @synthesize currentTask=_currentTask;
@property(readonly, nonatomic) NSURLSession *uploaderSession; // @synthesize uploaderSession=_uploaderSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *uploaderQueue; // @synthesize uploaderQueue=_uploaderQueue;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)appWillTerminate:(id)arg1;
- (void)appWillForeground:(id)arg1;
- (id)eventSelectorTarget:(long long)arg1 withConditions:(long long)arg2;
- (id)constructRequestForTarget:(long long)arg1 data:(id)arg2;
- (id)constructRequestProtoWithEvents:(id)arg1;
- (_Bool)readyToUploadTarget:(long long)arg1 conditions:(long long)arg2;
- (void)removeBatchesForTarget:(long long)arg1 storage:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)batchToUploadForTarget:(long long)arg1 storage:(id)arg2 conditions:(long long)arg3 hasEvents:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)batchToUploadForTarget:(long long)arg1 storage:(id)arg2 conditions:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleURLResponse:(id)arg1 data:(id)arg2 error:(id)arg3 target:(long long)arg4 storage:(id)arg5 batchID:(id)arg6;
- (void)sendURLRequestForBatchWithID:(id)arg1 events:(id)arg2 target:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)uploadBatchWithID:(id)arg1 events:(id)arg2 target:(long long)arg3 storage:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)uploadTarget:(long long)arg1 withConditions:(long long)arg2;
- (id)FLLAndCSHandINTAPIKey;
- (id)serverURLForTarget:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


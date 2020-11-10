//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>
#import <Module_Framework/YTUploadRequirementsObserver-Protocol.h>
#import <Module_Framework/YTUploadTranscodeTokenObserver-Protocol.h>
#import <Module_Framework/YTUploadTranscoderDelegate-Protocol.h>

@class GIMMe, NSMutableDictionary, NSMutableOrderedSet, NSString, YTUploadTranscodeRequestContainer, YTUploadTranscoder;
@protocol OS_dispatch_queue;

@interface YTUploadTranscodeQueue : NSObject <YTUploadTranscoderDelegate, YTUploadTranscodeTokenObserver, YTSystemNotificationsObserver, YTUploadRequirementsObserver>
{
    NSMutableOrderedSet *_enqueuedFrontendIDs;
    NSMutableDictionary *_requests;
    _Bool _inBackground;
    _Bool _paused;
    GIMMe *_gimme;
    NSObject<OS_dispatch_queue> *_syncQueue;
    YTUploadTranscoder *_transcoder;
    YTUploadTranscodeRequestContainer *_activeRequest;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(retain, nonatomic) YTUploadTranscodeRequestContainer *activeRequest; // @synthesize activeRequest=_activeRequest;
@property(retain, nonatomic) YTUploadTranscoder *transcoder; // @synthesize transcoder=_transcoder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)transcodeRequestFinished:(id)arg1 enqueueAgain:(_Bool)arg2;
- (_Bool)finishTranscodeRequestWithFrontendID:(id)arg1 error:(id)arg2 skippable:(_Bool)arg3;
- (void)startTranscodeRequest:(id)arg1 frontendID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startNextTranscodeIfNeeded;
- (id)dequeueRequestFromQueue:(id)arg1;
- (id)dequeueNextRequest;
- (void)enqueueRequest:(id)arg1;
- (void)cancelTranscodeForFrontendID:(id)arg1;
- (void)pause;
- (void)resume;
- (void)requirementsDidBecomeUnsatisfied:(long long)arg1;
- (void)requirementsDidBecomeSatisfied;
@property(readonly, nonatomic) long long requirements;
@property(readonly, nonatomic) NSString *frontendID;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)didProgressTranscodeWithFrontendID:(id)arg1 progress:(float)arg2;
- (_Bool)hasSpaceToTranscodeAssetWithSize:(unsigned long long)arg1;
- (void)tokenWillDeallocWithFrontendID:(id)arg1;
- (void)tokenDidInvalidate:(id)arg1;
- (id)addTranscodeWithFrontendID:(id)arg1 request:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


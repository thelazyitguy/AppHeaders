//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTUploadProgressObserver-Protocol.h>

@class GIMMe, NSString, YTUploadStatusContainer, YTUploadTaskStore, YTUploadTypeCache;
@protocol OS_dispatch_source, YTInMemoryEntityStore;

@interface YTUploadStatusEntityRecorder : NSObject <YTUploadProgressObserver>
{
    YTUploadTypeCache *_typeCache;
    id <YTInMemoryEntityStore> _entityStore;
    YTUploadTaskStore *_taskStore;
    GIMMe *_gimme;
    YTUploadStatusContainer *_container;
    NSObject<OS_dispatch_source> *_progressUpdatingSource;
}

+ (id)entityKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *progressUpdatingSource; // @synthesize progressUpdatingSource=_progressUpdatingSource;
@property(retain, nonatomic) YTUploadStatusContainer *container; // @synthesize container=_container;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (_Bool)updateUploadProgressWithTasks:(id)arg1;
- (void)preloadStatusFromUploadStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateTotals;
- (void)uploadDidUpdateProgress;
- (void)didProgressProcessingForFrontendUploadID:(id)arg1 renderer:(id)arg2;
- (void)didProgressTransferForFrontendUploadID:(id)arg1 progress:(id)arg2;
- (void)didProgressTranscodeForFrontendUploadID:(id)arg1 progress:(float)arg2;
- (void)uploadStatusDidChangeWithFrontendUploadID:(id)arg1 state:(long long)arg2;
- (void)stopRecording;
- (void)startRecording;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


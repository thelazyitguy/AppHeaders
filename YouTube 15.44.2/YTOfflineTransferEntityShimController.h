//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTOfflineEntityController-Protocol.h>

@class GIMMe, GPCPromise, NSString, YTIOfflineOrchestrationAction, YTITransferEntityActionMetadata;

@interface YTOfflineTransferEntityShimController : NSObject <YTOfflineEntityController>
{
    GPCPromise *_executingActionPromise;
    YTIOfflineOrchestrationAction *_executingAction;
    YTITransferEntityActionMetadata *_executingActionTransferEntityActionMetadata;
    NSString *_executingActionVideoID;
    GIMMe *_gimme;
}

+ (long long)entityType;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)resolveActionWithResult:(id)arg1;
- (void)successfullyResolveAction;
- (void)unsuccessfullyResolveActionWithRetryable:(_Bool)arg1;
- (void)setVideoToPendingDownloadAndResolveAction;
- (void)notifyVideoSaved:(id)arg1;
- (void)fetchAndVerifyVideoReadyForDownloadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshEntity;
- (void)updateEntity;
- (void)deleteEntity;
- (void)addEntity;
- (void)executeAction;
- (id)handleAction:(id)arg1 actionID:(id)arg2 forIdentity:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


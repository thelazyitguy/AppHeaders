//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTOfflineEntityController-Protocol.h>

@class GIMMe, GPCPromise, NSString, YTIOfflineOrchestrationAction, YTIPlaybackDataEntityActionMetadata, YTOfflinePlaybackDataEntityService;

@interface YTOfflinePlaybackDataEntityController : NSObject <YTOfflineEntityController>
{
    YTOfflinePlaybackDataEntityService *_playbackDataEntityService;
    GPCPromise *_executingActionPromise;
    YTIOfflineOrchestrationAction *_executingAction;
    YTIPlaybackDataEntityActionMetadata *_executionActionPlaybackDataEntityActionMetadata;
    GIMMe *_gimme;
}

+ (long long)entityType;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)resolveActionWithResult:(id)arg1;
- (void)resolveSuccessfulActionWithAdditionalActions:(id)arg1;
- (void)resolveFailedActionWithRetryable:(_Bool)arg1 error:(id)arg2;
- (void)resolveInvalidAction;
- (void)refreshEntity;
- (void)addEntity;
- (void)executeAction;
- (id)handleAction:(id)arg1 actionID:(id)arg2 forIdentity:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

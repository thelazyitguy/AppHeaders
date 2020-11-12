//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransaction-Protocol.h"

@class ComGoogleAppsBigtopDataItemsChangesApiTypesApplyChangeIntentsRequest_Builder, ComGoogleAppsBigtopDataItemsChangesApiTypesApplyChangesRequest_Builder, ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplCommonScheduler, NSString;
@protocol ComGoogleAppsBigtopDataItemsChangesApiItemChangesService, ComGoogleAppsBigtopDataItemsSyncControlApiItemsSyncControlService, ComGoogleCommonUtilConcurrentListenableFuture, JBTCallback, JBTId, JBTItemCount, JavaUtilList, JavaUtilSet;

@interface ComGoogleAppsBigtopSyncClientImplItemsTransactionItemsTransaction : NSObject <ComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransaction>
{
    int syncDelayMs_;
    id <ComGoogleAppsBigtopDataItemsChangesApiItemChangesService> itemChangesService_;
    id <ComGoogleAppsBigtopDataItemsSyncControlApiItemsSyncControlService> itemsSyncControlService_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    id <JBTId> transactionId_;
    ComGoogleAppsBigtopSyncClientImplCommonScheduler *scheduler_;
    id <JavaUtilSet> affectedObjectIds_;
    id <JavaUtilList> undoers_;
    id <JBTItemCount> approximateAffectedItemCount_;
    _Bool sapiCanUndo_;
    _Bool btdCanUndo_;
    _Bool undone_;
    _Bool hasBulkOps_;
    _Bool addFenceBeforeNextChange_;
    _Bool sendDraft_;
    _Bool cancelSendDraft_;
    _Bool hasDataUndoOperations_;
    ComGoogleAppsBigtopDataItemsChangesApiTypesApplyChangesRequest_Builder *applyChangesRequestBuilder_;
    ComGoogleAppsBigtopDataItemsChangesApiTypesApplyChangeIntentsRequest_Builder *applyChangeIntentsRequestBuilder_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> undoTokenFuture_;
    id <JavaUtilList> postCommitListeners_;
    id <JBTCallback> remoteChangeAppliedCallback_;
}

+ (void)initialize;
- (void)dealloc;
- (id)commitWithCommandSuccessWithJBTSpan:(id)arg1;
- (void)commitWithComGoogleAppsBigtopSyncClientImplCommonSapiCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)commitWithJBTSpan:(id)arg1;
- (id)getAffectedItemsCount;
- (void)setApproximateAffectedItemsCountWithJBTItemCount:(id)arg1;
- (id)undoWithJBTSpan:(id)arg1;
- (void)undoWithComGoogleAppsBigtopSyncClientImplCommonSapiCallback:(id)arg1 withJBTSpan:(id)arg2;
- (void)addRemoteChangeAppliedCallbackWithJBTCallback:(id)arg1;
- (id)setIfAbsentWithJBTId:(id)arg1 withComGoogleAppsBigtopDataItemsItemsSlicesProtos_ItemSummary:(id)arg2;
- (id)fence;
- (id)mutateItemWithJBTId:(id)arg1 withComGoogleAppsBigtopSyncClientImplCommonProtoExtensionValue:(id)arg2 withComGoogleAppsBigtopSyncClientImplItemsTransactionApiUndoer:(id)arg3;
- (id)createClusterWithJBTId:(id)arg1 withComGoogleAppsBigtopSyncClientImplCommonProtoExtensionValue:(id)arg2;
- (id)createItemWithJBTId:(id)arg1 withComGoogleAppsBigtopSyncClientImplCommonProtoExtensionValue:(id)arg2;
- (id)addFilterChangeIntentWithComGoogleAppsBigtopDataItemsItemsProto_FilterChangeIntent:(id)arg1;
- (id)addDraftChangeIntentWithComGoogleAppsBigtopDataItemsItemsProto_DraftChangeIntent:(id)arg1 withJBTId:(id)arg2 withComGoogleCommonBaseOptional:(id)arg3;
- (id)addTaskChangeIntentWithComGoogleAppsBigtopDataItemsItemsProto_TaskChangeIntent:(id)arg1 withJBTId:(id)arg2 withJavaUtilList:(id)arg3;
- (id)addClusterChangeIntentWithComGoogleAppsBigtopDataItemsItemsProto_ClusterChangeIntent:(id)arg1 withComGoogleAppsBigtopSyncClientImplItemsTransactionApiUndoer:(id)arg2;
- (id)addReindexTaskDueDatesChangeIntent;
- (id)addBulkItemChangeIntentWithComGoogleAppsBigtopDataItemsItemsProto_BulkItemLabelChangeIntent:(id)arg1;
- (id)addSingleItemChangeIntentWithComGoogleAppsBigtopDataItemsItemsProto_SingleItemChangeIntent:(id)arg1 withJBTId:(id)arg2;
- (void)addPostCommitListenerWithComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransaction_OperationListener:(id)arg1;
- (id)getId;
- (_Bool)canUndo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

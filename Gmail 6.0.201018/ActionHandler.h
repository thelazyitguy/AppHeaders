//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTActionResponder.h"

#import "GBTActionResponderDelegate-Protocol.h"

@class NSArray, NSString, TipsController, UIView;
@protocol ActionHandlerDelegate, JBTChangeLabelsInfo, JBTClientInteractionContext, JBTClusterConfig, JBTItemsBatchCommand, JBTOrganizationElement, JBTUnifiedInbox;

@interface ActionHandler : GBTActionResponder <GBTActionResponderDelegate>
{
    id <JBTItemsBatchCommand> _batchCommand;
    id <ActionHandlerDelegate> _handlerDelegate;
    TipsController *_tipsController;
    NSArray *_nuggets;
    id <JBTClusterConfig> _sourceCluster;
    id <JBTClusterConfig> _destinationCluster;
    id <JBTOrganizationElement> _destinationElement;
    id <JBTChangeLabelsInfo> _changeLabelsInfo;
    NSString *_sender;
    NSString *_clusterDisplayName;
    UIView *_triggeringView;
    id <JBTClientInteractionContext> _interactionContext;
    id <JBTUnifiedInbox> _unifiedInbox;
}

+ (id)stringForSelectAllAlert:(id)arg1;
+ (_Bool)showOverflowMenuMoveToOptionForNavigationType:(unsigned long long)arg1;
+ (void)showWarningDialogForSelectAllWithCommand:(id)arg1 operationBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
+ (void)showWarningDialogIfNeededWithAffectedItemCount:(id)arg1 messageFormat:(id)arg2 operationBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;
+ (void)showWarningDialogIfNeededWithAffectedItemCount:(id)arg1 operationBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
+ (_Bool)isValidBatchCommandConfig:(id)arg1 forActionType:(unsigned long long)arg2;
+ (id)batchCommandEnumForActionType:(unsigned long long)arg1;
+ (_Bool)shouldOpenSwipeAreaForActionType:(unsigned long long)arg1;
+ (_Bool)isActionDestructive:(unsigned long long)arg1 forNavigationType:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <JBTUnifiedInbox> unifiedInbox; // @synthesize unifiedInbox=_unifiedInbox;
@property(retain, nonatomic) id <JBTClientInteractionContext> interactionContext; // @synthesize interactionContext=_interactionContext;
@property(retain, nonatomic) UIView *triggeringView; // @synthesize triggeringView=_triggeringView;
@property(copy, nonatomic) NSString *clusterDisplayName; // @synthesize clusterDisplayName=_clusterDisplayName;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) id <JBTChangeLabelsInfo> changeLabelsInfo; // @synthesize changeLabelsInfo=_changeLabelsInfo;
@property(retain, nonatomic) id <JBTOrganizationElement> destinationElement; // @synthesize destinationElement=_destinationElement;
@property(retain, nonatomic) id <JBTClusterConfig> destinationCluster; // @synthesize destinationCluster=_destinationCluster;
@property(retain, nonatomic) id <JBTClusterConfig> sourceCluster; // @synthesize sourceCluster=_sourceCluster;
@property(retain, nonatomic) NSArray *nuggets; // @synthesize nuggets=_nuggets;
- (void)didInvokeAction:(unsigned long long)arg1;
- (id)responseHandlerForMoveActionWithNugget:(id)arg1;
- (void)createNewClusterWithJBTCallback:(id)arg1;
- (void)actionWasUndone:(unsigned long long)arg1;
- (id)clientForNuggets:(id)arg1;
- (_Bool)shouldDisableMoreActionsButtonForNavigationType:(unsigned long long)arg1;
- (id)spanForAction:(id)arg1;
- (id)contextForAction:(unsigned long long)arg1 nugget:(id)arg2 batch:(id)arg3 commandResult:(id)arg4 callback:(id)arg5;
- (id)contextForMarkAsNotImportant:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMarkAsImportant:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForCancelAllScheduledSends:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForRemoveWhitelistedDisplayImagesSender:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForAlwaysDisplayImagesFromSender:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForRemoveFromTrash:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMarkAsNotPhishy:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForRemoveFromSpam:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMoveToInbox:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMarkAsUnread:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForSectionTeaserDismiss:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForChangeLabels:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForUnstar:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForStar:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForUnsubscribeOneClick:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMarkAsSpamAndUnsubscribeOneClick:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMarkAsSpam:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMarkAsClosed:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMarkAsOpened:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMoveToOrganizationElement:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForRemoveFromCurrentCluster:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMoveToCluster:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForOpenMoveToMenu:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForUnsnooze:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForResnooze:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForSnooze:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForTrash:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMarkAsRead:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMarkAsNotDangerous:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMarkAsDangerous:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForUnmute:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForMute:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForArchive:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (id)contextForPermanentlyDelete:(id)arg1 batch:(id)arg2 callback:(id)arg3;
- (_Bool)isItemCountLowerBound;
- (long long)itemCount;
- (void)performAction:(unsigned long long)arg1 withNugget:(id)arg2 batch:(id)arg3 commandResult:(id)arg4 isMultiselect:(_Bool)arg5;
- (void)addCallback:(id)arg1 toFuture:(id)arg2;
- (void)performAction:(unsigned long long)arg1 onItems:(id)arg2;
- (id)configForBatchAction:(unsigned long long)arg1;
- (void)performAction:(unsigned long long)arg1 isMultiselect:(_Bool)arg2;
- (void)performAction:(unsigned long long)arg1;
- (_Bool)canPerformBatchAction:(unsigned long long)arg1 withCommandConfig:(id)arg2;
- (_Bool)canPerformBatchAction:(unsigned long long)arg1;
- (void)setNuggets:(id)arg1 unifiedInbox:(id)arg2;
- (id)initWithDelegate:(id)arg1 nugget:(id)arg2 tipsController:(id)arg3;
- (id)initWithDelegate:(id)arg1 nugget:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


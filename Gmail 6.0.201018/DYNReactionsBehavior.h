//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNDMSupplementalContentViewDelegate-Protocol.h"
#import "DYNDMSupplementalRenderDelegate-Protocol.h"
#import "DYNMessageContentViewReactionsDelegate-Protocol.h"
#import "DYNMessageContentViewReadReceiptsDelegate-Protocol.h"
#import "DYNReactionPickerViewControllerDelegate-Protocol.h"
#import "DYNReadReceiptsSubscriptionListener-Protocol.h"
#import "DYNStreamBehavior-Protocol.h"

@class NSSet, NSString;
@protocol DYNAlertManagerService, DYNExperimentsService, DYNMemberCacheService, DYNReactionsOpportunisticCacheService, DYNReadReceiptsSubscriptionService, DYNSharedLayerService, DYNStream, GILInteractionService, GIPAccountID;

@interface DYNReactionsBehavior : NSObject <DYNMessageContentViewReactionsDelegate, DYNMessageContentViewReadReceiptsDelegate, DYNReadReceiptsSubscriptionListener, DYNReactionPickerViewControllerDelegate, DYNDMSupplementalRenderDelegate, DYNStreamBehavior, DYNDMSupplementalContentViewDelegate>
{
    id <DYNStream> _stream;
    id <GIPAccountID> _accountID;
    id <DYNExperimentsService> _experimentsService;
    id <DYNMemberCacheService> _memberCacheService;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNAlertManagerService> _alertManagerService;
    id <DYNReadReceiptsSubscriptionService> _readReceiptsSubscriptionService;
    id <DYNReactionsOpportunisticCacheService> _reactionsCacheService;
    id <GILInteractionService> _interactionLogger;
    NSSet *_fetchingUserIDs;
}

- (void).cxx_destruct;
- (void)showReadReceiptsListWithStreamState:(id)arg1;
- (id)reactionsCacheService;
- (id)readReceiptsSubscriptionService;
- (id)memberCacheService;
- (void)fetchUsersAndTriggerModelReloadWithUserIDs:(id)arg1;
- (_Bool)readReceiptsEnabledForGroupBase:(id)arg1;
- (void)addReadReceiptsSubscriptionListenerWithState:(id)arg1;
- (void)showPerMessageReactionLimitMessage;
- (void)showPerUserReactionLimitMessage;
- (void)handleUpdateReactionError:(id)arg1;
- (void)reactionPickerViewController:(id)arg1 updateReactionFailedWithError:(id)arg2;
- (void)reactionPickerViewControllerDidUpdateReaction:(id)arg1;
- (void)reactionPickerViewControllerDidTapDismiss:(id)arg1;
- (void)updatedReadReceipts:(id)arg1 enabled:(_Bool)arg2 forGroupID:(id)arg3;
- (void)didTapReadReceiptAvatarButton:(id)arg1 message:(id)arg2;
- (void)userLongPressedReaction:(id)arg1 onMessageId:(id)arg2;
- (void)userTappedAddReactionsOnMessage:(id)arg1;
- (_Bool)userReacted:(_Bool)arg1 toExistingReaction:(id)arg2 onMessage:(id)arg3;
- (id)modelAfterRemovingObjectsFromModel:(id)arg1 withState:(id)arg2;
- (id)modelAfterProcessingObjectsInModel:(id)arg1 withState:(id)arg2;
- (id)modelAfterInsertingObjectsIntoModel:(id)arg1 withState:(id)arg2;
- (void)contentViewIsDisplayed:(id)arg1 atIndexPath:(id)arg2;
- (void)handleEventsInStream:(id)arg1 withState:(id)arg2 oldState:(id)arg3;
- (void)finalizeWithStreamState:(id)arg1;
- (void)initializeWithStream:(id)arg1 state:(id)arg2;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

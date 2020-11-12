//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNACLFixerState, DYNActionSheet, DYNBumpingBarState, DYNConversationPickerController, DYNEmptyStateView, DYNNavSettings, DYNOffTheRecordState, DYNPendingViewControllerPresentation, DYNPostboxContent, DYNRenderedModelState, DYNSearchState, DYNStreamID, DYNTaskCardDetails, GOOBaseContentViewObject, MDCFlexibleHeaderViewController, NSArray, NSError, NSHashTable, NSNumber, NSSet, NSString, UIColor, UIView, UIViewController;
@protocol DYNBlockStateChangedEvent, DYNDialog, DYNDmCreationSummary, DYNDraft, DYNGroup, DYNGroupBase, DYNGroupId, DYNGroupInfoSubscriptionToken, DYNGroupRetentionStateUpdatedEvent, DYNMember, DYNMessage, DYNMessageEvents, DYNMessageId, DYNReadReceiptsSubscriptionToken, DYNSlashCommandList, DYNSmartReply, DYNSmartReplyList, DYNTopicId, DYNTrackingInputAccessoryViewAccessibility><DYNComposer, DYNUser, DYNUserId, GIPAccountID;

@interface DYNStreamState : NSObject
{
    _Bool _isApplicationActive;
    _Bool _stickyToBottomScrollView;
    _Bool _stickyToTopScrollView;
    _Bool _editing;
    _Bool _editMessageWarningShown;
    _Bool _composing;
    _Bool _blockingRoom;
    _Bool _navBarVisible;
    _Bool _animateDismissal;
    _Bool _didShowHistoryOffWarningInSession;
    _Bool _tapGesturesIntercepted;
    _Bool _paginateUpAvailable;
    _Bool _paginateDownAvailable;
    _Bool _pagingUp;
    _Bool _pagingDown;
    _Bool _offTheRecord;
    _Bool _unreadButtonVisible;
    _Bool _composerHasContent;
    _Bool _inPreview;
    _Bool _alignContentToTop;
    _Bool _readReceiptsEnabled;
    _Bool _animatedScrollAdjustment;
    _Bool _keepOffsetRelativeToBottomOnModelUpdate;
    _Bool _aclFixerSubscribed;
    _Bool _keyboardWillHideOrShow;
    _Bool _unsupportedGroupErrorOccurred;
    _Bool _voiceOverEnabled;
    _Bool _headerWanted;
    _Bool _creatingDirectMessage;
    _Bool _showChannelAssistDialog;
    _Bool _showDynamicDM;
    _Bool _postboxSendButtonEnabled;
    _Bool _hideProgressBar;
    int _selectedRoomTab;
    unsigned int _dataSyncStatus;
    unsigned int _desiredScrollPositioning;
    int _inviteState;
    int _postboxBlockType;
    int _messageDeliveryState;
    unsigned int _channelAssistShownState;
    unsigned int _dmOpenType;
    NSString *_groupName;
    id <GIPAccountID> _accountID;
    MDCFlexibleHeaderViewController *_flexibleHeaderController;
    id <DYNMessage> _editedMessage;
    DYNNavSettings *_navSettings;
    NSArray *_pendingModel;
    NSArray *_model;
    DYNRenderedModelState *_renderedModelState;
    id <DYNSmartReplyList> _smartReplyList;
    unsigned long long _numberOfSmartRepliesDisplayed;
    id <DYNDialog> _dialog;
    UIView *_errorView;
    UIViewController *_errorViewController;
    UIView<DYNTrackingInputAccessoryViewAccessibility><DYNComposer> *_postbox;
    UIView *_bottomBanner;
    UIView *_centerBanner;
    UIView *_topTabbedRoomBanner;
    UIColor *_fillBeneathColor;
    double _keyboardHeight;
    double _initialBottomContentInsetMinimum;
    double _actionSheetHeight;
    long long _keyboardAnimationCurve;
    DYNActionSheet *_actionSheet;
    UIViewController *_bottomSheet;
    id <DYNMessage> _selectedMessage;
    id <DYNMessage> _selectedMessageForShowingReadReceiptAvatars;
    id <DYNMessage> _highlightedMessage;
    id <DYNMessageId> _focusedMessageID;
    id <DYNMessageId> _scrollToMessageID;
    id <DYNGroup> _group;
    id <DYNGroupBase> _groupBase;
    id <DYNTopicId> _topicID;
    DYNPendingViewControllerPresentation *_pushingViewController;
    DYNPendingViewControllerPresentation *_poppingViewController;
    UIViewController *_pushedController;
    DYNConversationPickerController *_conversationPickerController;
    UIViewController *_modalViewController;
    NSArray *_emailAddressesForDMCreation;
    NSArray *_usersForDMCreation;
    NSArray *_externalUsersForDMCreation;
    NSSet *_emailAddressesNotFoundForDMCreation;
    NSHashTable *_renderDelegates;
    NSHashTable *_viewDelegates;
    DYNStreamID *_streamID;
    long long _initialReadTimestamp;
    long long _initialReadTimestampIncludingMarkAsUnread;
    NSNumber *_numberOfMembers;
    DYNSearchState *_searchState;
    id <DYNGroupInfoSubscriptionToken> _groupInfoSubscriptionToken;
    NSArray *_readReceipts;
    id <DYNReadReceiptsSubscriptionToken> _readReceiptsSubscriptionToken;
    NSArray *_queuedEvents;
    NSArray *_addedMessages;
    NSArray *_updatedMessages;
    NSSet *_removedMessageIds;
    NSSet *_postedMessages;
    NSSet *_displayedMessages;
    double _insetsCompleteTime;
    NSSet *_messagesToBeDeleted;
    id <DYNBlockStateChangedEvent> _blockStateChangedEvent;
    DYNACLFixerState *_aclFixerState;
    id <DYNGroupId> _membershipRemovedGroupID;
    id <DYNGroupId> _groupJoinedGroupID;
    id <DYNGroupId> _groupEncounteredErrorGroupID;
    NSError *_groupEncounteredError;
    id <DYNGroupRetentionStateUpdatedEvent> _groupRetentionStateUpdatedEvent;
    NSSet *_pendingRetentionStateUpdatedMessageIDs;
    id <DYNSlashCommandList> _suggestedSlashCommands;
    id <DYNMessage> _dialogInvokingMessage;
    DYNEmptyStateView *_embeddingEmptyStateView;
    DYNEmptyStateView *_embeddedEmptyStateView;
    UIColor *_streamBackgroundColor;
    NSArray *_members;
    NSArray *_invitedMemberIds;
    NSNumber *_numberOfMembersOverride;
    UIView *_pullToBumpBar;
    id <DYNMessage> _forwardingMessage;
    id <DYNTopicId> _pinnedTopicID;
    DYNBumpingBarState *_bumpingBarState;
    NSSet *_pendingAddedBehaviors;
    NSSet *_pendingRemovedBehaviors;
    NSSet *_realTimeMessagesReceived;
    UIView *_streamHeaderView;
    NSError *_postedMessageFailureError;
    NSError *_createDirectMessageError;
    id <DYNUser> _postboxBlockedViewUser;
    id <DYNUserId> _requestedPeopleSheetUserId;
    DYNPostboxContent *_postboxContent;
    id <DYNDraft> _draft;
    DYNOffTheRecordState *_offTheRecordState;
    id <DYNSmartReply> _composePrefillSmartReply;
    GOOBaseContentViewObject *_headerContentViewObject;
    id <DYNMessageEvents> _messageEvents;
    NSArray *_promptActions;
    DYNTaskCardDetails *_busyTaskCardDetails;
    id <DYNMember> _dynamicDMMember;
    id <DYNDmCreationSummary> _dmCreationSummary;
    CDStruct_54e362b6 _events;
    struct CGPoint _fixedScrollOffset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hideProgressBar; // @synthesize hideProgressBar=_hideProgressBar;
@property(readonly, nonatomic) _Bool postboxSendButtonEnabled; // @synthesize postboxSendButtonEnabled=_postboxSendButtonEnabled;
@property(readonly, nonatomic) unsigned int dmOpenType; // @synthesize dmOpenType=_dmOpenType;
@property(retain, nonatomic) id <DYNDmCreationSummary> dmCreationSummary; // @synthesize dmCreationSummary=_dmCreationSummary;
@property(readonly, nonatomic) id <DYNMember> dynamicDMMember; // @synthesize dynamicDMMember=_dynamicDMMember;
@property(readonly, nonatomic) _Bool showDynamicDM; // @synthesize showDynamicDM=_showDynamicDM;
@property(readonly, nonatomic) DYNTaskCardDetails *busyTaskCardDetails; // @synthesize busyTaskCardDetails=_busyTaskCardDetails;
@property(readonly, nonatomic) unsigned int channelAssistShownState; // @synthesize channelAssistShownState=_channelAssistShownState;
@property(readonly, nonatomic) _Bool showChannelAssistDialog; // @synthesize showChannelAssistDialog=_showChannelAssistDialog;
@property(readonly, nonatomic) NSArray *promptActions; // @synthesize promptActions=_promptActions;
@property(readonly, nonatomic) int messageDeliveryState; // @synthesize messageDeliveryState=_messageDeliveryState;
@property(readonly, nonatomic) _Bool creatingDirectMessage; // @synthesize creatingDirectMessage=_creatingDirectMessage;
@property(readonly, nonatomic) id <DYNMessageEvents> messageEvents; // @synthesize messageEvents=_messageEvents;
@property(readonly, nonatomic) GOOBaseContentViewObject *headerContentViewObject; // @synthesize headerContentViewObject=_headerContentViewObject;
@property(nonatomic) _Bool headerWanted; // @synthesize headerWanted=_headerWanted;
@property(readonly, nonatomic) id <DYNSmartReply> composePrefillSmartReply; // @synthesize composePrefillSmartReply=_composePrefillSmartReply;
@property(retain, nonatomic) DYNOffTheRecordState *offTheRecordState; // @synthesize offTheRecordState=_offTheRecordState;
@property(readonly, nonatomic) id <DYNDraft> draft; // @synthesize draft=_draft;
@property(readonly, nonatomic) DYNPostboxContent *postboxContent; // @synthesize postboxContent=_postboxContent;
@property(readonly, nonatomic) id <DYNUserId> requestedPeopleSheetUserId; // @synthesize requestedPeopleSheetUserId=_requestedPeopleSheetUserId;
@property(readonly, nonatomic) id <DYNUser> postboxBlockedViewUser; // @synthesize postboxBlockedViewUser=_postboxBlockedViewUser;
@property(readonly, nonatomic) int postboxBlockType; // @synthesize postboxBlockType=_postboxBlockType;
@property(readonly, nonatomic) NSError *createDirectMessageError; // @synthesize createDirectMessageError=_createDirectMessageError;
@property(readonly, nonatomic) NSError *postedMessageFailureError; // @synthesize postedMessageFailureError=_postedMessageFailureError;
@property(readonly, nonatomic) UIView *streamHeaderView; // @synthesize streamHeaderView=_streamHeaderView;
@property(readonly, nonatomic) NSSet *realTimeMessagesReceived; // @synthesize realTimeMessagesReceived=_realTimeMessagesReceived;
@property(readonly, nonatomic) NSSet *pendingRemovedBehaviors; // @synthesize pendingRemovedBehaviors=_pendingRemovedBehaviors;
@property(readonly, nonatomic) NSSet *pendingAddedBehaviors; // @synthesize pendingAddedBehaviors=_pendingAddedBehaviors;
@property(readonly, nonatomic) int inviteState; // @synthesize inviteState=_inviteState;
@property(readonly, nonatomic) DYNBumpingBarState *bumpingBarState; // @synthesize bumpingBarState=_bumpingBarState;
@property(readonly, nonatomic) id <DYNTopicId> pinnedTopicID; // @synthesize pinnedTopicID=_pinnedTopicID;
@property(readonly, nonatomic) id <DYNMessage> forwardingMessage; // @synthesize forwardingMessage=_forwardingMessage;
@property(readonly, nonatomic) _Bool voiceOverEnabled; // @synthesize voiceOverEnabled=_voiceOverEnabled;
@property(nonatomic) __weak UIView *pullToBumpBar; // @synthesize pullToBumpBar=_pullToBumpBar;
@property(readonly, nonatomic) struct CGPoint fixedScrollOffset; // @synthesize fixedScrollOffset=_fixedScrollOffset;
@property(readonly, nonatomic) NSNumber *numberOfMembersOverride; // @synthesize numberOfMembersOverride=_numberOfMembersOverride;
@property(readonly, nonatomic) NSArray *invitedMemberIds; // @synthesize invitedMemberIds=_invitedMemberIds;
@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(nonatomic) __weak UIColor *streamBackgroundColor; // @synthesize streamBackgroundColor=_streamBackgroundColor;
@property(readonly, nonatomic) __weak DYNEmptyStateView *embeddedEmptyStateView; // @synthesize embeddedEmptyStateView=_embeddedEmptyStateView;
@property(readonly, nonatomic) DYNEmptyStateView *embeddingEmptyStateView; // @synthesize embeddingEmptyStateView=_embeddingEmptyStateView;
@property(readonly, nonatomic) _Bool unsupportedGroupErrorOccurred; // @synthesize unsupportedGroupErrorOccurred=_unsupportedGroupErrorOccurred;
@property(retain, nonatomic) id <DYNMessage> dialogInvokingMessage; // @synthesize dialogInvokingMessage=_dialogInvokingMessage;
@property(retain, nonatomic) id <DYNSlashCommandList> suggestedSlashCommands; // @synthesize suggestedSlashCommands=_suggestedSlashCommands;
@property(nonatomic) _Bool keyboardWillHideOrShow; // @synthesize keyboardWillHideOrShow=_keyboardWillHideOrShow;
@property(readonly, nonatomic) NSSet *pendingRetentionStateUpdatedMessageIDs; // @synthesize pendingRetentionStateUpdatedMessageIDs=_pendingRetentionStateUpdatedMessageIDs;
@property(readonly, nonatomic) id <DYNGroupRetentionStateUpdatedEvent> groupRetentionStateUpdatedEvent; // @synthesize groupRetentionStateUpdatedEvent=_groupRetentionStateUpdatedEvent;
@property(readonly, nonatomic) NSError *groupEncounteredError; // @synthesize groupEncounteredError=_groupEncounteredError;
@property(readonly, nonatomic) id <DYNGroupId> groupEncounteredErrorGroupID; // @synthesize groupEncounteredErrorGroupID=_groupEncounteredErrorGroupID;
@property(readonly, nonatomic) id <DYNGroupId> groupJoinedGroupID; // @synthesize groupJoinedGroupID=_groupJoinedGroupID;
@property(readonly, nonatomic) id <DYNGroupId> membershipRemovedGroupID; // @synthesize membershipRemovedGroupID=_membershipRemovedGroupID;
@property(readonly, nonatomic) DYNACLFixerState *aclFixerState; // @synthesize aclFixerState=_aclFixerState;
@property(readonly, nonatomic) _Bool aclFixerSubscribed; // @synthesize aclFixerSubscribed=_aclFixerSubscribed;
@property(readonly, nonatomic) id <DYNBlockStateChangedEvent> blockStateChangedEvent; // @synthesize blockStateChangedEvent=_blockStateChangedEvent;
@property(readonly, nonatomic) NSSet *messagesToBeDeleted; // @synthesize messagesToBeDeleted=_messagesToBeDeleted;
@property(readonly, nonatomic) double insetsCompleteTime; // @synthesize insetsCompleteTime=_insetsCompleteTime;
@property(readonly, nonatomic) NSSet *displayedMessages; // @synthesize displayedMessages=_displayedMessages;
@property(readonly, nonatomic) NSSet *postedMessages; // @synthesize postedMessages=_postedMessages;
@property(readonly, nonatomic) NSSet *removedMessageIds; // @synthesize removedMessageIds=_removedMessageIds;
@property(readonly, nonatomic) NSArray *updatedMessages; // @synthesize updatedMessages=_updatedMessages;
@property(readonly, nonatomic) NSArray *addedMessages; // @synthesize addedMessages=_addedMessages;
@property(readonly, nonatomic) _Bool keepOffsetRelativeToBottomOnModelUpdate; // @synthesize keepOffsetRelativeToBottomOnModelUpdate=_keepOffsetRelativeToBottomOnModelUpdate;
@property(readonly, nonatomic) _Bool animatedScrollAdjustment; // @synthesize animatedScrollAdjustment=_animatedScrollAdjustment;
@property(readonly, nonatomic) unsigned int desiredScrollPositioning; // @synthesize desiredScrollPositioning=_desiredScrollPositioning;
@property(readonly, nonatomic) NSArray *queuedEvents; // @synthesize queuedEvents=_queuedEvents;
@property(readonly, nonatomic) CDStruct_54e362b6 events; // @synthesize events=_events;
@property(readonly, nonatomic) id <DYNReadReceiptsSubscriptionToken> readReceiptsSubscriptionToken; // @synthesize readReceiptsSubscriptionToken=_readReceiptsSubscriptionToken;
@property(readonly, nonatomic) _Bool readReceiptsEnabled; // @synthesize readReceiptsEnabled=_readReceiptsEnabled;
@property(readonly, nonatomic) NSArray *readReceipts; // @synthesize readReceipts=_readReceipts;
@property(readonly, nonatomic) id <DYNGroupInfoSubscriptionToken> groupInfoSubscriptionToken; // @synthesize groupInfoSubscriptionToken=_groupInfoSubscriptionToken;
@property(readonly, nonatomic) _Bool alignContentToTop; // @synthesize alignContentToTop=_alignContentToTop;
@property(readonly, nonatomic) DYNSearchState *searchState; // @synthesize searchState=_searchState;
@property(readonly, nonatomic) _Bool inPreview; // @synthesize inPreview=_inPreview;
@property(readonly, nonatomic) NSNumber *numberOfMembers; // @synthesize numberOfMembers=_numberOfMembers;
@property(readonly, nonatomic) _Bool composerHasContent; // @synthesize composerHasContent=_composerHasContent;
@property(readonly, nonatomic, getter=isUnreadButtonVisible) _Bool unreadButtonVisible; // @synthesize unreadButtonVisible=_unreadButtonVisible;
@property(readonly, nonatomic) long long initialReadTimestampIncludingMarkAsUnread; // @synthesize initialReadTimestampIncludingMarkAsUnread=_initialReadTimestampIncludingMarkAsUnread;
@property(readonly, nonatomic) long long initialReadTimestamp; // @synthesize initialReadTimestamp=_initialReadTimestamp;
@property(readonly, nonatomic) DYNStreamID *streamID; // @synthesize streamID=_streamID;
@property(readonly, nonatomic) NSHashTable *viewDelegates; // @synthesize viewDelegates=_viewDelegates;
@property(readonly, nonatomic) NSHashTable *renderDelegates; // @synthesize renderDelegates=_renderDelegates;
@property(readonly, nonatomic) NSSet *emailAddressesNotFoundForDMCreation; // @synthesize emailAddressesNotFoundForDMCreation=_emailAddressesNotFoundForDMCreation;
@property(readonly, nonatomic) NSArray *externalUsersForDMCreation; // @synthesize externalUsersForDMCreation=_externalUsersForDMCreation;
@property(readonly, nonatomic) NSArray *usersForDMCreation; // @synthesize usersForDMCreation=_usersForDMCreation;
@property(readonly, nonatomic) NSArray *emailAddressesForDMCreation; // @synthesize emailAddressesForDMCreation=_emailAddressesForDMCreation;
@property(readonly, nonatomic) UIViewController *modalViewController; // @synthesize modalViewController=_modalViewController;
@property(readonly, nonatomic) DYNConversationPickerController *conversationPickerController; // @synthesize conversationPickerController=_conversationPickerController;
@property(readonly, nonatomic) __weak UIViewController *pushedController; // @synthesize pushedController=_pushedController;
@property(readonly, nonatomic) DYNPendingViewControllerPresentation *poppingViewController; // @synthesize poppingViewController=_poppingViewController;
@property(readonly, nonatomic) DYNPendingViewControllerPresentation *pushingViewController; // @synthesize pushingViewController=_pushingViewController;
@property(readonly, nonatomic) _Bool offTheRecord; // @synthesize offTheRecord=_offTheRecord;
@property(readonly, nonatomic) id <DYNTopicId> topicID; // @synthesize topicID=_topicID;
@property(readonly, nonatomic) id <DYNGroupBase> groupBase; // @synthesize groupBase=_groupBase;
@property(readonly, nonatomic) id <DYNGroup> group; // @synthesize group=_group;
@property(readonly, nonatomic) _Bool pagingDown; // @synthesize pagingDown=_pagingDown;
@property(readonly, nonatomic) _Bool pagingUp; // @synthesize pagingUp=_pagingUp;
@property(readonly, nonatomic) _Bool paginateDownAvailable; // @synthesize paginateDownAvailable=_paginateDownAvailable;
@property(readonly, nonatomic) _Bool paginateUpAvailable; // @synthesize paginateUpAvailable=_paginateUpAvailable;
@property(readonly, nonatomic) id <DYNMessageId> scrollToMessageID; // @synthesize scrollToMessageID=_scrollToMessageID;
@property(readonly, nonatomic) id <DYNMessageId> focusedMessageID; // @synthesize focusedMessageID=_focusedMessageID;
@property(readonly, nonatomic) id <DYNMessage> highlightedMessage; // @synthesize highlightedMessage=_highlightedMessage;
@property(readonly, nonatomic) id <DYNMessage> selectedMessageForShowingReadReceiptAvatars; // @synthesize selectedMessageForShowingReadReceiptAvatars=_selectedMessageForShowingReadReceiptAvatars;
@property(readonly, nonatomic) id <DYNMessage> selectedMessage; // @synthesize selectedMessage=_selectedMessage;
@property(readonly, nonatomic) UIViewController *bottomSheet; // @synthesize bottomSheet=_bottomSheet;
@property(readonly, nonatomic) DYNActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(readonly, nonatomic) _Bool tapGesturesIntercepted; // @synthesize tapGesturesIntercepted=_tapGesturesIntercepted;
@property(readonly, nonatomic) _Bool didShowHistoryOffWarningInSession; // @synthesize didShowHistoryOffWarningInSession=_didShowHistoryOffWarningInSession;
@property(readonly, nonatomic) _Bool animateDismissal; // @synthesize animateDismissal=_animateDismissal;
@property(readonly, nonatomic) long long keyboardAnimationCurve; // @synthesize keyboardAnimationCurve=_keyboardAnimationCurve;
@property(readonly, nonatomic) double actionSheetHeight; // @synthesize actionSheetHeight=_actionSheetHeight;
@property(readonly, nonatomic) double initialBottomContentInsetMinimum; // @synthesize initialBottomContentInsetMinimum=_initialBottomContentInsetMinimum;
@property(readonly, nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(readonly, nonatomic) UIColor *fillBeneathColor; // @synthesize fillBeneathColor=_fillBeneathColor;
@property(readonly, nonatomic) UIView *topTabbedRoomBanner; // @synthesize topTabbedRoomBanner=_topTabbedRoomBanner;
@property(readonly, nonatomic) UIView *centerBanner; // @synthesize centerBanner=_centerBanner;
@property(readonly, nonatomic) UIView *bottomBanner; // @synthesize bottomBanner=_bottomBanner;
@property(readonly, nonatomic) UIView<DYNTrackingInputAccessoryViewAccessibility><DYNComposer> *postbox; // @synthesize postbox=_postbox;
@property(readonly, nonatomic) UIViewController *errorViewController; // @synthesize errorViewController=_errorViewController;
@property(readonly, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(readonly, nonatomic) id <DYNDialog> dialog; // @synthesize dialog=_dialog;
@property(readonly, nonatomic) unsigned long long numberOfSmartRepliesDisplayed; // @synthesize numberOfSmartRepliesDisplayed=_numberOfSmartRepliesDisplayed;
@property(readonly, nonatomic) id <DYNSmartReplyList> smartReplyList; // @synthesize smartReplyList=_smartReplyList;
@property(readonly, nonatomic) DYNRenderedModelState *renderedModelState; // @synthesize renderedModelState=_renderedModelState;
@property(readonly, nonatomic) NSArray *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSArray *pendingModel; // @synthesize pendingModel=_pendingModel;
@property(readonly, nonatomic) _Bool navBarVisible; // @synthesize navBarVisible=_navBarVisible;
@property(readonly, nonatomic) DYNNavSettings *navSettings; // @synthesize navSettings=_navSettings;
@property(readonly, nonatomic, getter=isBlockingRoom) _Bool blockingRoom; // @synthesize blockingRoom=_blockingRoom;
@property(readonly, nonatomic, getter=isComposing) _Bool composing; // @synthesize composing=_composing;
@property(readonly, nonatomic) _Bool editMessageWarningShown; // @synthesize editMessageWarningShown=_editMessageWarningShown;
@property(readonly, nonatomic) id <DYNMessage> editedMessage; // @synthesize editedMessage=_editedMessage;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) MDCFlexibleHeaderViewController *flexibleHeaderController; // @synthesize flexibleHeaderController=_flexibleHeaderController;
@property(readonly, nonatomic) _Bool stickyToTopScrollView; // @synthesize stickyToTopScrollView=_stickyToTopScrollView;
@property(readonly, nonatomic) _Bool stickyToBottomScrollView; // @synthesize stickyToBottomScrollView=_stickyToBottomScrollView;
@property(nonatomic) unsigned int dataSyncStatus; // @synthesize dataSyncStatus=_dataSyncStatus;
@property(readonly, nonatomic) int selectedRoomTab; // @synthesize selectedRoomTab=_selectedRoomTab;
@property(readonly, nonatomic) _Bool isApplicationActive; // @synthesize isApplicationActive=_isApplicationActive;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
- (id)eventsDescription;
- (id)cachedMemberUserIDSet;
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (_Bool)isEditingNotWanted;
- (_Bool)isEditingWanted;
- (_Bool)getConfirmedDisplayedMessages:(out id *)arg1 lastDisplayedMessage:(out id *)arg2 withTimestampGreaterThan:(long long)arg3 outTimestamp:(out long long *)arg4;
- (id)description;
- (id)copy;
- (id)toBuilder;
- (id)initWithBuilder:(id)arg1;

@end

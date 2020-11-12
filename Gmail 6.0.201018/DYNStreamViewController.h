//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNCollectionViewController.h"

#import "CAAnimationDelegate-Protocol.h"
#import "DYNActionSheetLifecycleDelegate-Protocol.h"
#import "DYNAppLaunchLoggableLandingViewController-Protocol.h"
#import "DYNAppStateObserver-Protocol.h"
#import "DYNComposer-Protocol.h"
#import "DYNDeepLinkLandingViewController-Protocol.h"
#import "DYNDisplayedConversationInspectable-Protocol.h"
#import "DYNNotificationLandingViewController-Protocol.h"
#import "DYNReachabilityObserver-Protocol.h"
#import "DYNStream-Protocol.h"
#import "DYNViewTransitionAnimating-Protocol.h"
#import "GILRecyclableViewLoggerDataSource-Protocol.h"
#import "GOOBottomSheetControllerDelegate-Protocol.h"
#import "GSCNavigationTransitioningDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class DYNDraftManagementBehavior, DYNStreamID, DYNStreamState, DYNTrackingInputAccessoryView, GILCollectionViewLogger, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimer, NSUUID, UIButton, UIGestureRecognizer, UIKeyCommand, UINavigationItem, UIScrollView, UIView, UIViewController;
@protocol DYNAlertManagerService, DYNColorSchemeService, DYNExperimentsService, DYNGroupId, DYNSharedLayerService, DYNTopTabbedRoomController, DYNTopicId, DYNTracingService, DYNTrackingInputAccessoryViewAccessibility, GIPAccountID, HUBBannerRegistrationService, NSObject;

@interface DYNStreamViewController : DYNCollectionViewController <DYNViewTransitionAnimating, CAAnimationDelegate, DYNActionSheetLifecycleDelegate, UIGestureRecognizerDelegate, GOOBottomSheetControllerDelegate, DYNNotificationLandingViewController, DYNDeepLinkLandingViewController, DYNAppLaunchLoggableLandingViewController, DYNAppStateObserver, DYNReachabilityObserver, GILRecyclableViewLoggerDataSource, DYNComposer, DYNStream, DYNDisplayedConversationInspectable, GSCNavigationTransitioningDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    _Bool _needsBackButtonProcess;
    DYNStreamState *_lastCollectionViewUpdateState;
    _Bool _firstCollectionViewLoad;
    NSMutableSet *_registeredReuseIdentifiers;
    UIView *_fillBeneathBottomBannerView;
    id <DYNTopTabbedRoomController> _topTabbedRoomController;
    id <DYNExperimentsService> _experimentsService;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNAlertManagerService> _alertManagerService;
    id <DYNTracingService> _tracingService;
    id <DYNColorSchemeService> _colorSchemeService;
    id <HUBBannerRegistrationService> _bannerRegistrationService;
    _Bool _needsReloadOnViewWillAppear;
    id _wasBeingDismissedFromNavigationToken;
    struct CGSize _viewSizeBeforeLayoutChange;
    id _backgroundFreezeToken;
    id <GIPAccountID> _accountID;
    NSMutableSet *_loadingReasons;
    _Bool _loadingStateChanged;
    _Bool _isInitialProcessStateChange;
    UINavigationItem *_headerNavigationItem;
    NSTimer *_processStateChangeTimer;
    UIButton *_unreadButton;
    NSLayoutConstraint *_unreadButtonVisibilityConstraint;
    NSUUID *_unreadButtonVisibilityOperationUUID;
    _Bool _hasSetFinalRootVE;
    _Bool _directMessageEnterFreshLogged;
    _Bool _groupEnterLogged;
    _Bool _staleGroupEnterLogged;
    _Bool _roomEnterLogged;
    _Bool _shouldShowBanner;
    GILCollectionViewLogger *_collectionViewLogger;
    DYNDraftManagementBehavior *_draftManagementBehavior;
    _Bool _disableSwipeToDismiss;
    _Bool _focusVoiceOverAfterSearch;
    _Bool _processingStateChange;
    _Bool _forceImmediateProcessing;
    _Bool _reloadDataAfterProcessing;
    _Bool _initialDataDisplayed;
    _Bool _didEnterBackground;
    _Bool _dragging;
    _Bool _adjustingContentInsets;
    _Bool _keyboardShowing;
    _Bool _composingExpected;
    _Bool _animatingTransition;
    _Bool _transitionAnimationBegun;
    DYNStreamID *_streamID;
    NSSet *_behaviors;
    NSString *_streamIdentifier;
    NSMutableDictionary *_offScreenCellsByMessageID;
    NSMutableDictionary *_offScreenMessagesByMessageID;
    DYNStreamState *_state;
    DYNStreamState *_pendingState;
    NSMutableArray *_previousStates;
    NSLayoutConstraint *_inputBarBottomConstraint;
    NSLayoutConstraint *_bottomBannerBottomConstraint;
    UIView<DYNTrackingInputAccessoryViewAccessibility> *_inputBar;
    DYNTrackingInputAccessoryView *_trackingInputAccessoryView;
    UIView *_inputBarHidingTail;
    UIGestureRecognizer *_defaultTapRecognizer;
    NSMutableArray *_freezeStack;
    id _initFreezeToken;
    double _initialContentBottom;
    double _viewDidAppearTime;
    id <NSObject> _keyboardShowObserver;
    id <NSObject> _keyboardHideObserver;
    UIView *_topTransitionView;
    UIView *_contentTransitionView;
    UIView *_bottomTransitionView;
    UIView *_headerTransitionView;
    double _scrollDelta;
    double _contentTransitionViewOffset;
    UIKeyCommand *_shiftReturnCommand;
    UIKeyCommand *_returnCommand;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIKeyCommand *returnCommand; // @synthesize returnCommand=_returnCommand;
@property(retain, nonatomic) UIKeyCommand *shiftReturnCommand; // @synthesize shiftReturnCommand=_shiftReturnCommand;
@property(nonatomic) double contentTransitionViewOffset; // @synthesize contentTransitionViewOffset=_contentTransitionViewOffset;
@property(nonatomic) double scrollDelta; // @synthesize scrollDelta=_scrollDelta;
@property(retain, nonatomic) UIView *headerTransitionView; // @synthesize headerTransitionView=_headerTransitionView;
@property(retain, nonatomic) UIView *bottomTransitionView; // @synthesize bottomTransitionView=_bottomTransitionView;
@property(retain, nonatomic) UIView *contentTransitionView; // @synthesize contentTransitionView=_contentTransitionView;
@property(retain, nonatomic) UIView *topTransitionView; // @synthesize topTransitionView=_topTransitionView;
@property(nonatomic, getter=isTransitionAnimationBegun) _Bool transitionAnimationBegun; // @synthesize transitionAnimationBegun=_transitionAnimationBegun;
@property(nonatomic, getter=isAnimatingTransition) _Bool animatingTransition; // @synthesize animatingTransition=_animatingTransition;
@property(nonatomic) _Bool composingExpected; // @synthesize composingExpected=_composingExpected;
@property(nonatomic, getter=isKeyboardShowing) _Bool keyboardShowing; // @synthesize keyboardShowing=_keyboardShowing;
@property(nonatomic) __weak id <NSObject> keyboardHideObserver; // @synthesize keyboardHideObserver=_keyboardHideObserver;
@property(nonatomic) __weak id <NSObject> keyboardShowObserver; // @synthesize keyboardShowObserver=_keyboardShowObserver;
@property(readonly, nonatomic) double viewDidAppearTime; // @synthesize viewDidAppearTime=_viewDidAppearTime;
@property(nonatomic) _Bool adjustingContentInsets; // @synthesize adjustingContentInsets=_adjustingContentInsets;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) double initialContentBottom; // @synthesize initialContentBottom=_initialContentBottom;
@property(nonatomic) _Bool didEnterBackground; // @synthesize didEnterBackground=_didEnterBackground;
@property(retain, nonatomic) id initFreezeToken; // @synthesize initFreezeToken=_initFreezeToken;
@property(retain, nonatomic) NSMutableArray *freezeStack; // @synthesize freezeStack=_freezeStack;
@property(nonatomic) _Bool initialDataDisplayed; // @synthesize initialDataDisplayed=_initialDataDisplayed;
@property(nonatomic) _Bool reloadDataAfterProcessing; // @synthesize reloadDataAfterProcessing=_reloadDataAfterProcessing;
@property(nonatomic) _Bool forceImmediateProcessing; // @synthesize forceImmediateProcessing=_forceImmediateProcessing;
@property(nonatomic) _Bool processingStateChange; // @synthesize processingStateChange=_processingStateChange;
@property(retain, nonatomic) UIGestureRecognizer *defaultTapRecognizer; // @synthesize defaultTapRecognizer=_defaultTapRecognizer;
@property(retain, nonatomic) UIView *inputBarHidingTail; // @synthesize inputBarHidingTail=_inputBarHidingTail;
@property(retain, nonatomic) DYNTrackingInputAccessoryView *trackingInputAccessoryView; // @synthesize trackingInputAccessoryView=_trackingInputAccessoryView;
@property(retain, nonatomic) UIView<DYNTrackingInputAccessoryViewAccessibility> *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) NSLayoutConstraint *bottomBannerBottomConstraint; // @synthesize bottomBannerBottomConstraint=_bottomBannerBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *inputBarBottomConstraint; // @synthesize inputBarBottomConstraint=_inputBarBottomConstraint;
@property(retain, nonatomic) NSMutableArray *previousStates; // @synthesize previousStates=_previousStates;
@property(retain, nonatomic) DYNStreamState *pendingState; // @synthesize pendingState=_pendingState;
@property(retain, nonatomic) DYNStreamState *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSMutableDictionary *offScreenMessagesByMessageID; // @synthesize offScreenMessagesByMessageID=_offScreenMessagesByMessageID;
@property(readonly, nonatomic) NSMutableDictionary *offScreenCellsByMessageID; // @synthesize offScreenCellsByMessageID=_offScreenCellsByMessageID;
@property(retain, nonatomic) NSString *streamIdentifier; // @synthesize streamIdentifier=_streamIdentifier;
@property(readonly, nonatomic) NSSet *behaviors; // @synthesize behaviors=_behaviors;
@property(nonatomic) _Bool focusVoiceOverAfterSearch; // @synthesize focusVoiceOverAfterSearch=_focusVoiceOverAfterSearch;
@property(nonatomic) _Bool disableSwipeToDismiss; // @synthesize disableSwipeToDismiss=_disableSwipeToDismiss;
@property(readonly, nonatomic) DYNStreamID *streamID; // @synthesize streamID=_streamID;
@property(readonly, nonatomic) id <DYNTopicId> topicID;
@property(readonly, nonatomic) id <DYNGroupId> groupID;
- (long long)viewIndexToInsertErrorView;
- (long long)viewIndexToInsertBottomBanner;
- (long long)smallestSubviewIndexForViews:(id)arg1 defaultValue:(long long)arg2;
- (void)performUnreadButtonAction:(id)arg1;
- (id)createUnreadButtonHiddenConstraint;
- (id)createUnreadButtonVisibleConstraint;
- (void)removeUnreadButtonFromViewHierarchy;
- (void)addUnreadButtonToViewHierarchy;
- (void)processUnreadButtonVisibilityAnimated:(_Bool)arg1;
- (void)setUpUnreadButton;
- (void)updatePostboxIntrinsicContentSize;
- (void)logGroupEnterEventWithIsStaleData:(_Bool)arg1;
- (void)logFirstMessageStartIfNeeded;
- (void)processInitialStateChanges;
- (id)setupStatesAndStateBuilderWithAccountID:(id)arg1 streamID:(id)arg2;
- (void)updateRenderedModel:(id)arg1;
- (void)beginHandoffActivity;
- (void)logWarningAboutRejectedViewController:(id)arg1;
- (_Bool)isViewControllerAlreadyPushedOrPushing;
@property(readonly, copy) NSString *description;
- (id)visualElementParams;
- (void)setRootVisualElementIfNeededWithGroup:(id)arg1;
- (void)setUpFeedbackGesture;
- (void)feedbackGestureTriggered;
- (void)setUpFillBeneathViewBelowView:(id)arg1;
- (double)addedBottomInsetForFillBeneathView;
- (double)addedBottomInsetForBottomBannerAndFillBeneathView;
- (double)totalBottomClutterHeight;
- (void)setUpBottomBannerConstraints;
- (void)setUpPostboxInputBarHidingTailConstraints;
- (void)setUpInputBarHidingTail;
- (void)inputBarHidingTailTapped;
- (void)dataDisplayStatusUpdatedWithNewSyncStatus:(unsigned int)arg1;
- (void)dataDisplayStatusUpdated;
- (void)finalizeBehaviors;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)presentViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updatePendingStateWithConfigurator:(CDUnknownBlockType)arg1;
- (void)didTapBackButton;
- (_Bool)isStateFrozen;
- (_Bool)unfreezeStateChanges:(id)arg1;
- (id)freezeStateChanges:(id)arg1 withMaxDuration:(double)arg2 userDriven:(_Bool)arg3;
- (id)freezeStateChanges:(id)arg1 userDriven:(_Bool)arg2;
- (void)updateModelObjectInContentView:(id)arg1 atIndexPath:(id)arg2;
- (void)updateModelsAndConfigureReadAnimations;
- (id)sufficientlyVisibleIndexPathsPredicate;
- (id)indexPathsForSufficientlyVisibleItems;
- (id)messageContentViewForCell:(id)arg1;
- (id)objectContentViewForCell:(id)arg1;
- (void)processCenterBannerChangedWithOldState:(id)arg1;
- (void)removeBottomBannerFromSuperview:(id)arg1;
- (void)processBottomBannerDismissed;
- (void)forceImmediateStateProcessing;
- (id)messageAtIndexPath:(id)arg1;
- (void)handleTapRecoginzer;
- (void)setUpGestureRecognizers;
- (id)indexPathForReplyButtonWithTopicID:(id)arg1;
- (id)indexPathForVisibleMessageId:(id)arg1;
- (void)styleCollectionView;
- (double)getActionSheetHeight;
- (id)objectAtCheckedIndex:(long long)arg1 inArray:(id)arg2;
- (void)updateNewBadgeAnimations;
- (void)dyn_dismissModalViewController;
- (void)hardwareEnterHit;
- (void)hardwareSoftEnterHit;
- (void)startKeyboardCommandObservations;
- (void)resolvePendingStateConflictingEvents;
- (void)checkForSizeChangeAndInvalidateLayoutIfNeeded;
- (void)unregisterBanner;
- (void)registerBanner;
- (id)visualElementParamsAtIndexPath:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)bottomSheetControllerDidCancel:(id)arg1;
- (void)handleVoiceOverStatusChanged;
- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (void)applicationWillResignActive;
- (void)deleteDraftNow;
- (void)setBusyTaskCardDetails:(id)arg1;
- (void)updateDraftManagementBehaviorFromBehaviors;
- (void)processPendingAddedBehaviors;
- (void)processPendingRemovedBehaviors;
- (void)processTransitionAnimationNeeded;
- (void)processModalPresentationWithOldState:(id)arg1;
- (void)processDismissStreamAndPresentConversationPickerController:(id)arg1;
- (void)onPushCompleted;
- (void)processPushWanted;
- (void)clearPresentedAndCloseSelf:(id)arg1;
- (_Bool)didDismissViaOdeonTransitionToRoot:(_Bool)arg1;
- (void)popToFormerViewController;
- (void)processPopWanted;
- (void)processDismissAlertDialog;
- (void)processShowAlertDialog;
- (void)processPopToRootWanted;
- (void)processEmbeddingEmptyStateView;
- (void)processBottomSheet;
- (void)processActionSheet;
- (void)processErrorViewControllerChangeWithOldState:(id)arg1;
- (void)processErrorViewChangeWithOldState:(id)arg1;
- (void)endEditingIfMessageDeletedFromOldState:(id)arg1;
- (_Bool)getTopVisibleMessageID:(out id *)arg1 topVisibleIndexPath:(out id *)arg2;
- (void)processModelChange;
- (void)processFirstModelChange;
- (void)processModelChangeoldState:(id)arg1;
- (void)setNavBarBottomView:(id)arg1;
- (void)setNavigationItemTitle:(id)arg1 titleView:(id)arg2 titleViewIsSelfSizing:(_Bool)arg3;
- (void)setNavigationItemRightButton:(id)arg1 additionalRightButtons:(id)arg2;
- (void)setupBackButtonInterceptWithCurrentBackButton;
- (void)setNavigationItemBackButton:(id)arg1;
- (void)processStreamHeaderViewChanged;
- (void)updateHeaderOnNextRunLoop;
- (void)processHeaderChanged;
- (void)processComposingWanted:(_Bool)arg1;
- (void)processComposingChange;
- (void)processBottomBannerChanged;
- (void)processPostBoxChange;
- (void)tryFocusVoiceOverOnNoResults;
- (void)focusVoiceOverOnSearchResultsIfNeeded;
- (void)checkForScheduledDialog;
- (void)processStateChanged;
- (id)getStateBuilder;
- (void)establishProcessStateChangeTimer;
- (void)clearProcessStateChangeTimerIfAny;
- (void)updatePendingState:(id)arg1;
- (void)reachabilityStatusDidChange:(id)arg1;
- (void)actionSheetDidDismiss:(id)arg1 canceled:(_Bool)arg2;
- (_Bool)isLandingViewControllerForUrl:(id)arg1;
- (_Bool)isLandingViewControllerForTopic:(id)arg1;
- (_Bool)isLandingViewControllerForGroup:(id)arg1;
- (unsigned int)appLaunchDestination;
- (void)invalidateAppLaunchMetricsForReason:(id)arg1;
- (void)logFreshDataDisplayed;
- (void)logStaleDataDisplayed;
- (void)viewDidBecomeActiveAsTopViewController;
- (void)composerWillClose;
- (_Bool)hasPendingContent;
- (void)setUnknownContentEncounteredInMultiGroupView;
- (void)scrollToNewPostRoomMessageWanted;
- (void)createPostTopicWanted;
- (void)groupInfoViewWanted;
- (void)invokeDialogForMessage:(id)arg1;
- (void)setSuggestedSlashCommands:(id)arg1;
- (void)setSpamDirectMessagesFetchWanted;
- (void)setSelectedRoomTab:(int)arg1;
- (void)createDirectMessageFailedWithError:(id)arg1;
- (void)createDirectMessageSucceededWithSummary:(id)arg1;
- (void)setMessageDeliveryState:(int)arg1;
- (void)setInboundDirectMessageCreated;
- (void)setCreatingDirectMessage:(_Bool)arg1;
- (void)setBlockStateChangedEvent:(id)arg1;
- (void)setMessageEvents:(id)arg1;
- (void)setStreamHeaderView:(id)arg1;
- (void)logRenderOfBumpingBarState:(id)arg1;
- (void)realTimeMessageAdded:(id)arg1;
- (void)didJoinGroup;
- (void)setBumpingBarState:(id)arg1;
- (void)setPinnedTopicID:(id)arg1;
- (id)groupId;
- (_Bool)isPostboxEmpty;
- (_Bool)isPreviewStream;
- (void)cullViewControllersExceptSelfAndWorldView;
- (void)postboxVideoCallChipWanted;
- (void)setUnsupportedGroupErrorOccurred:(_Bool)arg1;
- (void)setAlignContentToTop:(_Bool)arg1;
- (void)setStickyToTopScrollView:(_Bool)arg1;
- (void)setStickyToBottomScrollView:(_Bool)arg1;
- (void)setSearchState:(id)arg1;
- (void)setStreamInPreview:(_Bool)arg1;
- (void)setPendingRetentionStateUpdatedMessageIDs:(id)arg1;
- (void)setGroupRetentionStateUpdated:(id)arg1;
- (void)setGroupEncounteredError:(id)arg1 forGroupID:(id)arg2;
- (void)setGroupJoinedGroupID:(id)arg1;
- (void)setMembershipRemovedGroupID:(id)arg1;
- (void)setReadReceiptsSubscriptionToken:(id)arg1;
- (void)setReadReceiptsEnabled:(_Bool)arg1;
- (void)setReadReceipts:(id)arg1;
- (void)setGroupInfoSubscriptionToken:(id)arg1;
- (void)groupSubscriptionWanted;
- (void)jumpToBottomWanted;
- (void)mostRecentTopicsWanted;
- (void)setPullToBumpView:(id)arg1;
- (void)setFixedScrollOffset:(_Bool)arg1;
- (void)didToggleMuteState;
- (void)setMembers:(id)arg1 invitedMemberIds:(id)arg2;
- (void)membershipInfoWanted;
- (void)groupSearchWanted;
- (void)setBlockingRoom:(_Bool)arg1;
- (void)didJoinRoom;
- (void)embedEmptyStateView:(id)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) UIView *streamView;
- (void)processStreamBackgroundColorChange;
- (void)setStreamBackgroundColor:(id)arg1;
- (void)setUnreadButtonVisible:(_Bool)arg1;
- (void)setInitialReadTimestampIncludingMarkAsUnread:(long long)arg1;
- (void)setInitialReadTimestamp:(long long)arg1;
@property(readonly, nonatomic) unsigned int dataSyncStatus;
- (void)setDataSyncStatus:(unsigned int)arg1;
- (void)didSelectDirectMessageWithUser:(id)arg1;
- (void)clearForwardingMessage;
- (void)didSelectForwardMessage:(id)arg1;
- (void)setHistoryStateConflict;
- (void)addNewMembersConfirmed;
- (void)aclFixerAllowMessageSend;
- (void)postboxSendButtonStatusChanged:(_Bool)arg1;
- (void)sendPostboxContentWanted;
- (void)sendMessageWanted;
- (void)resendMessageWanted:(id)arg1;
- (void)setACLFixerState:(id)arg1;
- (void)unsubscribeAsACLFixerBehavior;
- (void)subscribeAsACLFixerBehavior;
- (void)fetchPostboxPreviewAnnotationsWanted;
- (void)messageLinksDidChange;
- (void)offTheRecordStateFetchWanted;
- (void)setOffTheRecordState:(id)arg1;
- (void)saveDraftWanted;
- (void)setDraft:(id)arg1;
- (void)setPostboxContent:(id)arg1;
- (void)setRequestedPeopleSheetUserId:(id)arg1;
- (void)setPostboxBlockedViewUser:(id)arg1;
- (void)setPostboxBlockedViewType:(int)arg1;
- (void)setTopicDeleted;
- (void)setHeaderContentViewObject:(id)arg1;
- (void)setHeaderWanted:(_Bool)arg1 forceRefresh:(_Bool)arg2;
- (void)setStreamID:(id)arg1;
- (void)networkReconnected;
- (void)triggerModelReload;
- (void)startTimerTime:(double)arg1 forStreamChange:(CDUnknownBlockType)arg2;
- (void)addRenderDelegate:(id)arg1;
- (void)addQueuedEvent:(id)arg1;
- (void)addViewDelegate:(id)arg1;
- (void)dismissModalViewController:(id)arg1;
- (void)showModalViewController:(id)arg1;
- (void)dismissStreamAndPresentConversationPickerController:(id)arg1;
- (_Bool)replaceWithViewController:(id)arg1;
- (_Bool)pushViewController:(id)arg1 navigationOptions:(id)arg2;
- (void)popToRootViewController;
- (void)setGroup:(id)arg1;
- (void)setIsOffTheRecord:(_Bool)arg1;
- (void)setTopicID:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setPaginateDownAvailable:(_Bool)arg1;
- (void)setPaginateUpAvailable:(_Bool)arg1;
- (void)tapGestureIntercept:(_Bool)arg1;
- (void)showTopRoomTabBar;
- (void)displayToastWithMessage:(id)arg1 forceDisplay:(_Bool)arg2 focusOnShow:(_Bool)arg3 longDuration:(_Bool)arg4;
- (void)displayToastWithMessage:(id)arg1 forceDisplay:(_Bool)arg2;
- (void)setErrorViewController:(id)arg1;
- (void)displayErrorView:(id)arg1;
- (void)hideBottomSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)showBottomSheetWithViewController:(id)arg1;
- (void)hideActionSheet;
- (void)showActionSheet:(id)arg1;
- (void)postedMessageFailedWithError:(id)arg1;
- (void)postedMessage:(id)arg1;
- (void)setNavBarHidden:(_Bool)arg1;
- (void)setNavSettings:(id)arg1;
- (void)setHighlightedMessage:(id)arg1;
- (void)handleInteractionWithAttributes:(id)arg1;
- (void)setSelectedMessageForShowingReadReceiptAvatars:(id)arg1;
- (void)setSelectedMessage:(id)arg1;
- (void)requestDeleteMessage:(id)arg1;
- (void)removedMessageWithId:(id)arg1;
- (void)updatedMessage:(id)arg1;
- (void)addedMessage:(id)arg1;
- (void)invalidateStream;
- (void)setPaginateDownCompleted;
- (void)stopOptionalLoadingWithUniqueNamespacedReason:(id)arg1;
- (void)stopLoadingWithUniqueNamespacedReason:(id)arg1;
- (void)startLoadingWithUniqueNamespacedReason:(id)arg1;
- (void)setPagingDown:(_Bool)arg1;
- (void)setPagingUp:(_Bool)arg1;
- (void)setComposerHasContent:(_Bool)arg1;
- (void)setNumberOfSmartRepliesDisplayed:(unsigned long long)arg1;
- (void)setSmartReplyList:(id)arg1;
- (void)setScrollToTop;
- (void)setScrollToMessage:(id)arg1;
- (void)setFocusedMessageID:(id)arg1;
- (void)setScrollToBottomAnimated:(_Bool)arg1 stopCurrentScroll:(_Bool)arg2;
- (void)setDidShowHistoryOffWarningInSession;
- (void)setTopTabbedRoomBanner:(id)arg1;
- (void)setCenterBanner:(id)arg1;
- (void)dismissBottomBanner:(id)arg1 animated:(_Bool)arg2;
- (void)setBottomBanner:(id)arg1 withFillBeneathColor:(id)arg2;
- (void)setPostbox:(id)arg1;
- (void)updateFirstResponderState:(_Bool)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)stopComposing;
- (void)clearComposingPrefilledSmartReply;
- (void)startComposingWithPrefilledSmartReply:(id)arg1;
- (void)startComposing;
- (void)setEditMessageWarningShown:(_Bool)arg1;
- (void)stopDynamicDM;
- (void)setDynamicDMMember:(id)arg1;
- (void)setDynamicDMMemberForSelectedUsers;
- (void)stopEditing;
- (void)startEditing:(id)arg1;
- (void)resetState;
- (void)updateUsersForDMCreation:(id)arg1 emailAddressesNotFound:(id)arg2;
- (void)completeFetchWithSuccess:(_Bool)arg1;
- (id)modelProcessedByRenderDelegatesWithPendingState:(id)arg1;
- (void)updateModel:(id)arg1 refreshObject:(id)arg2 initialFetch:(_Bool)arg3;
- (void)updateModel:(id)arg1 initialFetch:(_Bool)arg2 keepRelativeOffset:(_Bool)arg3;
- (void)updateModel:(id)arg1 initialFetch:(_Bool)arg2;
- (void)deselectMessageBeforeDeletionIfNeeded:(id)arg1;
- (void)requestToShowDialog:(id)arg1;
- (void)removeBehavior:(id)arg1;
- (void)addBehaviors:(id)arg1;
- (void)setPromptActions:(id)arg1;
- (void)setShowChannelAssistDialog:(_Bool)arg1;
- (void)setChannelAssistShownState:(unsigned int)arg1;
- (void)setFABBufferWithBottomInset:(double)arg1;
- (void)printDebugInformation;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)handleJustDisplayedMessage:(id)arg1 inCollectionView:(id)arg2;
- (void)handleJustDisplayedMessageIDs:(id)arg1;
- (void)checkOffScreenCellsOnCollectionViewDidScroll:(id)arg1 offScreenCellsCount:(unsigned long long)arg2;
- (void)checkOffScreenCellsOnScrollViewDidScroll:(id)arg1;
- (void)handleObscuredCell:(id)arg1 forMessage:(id)arg2;
- (void)handleSufficientlyVisibleCellWillDisplay:(id)arg1 forMessage:(id)arg2 atIndexPath:(id)arg3;
- (void)handleCellWillDisplay:(id)arg1 forMessage:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)visualElementParamsForItemAtIndexPath:(id)arg1;
- (void)requestToDismissDialogIfNeeded;
- (void)setUpHeaderView;
- (void)bringHeaderViewToFront;
- (void)hideProgressBar;
- (void)showProgressBar;
- (id)inputAccessoryView;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setSwipeToDismissGestureEnabled:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dynamicFontSizeChanged:(id)arg1;
- (void)viewDidLoad;
- (_Bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)initWithStreamID:(id)arg1 accountID:(id)arg2 stateConfigurationBlock:(CDUnknownBlockType)arg3 andBehaviors:(id)arg4 shouldShowBanner:(_Bool)arg5 headerParentViewController:(id)arg6;
- (void)handleScrolledToTop;
- (void)setCollectionViewContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (double)calculateStickyOffsetFromBottomOffset:(double)arg1;
- (double)addedTopInsetForUnusedContentSpace:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)desiredContentInsetsWithUnusedContentSpace:(out _Bool *)arg1;
- (unsigned long long)contentInsetAnimationOptions;
- (void)scrollToFixedOffsetAnimated:(_Bool)arg1;
- (void)scrollToPinnedTopicReplyButton;
- (void)scrollToSelectedMessage;
- (void)scrollToDesiredPosition;
- (void)scrollToSelectedMessageOrStickyEndAnimated:(_Bool)arg1;
- (void)adjustContentInsetsTo:(struct UIEdgeInsets)arg1 andUpdateScrollAnimated:(_Bool)arg2;
- (void)setContentInsets:(struct UIEdgeInsets)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isEditingStillVisible:(struct CGPoint)arg1;
- (void)updateStickyStateAfterScrolling;
- (void)moveInputBarIfNeededOnScrollViewScroll:(id)arg1;
- (void)adjustInputBarIfNeeded;
- (double)pullToBumpBarHeight;
- (double)addedTopInsetForCenterBanner;
- (double)addedBottomInsetForBottomBanner;
- (void)adjustErrorViewFrame;
- (void)adjustPositionOfMessageWithIDToTop:(id)arg1 originalIndexPath:(id)arg2;
- (void)scrollToNewlyEditingMessageIfNeeded;
- (void)scrollToBottomWithoutStateChangeAnimated:(_Bool)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (_Bool)cellIsVisibleConsideringInsetsAtIndexPath:(id)arg1;
- (void)scrollReplyButtonToPosition:(unsigned long long)arg1 withTopicID:(id)arg2 animated:(_Bool)arg3;
- (void)scrollMessageToPosition:(unsigned long long)arg1 withMessageID:(id)arg2 animated:(_Bool)arg3;
- (void)updateScrollingPendingState:(id)arg1;
- (_Bool)isScrolledToEnd;
- (_Bool)isScrolledToBottom;
- (_Bool)adjustContentInsetsIfNeeded;
- (void)setUpCollectionViewInsetsProperties;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setKeyboardHeightWithUserInfo:(id)arg1;
- (void)stopKeyboardObservations;
- (void)startKeyboardObservations;
- (void)updateKeyboardSubscriptionIfNeeded;
- (void)resetKeyboardObservations;
- (double)adjustedKeyboardHeight;
- (void)removeViewTransitionAnimation;
- (void)animateViewTransition;
- (void)prepareViewTransitionAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

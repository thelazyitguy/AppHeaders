//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1OnboardingPresenterFlowTransitionCustomization-Protocol.h>
#import <T1Twitter/T1OnboardingTweetActionListEventHandlerDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingWaitable-Protocol.h>

@class NSArray, NSMutableArray, NSString, T1OnboardingTweetActionListPromptView, T1StatusLiveEngagementManager, T1StatusTableRowAdapter, TFNTwitterAccount, TFNTwitterStatus, TFNViewDataViewAdapter;
@protocol T1OnboardingTweetActionListViewControllerDelegate;

@interface T1OnboardingTweetActionListViewController : TFNItemsDataViewController <T1OnboardingPresenterFlowTransitionCustomization, T1OnboardingTweetActionListEventHandlerDelegate, T1OnboardingWaitable>
{
    _Bool _firstUpdate;
    _Bool _hasShownAnchoredPrompt;
    _Bool _startedTimelineTransition;
    _Bool _needsDeferredUpdate;
    _Bool _needsDeferredPromptedTweetUpdates;
    NSMutableArray *_tweetGroups;
    NSString *_title;
    NSString *_nextLabel;
    NSString *_skipLabel;
    NSString *_flowToken;
    NSString *_promptConfirmationText;
    NSMutableArray *_tweetActionResponses;
    T1OnboardingTweetActionListPromptView *_promptView;
    T1StatusLiveEngagementManager *_livePipelineTweetManager;
    T1StatusTableRowAdapter *_statusTableRowAdapter;
    TFNTwitterStatus *_deferredPromptedTweet;
    TFNTwitterStatus *_promptedTweet;
    TFNViewDataViewAdapter *_viewDataViewAdapter;
    id <T1OnboardingTweetActionListViewControllerDelegate> _delegate;
    _Bool _isCurrentlyWaitingForFetchingTweetGroups;
    TFNTwitterAccount *_account;
    long long _requestCount;
}

- (void).cxx_destruct;
@property long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) _Bool isCurrentlyWaitingForFetchingTweetGroups; // @synthesize isCurrentlyWaitingForFetchingTweetGroups=_isCurrentlyWaitingForFetchingTweetGroups;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)private_updateContentInsetScrollToBottom:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)private_updatePromptViewFrameAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)private_updatePromptViewContent;
- (void)private_updatePromptWithTweet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)private_updateContentInset;
- (id)private_tweetsInTweetGroups:(id)arg1;
- (id)private_tweetChoices:(id)arg1 byRemovingTweetsInSet:(id)arg2;
- (void)private_addDataItemsToArray:(id)arg1 excludingTitle:(id)arg2 includingTweetsFilteredWithBlock:(CDUnknownBlockType)arg3 multiple:(_Bool)arg4 lastTitle:(out id *)arg5 lastTweet:(out id *)arg6;
- (id)private_tweetsForTweetIDs:(id)arg1;
- (id)private_respondedTweetsKeepOnly:(_Bool)arg1;
- (id)private_itemsWithPromptedTweet:(id *)arg1;
- (void)private_handleSelectionForAction:(id)arg1;
- (id)private_buttonSpecsForActions:(id)arg1 buttonLayout:(long long)arg2;
- (id)private_textSpecForRichText:(id)arg1;
- (_Bool)private_isToolbarAction:(id)arg1;
- (id)private_promptToolbarActionIfPresent;
- (_Bool)private_promptShouldFloat;
- (unsigned long long)private_promptDisplayOptions;
- (id)private_promptActionButtonSpecs;
- (id)private_promptSecondaryTextSpec;
- (id)private_promptPrimaryTextSpec;
- (void)private_updateToolbar;
- (void)private_nextTapped:(id)arg1;
- (void)private_skipTapped:(id)arg1;
- (id)private_scribeElementForStatuaViewEvent:(id)arg1;
- (_Bool)shouldAnimateAccountChangeTransitionForPresenter:(id)arg1;
- (id)animationControllerModalSheetDismissalWithPresenter:(id)arg1 viewController:(id)arg2;
- (void)stopWaiting;
- (void)waitWithMessage:(id)arg1;
- (_Bool)canWaitWithMessage:(id)arg1;
- (void)tweetActionListEventHandler:(id)arg1 didReceiveStatusViewEvent:(id)arg2;
- (_Bool)addTweetGroupsFromFetchTweetsResponse:(id)arg1;
@property(readonly, nonatomic) NSArray *tweetActionResponses;
- (void)update:(_Bool)arg1;
- (void)dataViewDidUpdate:(_Bool)arg1;
- (id)scribeSection;
- (id)scribePage;
- (_Bool)tfn_logoTitleViewShown;
- (long long)tfn_preferredToolbarVisibility;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)startTimelineTransitionWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAccount:(id)arg1 flowToken:(id)arg2 tweetGroups:(id)arg3 title:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


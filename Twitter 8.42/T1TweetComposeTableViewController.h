//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1TweetComposeReplyContextViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1TweetComposeSingleTweetViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1TweetComposeThreadContextViewControllerDelegate-Protocol.h>
#import <T1Twitter/UITableViewDataSource-Protocol.h>
#import <T1Twitter/UITableViewDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, T1TweetComposeReplyContextViewController, T1TweetComposeSingleTweetViewController, T1TweetComposeTableView, T1TweetComposeThreadContextViewController, TFNTwitterAccount, TFSMainThreadRunLoopDeferredTask, TFSTwitterScribeContext, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol T1TweetComposeTableViewControllerDelegate;

@interface T1TweetComposeTableViewController : UIViewController <T1TweetComposeSingleTweetViewControllerDelegate, T1TweetComposeReplyContextViewControllerDelegate, T1TweetComposeThreadContextViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _loadedCompositionFromDrafts;
    _Bool _isInWindowScene;
    _Bool _mixedMediaGIFCreationEnabled;
    _Bool _didLoadLatestTweets;
    TFSTwitterScribeContext *_scribeContext;
    double _visibleContentBottom;
    unsigned long long _replyContextViewState;
    TFNTwitterAccount *_account;
    long long _activeTweetIndex;
    UIView *_headerBackgroundView;
    UIView *_headerBackgroundBorderView;
    T1TweetComposeTableView *_tableView;
    T1TweetComposeReplyContextViewController *_replyContextViewController;
    T1TweetComposeThreadContextViewController *_threadContextViewController;
    TFSMainThreadRunLoopDeferredTask *_currentScrollToCursorTask;
    id <T1TweetComposeTableViewControllerDelegate> _delegate;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    NSMutableArray *_singleTweetControllers;
    NSMapTable *_composeTableCells;
}

+ (void)setNeedsToPresentThreadContextNUX:(_Bool)arg1;
+ (_Bool)needsToPresentThreadContextNUX;
+ (void)_t1_threadContextNUXDidPresent;
+ (long long)threadContextFatigueCount;
+ (void)setThreadContextFatigueCount:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *composeTableCells; // @synthesize composeTableCells=_composeTableCells;
@property(readonly, nonatomic) NSMutableArray *singleTweetControllers; // @synthesize singleTweetControllers=_singleTweetControllers;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapRecognizer; // @synthesize singleTapRecognizer=_singleTapRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(nonatomic) __weak id <T1TweetComposeTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFSMainThreadRunLoopDeferredTask *currentScrollToCursorTask; // @synthesize currentScrollToCursorTask=_currentScrollToCursorTask;
@property(retain, nonatomic) T1TweetComposeThreadContextViewController *threadContextViewController; // @synthesize threadContextViewController=_threadContextViewController;
@property(retain, nonatomic) T1TweetComposeReplyContextViewController *replyContextViewController; // @synthesize replyContextViewController=_replyContextViewController;
@property(nonatomic) _Bool didLoadLatestTweets; // @synthesize didLoadLatestTweets=_didLoadLatestTweets;
@property(retain, nonatomic) T1TweetComposeTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *headerBackgroundBorderView; // @synthesize headerBackgroundBorderView=_headerBackgroundBorderView;
@property(retain, nonatomic) UIView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
@property(nonatomic) long long activeTweetIndex; // @synthesize activeTweetIndex=_activeTweetIndex;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic, getter=isMixedMediaGIFCreationEnabled) _Bool mixedMediaGIFCreationEnabled; // @synthesize mixedMediaGIFCreationEnabled=_mixedMediaGIFCreationEnabled;
@property(readonly, nonatomic) _Bool isInWindowScene; // @synthesize isInWindowScene=_isInWindowScene;
@property(nonatomic) unsigned long long replyContextViewState; // @synthesize replyContextViewState=_replyContextViewState;
@property(nonatomic) double visibleContentBottom; // @synthesize visibleContentBottom=_visibleContentBottom;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) _Bool loadedCompositionFromDrafts; // @synthesize loadedCompositionFromDrafts=_loadedCompositionFromDrafts;
- (struct CGRect)alignmentRectForAccessoryView;
- (void)singleTweetViewControllerDragStateDidChange:(id)arg1;
- (void)singleTweetViewControllerDidChangeSelectedPlace:(id)arg1;
- (void)singleTweetViewControllerDidUpdatePlaceSelectionSupport:(id)arg1;
- (void)singleTweetViewControllerDidTapGeoButtonWithPlace:(id)arg1;
- (void)singleTweetViewControllerDidTapGeoSearchButton:(id)arg1;
- (void)singleTweetViewControllerDidTapGeoButton:(id)arg1;
- (void)singleTweetViewController:(id)arg1 didChangePollCard:(id)arg2;
- (void)singleTweetViewController:(id)arg1 didRemovePollCard:(id)arg2;
- (void)singleTweetViewController:(id)arg1 didBeginEditingPollCard:(id)arg2;
- (void)singleTweetViewController:(id)arg1 didAddPollCard:(id)arg2;
- (void)singleTweetViewController:(id)arg1 didRemoveCardPreview:(id)arg2;
- (void)singleTweetViewController:(id)arg1 didShowCardPreview:(id)arg2;
- (void)singleTweetViewController:(id)arg1 registerView:(id)arg2 forTooltipIdentifier:(id)arg3;
- (void)singleTweetViewController:(id)arg1 didTapLivePhotoToggleButtonForAttachment:(id)arg2;
- (void)singleTweetViewController:(id)arg1 didTapAltTextForAttachment:(id)arg2;
- (void)singleTweetViewController:(id)arg1 didTapStickerForAttachment:(id)arg2;
- (void)singleTweetViewController:(id)arg1 didTapAttachment:(id)arg2;
- (void)singleTweetViewController:(id)arg1 didUpdateFromOldAttachments:(id)arg2;
- (void)singleTweetViewController:(id)arg1 didRemoveAttachment:(id)arg2;
- (void)singleTweetViewController:(id)arg1 didAddAttachment:(id)arg2;
- (void)singleTweetViewController:(id)arg1 tweetTextDidChange:(id)arg2;
- (void)switchToPreviewMode;
- (void)singleTweetViewControllerDidBecomeFirstResponder:(id)arg1;
- (void)singleTweetViewController:(id)arg1 didSwitchToAccount:(id)arg2;
- (void)singleTweetViewControllerDidTapRemoveTweetButton:(id)arg1;
- (void)singleTweetViewControllerDidTapOnTweet:(id)arg1;
- (void)singleTweetViewControllerDidChange:(id)arg1;
- (void)threadContextViewControllerDidCloseNUX:(id)arg1;
- (void)threadContextViewController:(id)arg1 didLoadLatestTweet:(id)arg2;
- (void)threadContextViewController:(id)arg1 didUpdateRepliedToStatus:(id)arg2;
- (void)replyContextViewController:(id)arg1 didUpdateRepliedToStatus:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_t1_updateGeoPermission:(id)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)_t1_presentThreadContextNUXIfNeeded;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_t1_updateReplyContextViewState;
- (void)_t1_updateContentInsets;
- (void)_t1_layoutHeaderBackgroundView;
- (void)_t1_layoutThreadContextView;
- (void)_t1_layoutReplyContextView;
- (void)viewDidLayoutSubviews;
- (_Bool)_t1_isValidIndex:(long long)arg1;
- (void)_t1_activateSingleTweetViewController:(id)arg1;
- (long long)_t1_indexForSingleTweetViewController:(id)arg1;
@property(readonly, nonatomic) T1TweetComposeSingleTweetViewController *activeTweetViewController;
- (_Bool)tweetsAreWorthSending;
- (_Bool)tweetsAreWorthSaving;
- (_Bool)tweetsAreBeingPreviewed;
- (void)_t1_updateViewState;
- (void)_t1_updateKeyboardDismissMode;
- (void)_t1_scrollToCursorWithAnimations:(CDUnknownBlockType)arg1;
- (void)_t1_scrollToActiveTweetWithAnimations:(CDUnknownBlockType)arg1;
- (void)_t1_scrollToActiveTweet;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (double)_t1_replyContextViewRevealedHeight;
- (void)_t1_completeThreadContextNUXIfNeeded;
- (_Bool)_t1_isReplyContextViewBeingRevealed;
- (void)_t1_updateReplyContextViewRevealed;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_t1_didSingleTap:(id)arg1;
- (void)_t1_didLongPress:(id)arg1;
@property(readonly, nonatomic) struct CGRect contentFrame;
@property(readonly, nonatomic) unsigned long long numberOfTweets;
- (_Bool)_t1_shouldUseThreadContextController;
- (void)_t1_didChangeSingleTweetControllers;
- (void)_t1_updateSingleTweetController:(id)arg1 withExpectedIndex:(long long)arg2 expectedTweetCount:(long long)arg3;
- (void)_t1_addSingleTweetControllersForCompositions:(id)arg1 startingAtIndex:(long long)arg2;
- (void)_t1_addSingleTweetControllersForCompositions:(id)arg1;
- (void)_t1_removeSingleTweetControllerFromTweetstorm:(id)arg1;
- (void)addEmptyTweetToTweetstorm;
@property(copy, nonatomic) NSArray *compositions;
- (void)_t1_updateContextController;
- (id)compositionsWithGeotagInfoForActiveGeoButton:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 scribeContext:(id)arg2 delegate:(id)arg3 compositions:(id)arg4 mixedMediaGIFCreationEnabled:(_Bool)arg5 inWindowScene:(_Bool)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingViewController.h"

#import "CarouselDelegatorDelegate-Protocol.h"
#import "FeedElementObserver-Protocol.h"
#import "FeedPostCellNodeDelegate-Protocol.h"
#import "FeedPostCollectionCellNodeDelegate-Protocol.h"
#import "FeedPostGalleryCellNodeDelegate-Protocol.h"
#import "FeedPresentable-Protocol.h"
#import "FeedViewControllerInterface-Protocol.h"
#import "HeaderBarViewDelegate-Protocol.h"
#import "LiveBannerContentViewDelegate-Protocol.h"
#import "PostActionSheetDelegate-Protocol.h"
#import "PreviewModeDelegate-Protocol.h"
#import "SuspendedBannerContentViewDelegate-Protocol.h"
#import "TheatreViewControllerDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"
#import "_TtP8RedditUI29RedditTabBarControllerHandler_-Protocol.h"

@class ASBatchContext, ASCollectionNode, AnalyticsEvent, CarouselDelegator, FeedModeSelectionController, FeedNavigator, FeedPresenter, FeedSortOptionController, FeedViewControllerDelegator, FloatingHeaderManager, NSArray, NSString, NSURL, PreviewAnimationController, RailsEntryPointDelegator, UICollectionView, UICollectionViewFlowLayout, UIScrollView, _TtC6Reddit25FeedRefreshPillController, _TtC6Tracer16ObjCTraceContext;
@protocol _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface FeedViewController : ListingViewController <CarouselDelegatorDelegate, LiveBannerContentViewDelegate, SuspendedBannerContentViewDelegate, TheatreViewControllerDelegate, PreviewModeDelegate, FeedElementObserver, FeedViewControllerInterface, FeedPresentable, FeedPostCellNodeDelegate, FeedPostGalleryCellNodeDelegate, HeaderBarViewDelegate, PostActionSheetDelegate, FeedPostCollectionCellNodeDelegate, _TtP8RedditUI29RedditTabBarControllerHandler_, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_>
{
    _Bool _previewModeEnabled;
    _Bool _didLoadSortBarOnce;
    UICollectionView *_feedCollectionView;
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    FeedNavigator *_navigator;
    FeedViewControllerDelegator *_feedVCDelegator;
    _TtC6Reddit25FeedRefreshPillController *_feedRefreshPillController;
    FloatingHeaderManager *_floatingHeaderManager;
    ASBatchContext *_currentBatchContext;
    PreviewAnimationController *_previewAnimationController;
    CarouselDelegator *_carouselDelegator;
    RailsEntryPointDelegator *_railsEntryPointDelegator;
    CDUnknownBlockType _onWillSendEvent;
    ASCollectionNode *_feedCollectionNode;
    UICollectionViewFlowLayout *_feedFlowLayout;
    FeedSortOptionController *_sortOptionController;
    FeedModeSelectionController *_feedModeSelectionController;
    double _maxHlsVideoHeight;
    _TtC6Tracer16ObjCTraceContext *_timeToInteractiveTraceContext;
    NSArray *_observations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *observations; // @synthesize observations=_observations;
@property(retain, nonatomic) _TtC6Tracer16ObjCTraceContext *timeToInteractiveTraceContext; // @synthesize timeToInteractiveTraceContext=_timeToInteractiveTraceContext;
@property(nonatomic) _Bool didLoadSortBarOnce; // @synthesize didLoadSortBarOnce=_didLoadSortBarOnce;
@property(nonatomic) double maxHlsVideoHeight; // @synthesize maxHlsVideoHeight=_maxHlsVideoHeight;
@property(retain, nonatomic) FeedModeSelectionController *feedModeSelectionController; // @synthesize feedModeSelectionController=_feedModeSelectionController;
@property(retain, nonatomic) FeedSortOptionController *sortOptionController; // @synthesize sortOptionController=_sortOptionController;
@property(retain, nonatomic) UICollectionViewFlowLayout *feedFlowLayout; // @synthesize feedFlowLayout=_feedFlowLayout;
@property(retain, nonatomic) ASCollectionNode *feedCollectionNode; // @synthesize feedCollectionNode=_feedCollectionNode;
@property(copy, nonatomic) CDUnknownBlockType onWillSendEvent; // @synthesize onWillSendEvent=_onWillSendEvent;
@property(retain, nonatomic) RailsEntryPointDelegator *railsEntryPointDelegator; // @synthesize railsEntryPointDelegator=_railsEntryPointDelegator;
@property(retain, nonatomic) CarouselDelegator *carouselDelegator; // @synthesize carouselDelegator=_carouselDelegator;
@property(retain, nonatomic) PreviewAnimationController *previewAnimationController; // @synthesize previewAnimationController=_previewAnimationController;
@property(nonatomic) _Bool previewModeEnabled; // @synthesize previewModeEnabled=_previewModeEnabled;
@property(retain, nonatomic) ASBatchContext *currentBatchContext; // @synthesize currentBatchContext=_currentBatchContext;
@property(retain, nonatomic) FloatingHeaderManager *floatingHeaderManager; // @synthesize floatingHeaderManager=_floatingHeaderManager;
@property(retain, nonatomic) _TtC6Reddit25FeedRefreshPillController *feedRefreshPillController; // @synthesize feedRefreshPillController=_feedRefreshPillController;
@property(retain, nonatomic) FeedViewControllerDelegator *feedVCDelegator; // @synthesize feedVCDelegator=_feedVCDelegator;
@property(retain, nonatomic) FeedNavigator *navigator; // @synthesize navigator=_navigator;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
- (void)commentBarNodeDidTapCommentButton:(id)arg1;
- (void)didTapPostVideoEmbedNode:(id)arg1 post:(id)arg2;
- (void)didTapPowerupsMarketingBadgeFor:(id)arg1 powerupsInfo:(id)arg2 preselectedBenefit:(long long)arg3;
- (void)didTapBroadcastCtaButtonFromRedditVideoPlayerView:(id)arg1 post:(id)arg2 shouldLoadSubreddit:(_Bool)arg3;
- (void)didTapTimeIndicatorFromRedditVideoPlayerView:(id)arg1 post:(id)arg2;
- (void)didTapCallToActionFromRedditVideoPlayerView:(id)arg1 post:(id)arg2 callToAction:(id)arg3;
- (void)didTapViewFromRedditVideoPlayerView:(id)arg1 post:(id)arg2 videoIsLive:(_Bool)arg3;
- (void)didTapFullscreenViewFromRedditVideoPlayerView:(id)arg1 post:(id)arg2;
- (void)postCollectionCarouselPostNodeDidView:(id)arg1;
- (void)postCollectionCarouselPostNodeDidTap:(id)arg1;
- (void)feedPostCollectionSeeAllNodeDidTap:(id)arg1;
- (void)postCollectionTitleNode:(id)arg1 didTapPostCollection:(id)arg2;
- (void)postCollectionHeaderNodeDidTapSubreddit:(id)arg1;
- (void)willSendEvent:(id)arg1;
- (void)didViewPill:(id)arg1 fromPillContainerNode:(id)arg2;
- (void)didSelectPill:(id)arg1 fromPillContainerNode:(id)arg2;
- (void)didTapThumbnailForPost:(id)arg1 image:(id)arg2 fromFeedPostNode:(id)arg3;
- (void)pillContainerNode:(id)arg1 didViewPill:(id)arg2 pillNode:(id)arg3;
- (void)pillContainerNode:(id)arg1 didSelectPill:(id)arg2;
- (void)feedPostCallToActionNodeDidTapLink:(id)arg1;
- (void)feedPostWebLinkNodeDidTapLink:(id)arg1;
- (void)feedPostTextWithThumbnailNode:(id)arg1 didTapThumbnailWithImage:(id)arg2;
- (void)feedPostTextWithThumbnailNodeDidTap:(id)arg1;
- (void)feedPostCrossPostNode:(id)arg1 didTapLinkURL:(id)arg2;
- (void)feedPostCrossPostNode:(id)arg1 didTapThumbnailWithImage:(id)arg2;
- (void)feedPostCrossPostNodeDidTap:(id)arg1;
- (void)didCloseReparentedVideo;
- (void)feedPostYouTubeNode:(id)arg1 didTapYouTubeLink:(id)arg2;
- (void)feedPostImageGalleryNode:(id)arg1 didMoveFromPage:(unsigned long long)arg2 toPage:(unsigned long long)arg3;
- (void)feedPostImageGalleryNode:(id)arg1 didTapLink:(id)arg2;
- (void)feedPostImageGalleryNode:(id)arg1 didTapImage:(id)arg2;
- (void)feedPostImageNode:(id)arg1 didTapImage:(id)arg2;
- (void)navigateToDetailsForPost:(id)arg1 openCommentComposer:(_Bool)arg2;
- (void)navigateToTheatreFromPost:(id)arg1 withTheatrePresentationModel:(id)arg2;
- (void)didTapLinkForPost:(id)arg1 linkURL:(id)arg2;
- (void)didTapAddAwardForPost:(id)arg1;
- (void)didTapAwardsForPost:(id)arg1 award:(id)arg2;
- (void)didTapFollowEventForPost:(id)arg1;
- (void)didTapModerateFlairForPost:(id)arg1;
- (void)didTapModerateOverflowForPost:(id)arg1 view:(id)arg2;
- (void)didTapDistinguishPost:(id)arg1;
- (void)didTapRemovePostAsSpam:(id)arg1;
- (void)didTapRemovePost:(id)arg1;
- (void)didTapApprovePost:(id)arg1;
- (void)didTapAwardPost:(id)arg1;
- (void)showShareViewForPost:(id)arg1 sender:(id)arg2 origin:(unsigned long long)arg3;
- (void)actionSheetViewController:(id)arg1 didTapSharePost:(id)arg2 sender:(id)arg3;
- (void)didTapActionButtonForPost:(id)arg1 view:(id)arg2;
- (void)didTapCommentForPost:(id)arg1;
- (void)didTapDownvoteForPost:(id)arg1;
- (void)didTapUpvoteForPost:(id)arg1;
- (void)didTapTitleReportsForPost:(id)arg1;
- (void)didTapTitleOverflowForPost:(id)arg1 fromView:(id)arg2 withVideoTimestamp:(id)arg3;
- (void)didTapSubscribeButtonForSubscribable:(id)arg1 post:(id)arg2 templateContext:(id)arg3;
- (void)didTapTitleForPost:(id)arg1 linkURL:(id)arg2 context:(unsigned long long)arg3;
- (void)didTapBackgroundForPost:(id)arg1;
- (void)feedPostLeaderboardNode:(id)arg1 didTapLeaderboardForPost:(id)arg2;
- (void)feedPostAwardsNode:(id)arg1 didTapAddAwardForPost:(id)arg2;
- (void)feedPostAwardsNode:(id)arg1 didTapAwardsForPost:(id)arg2 award:(id)arg3;
- (void)feedPostEventBarNode:(id)arg1 didTapLinkURL:(id)arg2;
- (void)feedPostEventBarNodeDidTapFollowEvent:(id)arg1;
- (void)feedPostModerateBarNode:(id)arg1 didTapFlairForPost:(id)arg2;
- (void)feedPostModerateBarNode:(id)arg1 didTapOverflowForPost:(id)arg2;
- (void)feedPostModerateBarNode:(id)arg1 didDistinguishPost:(id)arg2;
- (void)feedPostModerateBarNode:(id)arg1 didDeleteAsSpamPost:(id)arg2;
- (void)feedPostModerateBarNode:(id)arg1 didDeletePost:(id)arg2;
- (void)feedPostModerateBarNode:(id)arg1 didApprovePost:(id)arg2;
- (void)feedPostCommentBarNodeDidTapAwardButton:(id)arg1;
- (void)feedPostCommentBarNodeDidTapActionButton:(id)arg1;
- (void)feedPostCommentBarNodeDidTapComment:(id)arg1;
- (void)feedPostCommentBarNodeDidTapDownvote:(id)arg1;
- (void)feedPostCommentBarNodeDidTapUpvote:(id)arg1;
- (void)feedPostTitleNodeDidTapReport:(id)arg1;
- (void)feedPostTitleNode:(id)arg1 didTapOverflowButton:(id)arg2;
- (void)feedPostTitleNode:(id)arg1 didTapSubscribeButtonForSubscribable:(id)arg2;
- (void)feedPostTitleNode:(id)arg1 didTapLinkURL:(id)arg2 context:(unsigned long long)arg3;
- (void)addScreenViewTypeToEvent:(id)arg1;
- (void)postFeedCell:(id)arg1 didConsumePost:(id)arg2 withVisibilityContext:(id)arg3;
- (void)exposeChatPostHoldoutExperimentWithPost:(id)arg1;
- (void)postFeedCell:(id)arg1 didViewPost:(id)arg2 withVisibilityContext:(id)arg3;
- (_Bool)shouldShowRefreshPill;
@property(readonly, nonatomic) UICollectionView *feedCollectionView; // @synthesize feedCollectionView=_feedCollectionView;
- (id)makeCollectionViewLayout;
- (void)theatreViewDidClose;
- (void)performCollectionBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)feedShouldRefreshDueToElement:(id)arg1 atIndex:(long long)arg2;
- (void)feedShouldUpdateElement:(id)arg1 atIndex:(long long)arg2;
- (void)feedShouldRemoveElement:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) double floatingHeadingSnapDistance;
- (void)floatingHeaderShouldMove:(id)arg1;
- (void)willMoveFloatingHeaderViewWithTransformY:(double)arg1;
- (double)initialFloatingResistanceDistance;
- (double)maxFloatingTransformY;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
- (void)feedPostGalleryCellNodeDidTapLabel:(id)arg1;
- (void)liveBannerContentViewDidTap:(id)arg1;
- (void)suspendedBannerContentViewDidTap:(id)arg1 forUrl:(id)arg2;
- (void)headerBarViewDidTapRightButton:(id)arg1;
- (void)headerBarViewDidTapLeftButton:(id)arg1;
- (void)postModerateActionSheetViewController:(id)arg1 didTapModMode:(_Bool)arg2;
- (void)postModerateActionSheetViewControllerDidTapEditFlair:(id)arg1;
- (id)cellForPost:(id)arg1;
- (id)nodeForPost:(id)arg1;
- (void)showViewReportsForPost:(id)arg1;
- (void)postModerateActionSheetViewControllerDidTapViewReports:(id)arg1;
- (void)feedSortOptionControllerDidCancel:(id)arg1;
- (void)feedSortOptionController:(id)arg1 didFinishSelectingFeedSort:(unsigned long long)arg2 feedRange:(unsigned long long)arg3;
- (void)applyFeedSort:(unsigned long long)arg1 feedRange:(unsigned long long)arg2;
- (void)endTimeToInteractivityTrace;
- (void)listingDidFailFetching:(id)arg1 error:(id)arg2;
- (void)displayListingContent:(id)arg1 correlationID:(id)arg2;
- (void)listingDidStartFetching:(id)arg1;
- (void)notifyPossibleCellsAboutViewDisappearing;
- (void)updateContentViewsWhenLoadingMoreFinishes;
- (void)updateContentViewsWhenReloadFinishes;
- (void)updateContentScrollViewInsets;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (_Bool)attachChainedCarousel:(id)arg1 toPostAtIndex:(long long)arg2;
- (void)updateWithIsModMode:(_Bool)arg1;
- (void)reloadListData;
- (void)didRemoveObjectsAtIndexes:(id)arg1;
- (void)handleModelAttributedStringsUpdate;
- (void)updateFeedDisplayModeFrom:(unsigned long long)arg1 toMode:(unsigned long long)arg2;
- (_Bool)navigateIfPossibleToAdLinkURLOfPost:(id)arg1;
- (void)handleAppDidEnterForegroundWhenViewControllerIsOnTheTop;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldTabBarController:(id)arg1 handleReselectionOf:(id)arg2;
@property(readonly, nonatomic) FeedPresenter *feedPresenter;
- (id)initWithPresenter:(id)arg1 delegator:(id)arg2 navigator:(id)arg3;
- (void)didResizeCarousel:(id)arg1;
- (void)removeCarousel:(id)arg1;
- (void)resizeDiscoveryUnitViewModel:(id)arg1;
- (void)showUndoRemovalForDiscoveryUnitViewModel:(id)arg1 atIndex:(unsigned long long)arg2 attachedToNode:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeDiscoveryUnitViewModel:(id)arg1 showUndo:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasShownMaximumChainsForDiscoveryUnit:(id)arg1;
- (id)nodeContainingChainedCarousel:(id)arg1;
- (_Bool)removeAttachedChainedCarousel:(id)arg1 fromNode:(id)arg2;
- (_Bool)attachChainedCarousel:(id)arg1 toNode:(id)arg2;
- (void)showChainedCarouselFromObject:(id)arg1 chainAction:(unsigned long long)arg2 withTemplateContext:(id)arg3;
- (void)insertDiscoveryUnitViewModel:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)queueInsertDiscoveryUnitViewModel:(id)arg1 atIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isViewLoaded;
@property(readonly) Class superclass;

@end

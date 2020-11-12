//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "MetaBadgeManagementViewControllerDelegate-Protocol.h"
#import "PagedTabControllerProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"
#import "_TtP6Reddit33MetaLandingViewControllerDelegate_-Protocol.h"
#import "_TtP6Reddit37MetaSubredditMembershipActionDelegate_-Protocol.h"

@class AnalyticsEvent, MetaCommunityInfo, NSString, NSURL, Subreddit, UIScrollView, _TtC6Reddit34MetaSubredditMembershipContentNode;
@protocol AccountContext, PagedTabControllerParentCallback, _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface MetaSubredditMembershipViewController : BaseViewController <UIScrollViewDelegate, _TtP6Reddit37MetaSubredditMembershipActionDelegate_, _TtP6Reddit33MetaLandingViewControllerDelegate_, MetaBadgeManagementViewControllerDelegate, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_, PagedTabControllerProtocol>
{
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    id <PagedTabControllerParentCallback> _pagedTabControllerParent;
    id <AccountContext> _accountContext;
    _TtC6Reddit34MetaSubredditMembershipContentNode *_contentNode;
    NSString *_userPK;
    NSString *_correlationID;
    Subreddit *_subreddit;
    MetaCommunityInfo *_communityInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MetaCommunityInfo *communityInfo; // @synthesize communityInfo=_communityInfo;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) NSString *correlationID; // @synthesize correlationID=_correlationID;
@property(retain, nonatomic) NSString *userPK; // @synthesize userPK=_userPK;
@property(retain, nonatomic) _TtC6Reddit34MetaSubredditMembershipContentNode *contentNode; // @synthesize contentNode=_contentNode;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak id <PagedTabControllerParentCallback> pagedTabControllerParent; // @synthesize pagedTabControllerParent=_pagedTabControllerParent;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
- (id)pageItemId;
- (id)pageItemText;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (void)scrollDidStopScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)landingViewControllerDidPurchaseMembership:(id)arg1;
- (void)metaBadgeManagementViewControllerDidChangeSelectedBadges:(id)arg1;
- (void)performOpenMembershipStatusWithSender:(id)arg1;
- (void)performOpenAboutMembershipWithSender:(id)arg1;
- (void)performEditMetaBadgesWithSender:(id)arg1;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
- (void)sendAnalytics;
- (void)fetchDemoBadgesForSubreddit:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchBadgesInSubreddit:(id)arg1 communityInfo:(id)arg2;
- (void)reloadContentNode;
- (void)reloadCommunityInfo;
- (void)configureWithSubreddit:(id)arg1 communityInfo:(id)arg2;
- (void)updateContentScrollViewInsets;
- (void)contentScrollViewContentInsetsDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithAccountContext:(id)arg1 userPK:(id)arg2;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

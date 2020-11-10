//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "ListingStateControllerDelegate-Protocol.h"
#import "MultiPageViewControllerDelegate-Protocol.h"
#import "PagedTabControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"
#import "_TtP8RedditUI22MajorContentScrollable_-Protocol.h"

@class AnalyticsEvent, BaseTableView, EmptyDogeView, Listing, ListingStateController, NSArray, NSString, NSURL, RedditService, UIScrollView, _TtC6Reddit27EditUsernameFlowCoordinator;
@protocol AccountContext, _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface CustomFeedsListViewController : BaseViewController <UITableViewDelegate, UITableViewDataSource, MultiPageViewControllerDelegate, ListingStateControllerDelegate, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_, PagedTabControllerProtocol, _TtP8RedditUI22MajorContentScrollable_>
{
    _Bool _isCommunityTabRefactorEnabled;
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    unsigned long long _viewMode;
    CDUnknownBlockType _onSelection;
    id <AccountContext> _accountContext;
    BaseTableView *_tableView;
    EmptyDogeView *_emptyView;
    ListingStateController *_listingStateController;
    NSArray *_customFeeds;
    Listing *_listing;
    _TtC6Reddit27EditUsernameFlowCoordinator *_editUsernameFlowCoordinator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCommunityTabRefactorEnabled; // @synthesize isCommunityTabRefactorEnabled=_isCommunityTabRefactorEnabled;
@property(retain, nonatomic) _TtC6Reddit27EditUsernameFlowCoordinator *editUsernameFlowCoordinator; // @synthesize editUsernameFlowCoordinator=_editUsernameFlowCoordinator;
@property(retain, nonatomic) Listing *listing; // @synthesize listing=_listing;
@property(retain, nonatomic) NSArray *customFeeds; // @synthesize customFeeds=_customFeeds;
@property(retain, nonatomic) ListingStateController *listingStateController; // @synthesize listingStateController=_listingStateController;
@property(retain, nonatomic) EmptyDogeView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) BaseTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(copy, nonatomic) CDUnknownBlockType onSelection; // @synthesize onSelection=_onSelection;
@property(nonatomic) unsigned long long viewMode; // @synthesize viewMode=_viewMode;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
- (void)multiPageViewControllerMultiUpdated:(id)arg1;
- (void)multiPageViewController:(id)arg1 customFeedWasCopied:(id)arg2;
- (void)multiPageViewControllerMultiDeleted:(id)arg1;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (id)pageItemText;
- (void)didTapFavoriteButton:(id)arg1;
- (void)createCustomFeed;
- (void)didTapCreateCustomFeedButton:(id)arg1;
- (void)closeButtonTap:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)newCustomFeedNotification:(id)arg1;
- (void)createdCustomFeed:(id)arg1;
- (void)showCustomFeedCreatedToast:(id)arg1;
- (struct UIEdgeInsets)preferredContentInset;
- (void)navigateToCustomFeed:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupNavigationBar;
- (void)listingStateController:(id)arg1 didPullToRefresh:(id)arg2;
- (void)listingStateController:(id)arg1 didTapLoadingSpinner:(id)arg2;
- (id)customFeedsFilteredFromObjects:(id)arg1;
- (void)fetchNextListingPage;
- (void)refetchListing;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


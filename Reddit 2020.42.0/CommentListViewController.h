//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "InboxCellContentViewDelegate-Protocol.h"
#import "ListingNetworkSourceDelegate-Protocol.h"
#import "ListingStateControllerDelegate-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"
#import "PagedTabControllerProtocol-Protocol.h"
#import "ReportActionSheetDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"

@class AnalyticsEvent, BaseCollectionView, CommentListingNetworkSource, ListingStateController, NSArray, NSMutableArray, NSNotificationCenter, NSString, NSURL, RedditService, UIScrollView, User;
@protocol AccountContext, PagedTabControllerParentCallback, _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface CommentListViewController : BaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, InboxCellContentViewDelegate, ReportActionSheetDelegate, ObjectObserverProtocol, ListingStateControllerDelegate, ListingNetworkSourceDelegate, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_, PagedTabControllerProtocol>
{
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    id <PagedTabControllerParentCallback> _userProfileDelegate;
    User *_analyticsUser;
    id <AccountContext> _accountContext;
    BaseCollectionView *_collectionView;
    ListingStateController *_listingStateController;
    NSArray *_comments;
    CommentListingNetworkSource *_networkSource;
    unsigned long long _type;
    NSNotificationCenter *_notifCenter;
    NSMutableArray *_notifObservers;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSMutableArray *notifObservers; // @synthesize notifObservers=_notifObservers;
@property(readonly, nonatomic) NSNotificationCenter *notifCenter; // @synthesize notifCenter=_notifCenter;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) CommentListingNetworkSource *networkSource; // @synthesize networkSource=_networkSource;
@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) ListingStateController *listingStateController; // @synthesize listingStateController=_listingStateController;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) User *analyticsUser; // @synthesize analyticsUser=_analyticsUser;
@property(nonatomic) __weak id <PagedTabControllerParentCallback> userProfileDelegate; // @synthesize userProfileDelegate=_userProfileDelegate;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
- (void)addNotificationCenterObservers;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
@property(readonly, nonatomic) _Bool shouldDisableReloadContentForBlockedUser;
@property(readonly, nonatomic) _Bool shouldShowSubredditName;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)reportActionSheetDidBlockUser:(id)arg1;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (void)awardsDidTap:(id)arg1;
- (void)didTapOverflowOfCellContentView:(id)arg1;
- (void)listingStateController:(id)arg1 didPullToRefresh:(id)arg2;
- (void)listingStateController:(id)arg1 didTapLoadingSpinner:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)listingNetworkSourceDidStartFetching:(id)arg1;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (void)reconfigureListingStateAfterFetch;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1 networkSource:(id)arg2 type:(unsigned long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

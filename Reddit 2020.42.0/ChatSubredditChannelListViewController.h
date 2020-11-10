//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingViewController.h"

#import "PagedTabControllerProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"

@class AnalyticsEvent, BaseCollectionView, NSString, NSURL, RedditService, Subreddit, UIScrollView;
@protocol PagedTabControllerParentCallback, _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface ChatSubredditChannelListViewController : ListingViewController <UICollectionViewDelegate, UICollectionViewDataSource, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_, PagedTabControllerProtocol>
{
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    id <PagedTabControllerParentCallback> _pagedTabControllerParent;
    BaseCollectionView *_collectionView;
    Subreddit *_subreddit;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <PagedTabControllerParentCallback> pagedTabControllerParent; // @synthesize pagedTabControllerParent=_pagedTabControllerParent;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
- (id)pageItemId;
- (id)pageItemText;
- (void)scrollDidStopScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (void)updateContentView;
- (void)updateContentViewsWhenLoadingMoreFinishes;
- (void)updateContentViewsWhenReloadFinishes;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)configureWithRecommendedChannels:(id)arg1;
- (void)configureWithSubreddit:(id)arg1 initialChannels:(id)arg2;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


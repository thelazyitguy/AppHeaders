//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchableTableViewController.h"

#import "SubredditContextProvider-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"

@class AnalyticsEvent, NSArray, NSString, NSURL, PillStyle, SimpleLabelIconTableHeaderView, Subreddit;
@protocol _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface SubredditModWidgetFullListViewController : SearchableTableViewController <UITableViewDelegate, UITableViewDataSource, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_, SubredditContextProvider>
{
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    Subreddit *_subreddit;
    NSArray *_searchResults;
    NSString *_currentSearchString;
    PillStyle *_pillStyle;
    SimpleLabelIconTableHeaderView *_headerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SimpleLabelIconTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PillStyle *pillStyle; // @synthesize pillStyle=_pillStyle;
@property(copy, nonatomic) NSString *currentSearchString; // @synthesize currentSearchString=_currentSearchString;
@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
- (void)presentLoginViewController;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)userAtIndex:(long long)arg1;
- (void)messageTheMods;
- (void)userSelected:(id)arg1;
- (void)configureNavigationBarStyle;
- (void)configureNavigationBarTintColor;
- (void)configureNavigationBarAppearance;
- (struct UIEdgeInsets)preferredContentInset;
- (id)modUserListingNetworkSource;
- (void)viewDidLoad;
- (id)initWithSubreddit:(id)arg1 presenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

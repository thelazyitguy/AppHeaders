//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Reddit42CommunityLocationTaggingListViewController.h"

@class AnalyticsEvent, NSString;
@protocol _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface _TtC6Reddit42CommunityLocationTaggingListViewController (Reddit)
@property(nonatomic, readonly) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(nonatomic, readonly) AnalyticsEvent *screenViewEvent;
@property(nonatomic, readonly) NSString *analyticsScreenViewName;
@property(nonatomic, readonly) NSString *analyticsPageType;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didTapGoBack;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)listingStateController:(id)arg1 didTapLoadingSpinner:(id)arg2;
- (void)listingStateController:(id)arg1 didPullToRefresh:(id)arg2;
@end


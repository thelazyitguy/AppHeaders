//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Reddit45ModToolsModNotificationSettingsViewController.h"

#import "ListingStateControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@interface _TtC6Reddit45ModToolsModNotificationSettingsViewController (Reddit) <UITableViewDataSource, ListingStateControllerDelegate>
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)listingStateController:(id)arg1 didTapLoadingSpinner:(id)arg2;
- (void)listingStateController:(id)arg1 didPullToRefresh:(id)arg2;
@end


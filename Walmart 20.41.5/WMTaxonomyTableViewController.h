//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@interface WMTaxonomyTableViewController : UITableViewController
{
    // Error parsing type: , name: localAdStoreId
    // Error parsing type: , name: searchTerm
    // Error parsing type: , name: taxonomyID
    // Error parsing type: , name: taxonomyNode
    // Error parsing type: , name: taxonomyLocalNode
    // Error parsing type: , name: isShopVisible
    // Error parsing type: , name: lastFilterString
    // Error parsing type: , name: hud
    // Error parsing type: , name: shouldSendPageViewEvent
    // Error parsing type: , name: atcButtonContext
    // Error parsing type: , name: isSavingsShowcasePage
    // Error parsing type: , name: departmentTitle
    // Error parsing type: , name: showGrocerySection
    // Error parsing type: , name: isUNEEnabled
    // Error parsing type: , name: gapCoverView
    // Error parsing type: , name: headerView
    // Error parsing type: , name: searchBarView
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1;
- (void)returnedToForeground:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTaxonomyID:(id)arg1 savingsShowcase:(_Bool)arg2;

@end


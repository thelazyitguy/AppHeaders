//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "DataReceiptDelegate1-Protocol.h"

@class DataHelper, IndicatorPresenterHelper, NSArray, NSDateFormatter;

@interface ShowListController : UITableViewController <DataReceiptDelegate1>
{
    DataHelper *dataHelper;
    NSArray *menuData;
    NSDateFormatter *nsdf;
    IndicatorPresenterHelper *indicatorPresenterHelper;
}

- (void).cxx_destruct;
@property(retain) DataHelper *dataHelper; // @synthesize dataHelper;
- (void)errorReceived:(long long)arg1 withError:(id)arg2;
- (void)dataReceived:(long long)arg1 withStatus:(long long)arg2;
- (void)loadMenuData;
- (void)doByItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

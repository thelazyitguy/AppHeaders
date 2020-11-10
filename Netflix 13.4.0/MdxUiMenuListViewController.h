//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MdxUiMenuListViewModel, NSString, UITableView;
@protocol MdxUiMenuListViewControllerDelegate;

@interface MdxUiMenuListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _delegateRespondsToInitialSelection;
    _Bool _delegateRespondsToActionable;
    _Bool _delegateRespondsToSelectable;
    MdxUiMenuListViewModel *_viewModel;
    id <MdxUiMenuListViewControllerDelegate> _delegate;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MdxUiMenuListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MdxUiMenuListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadItemAtIndexPath:(id)arg1;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)reloadSection:(unsigned long long)arg1;
- (void)reloadSections:(id)arg1;
- (void)reloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


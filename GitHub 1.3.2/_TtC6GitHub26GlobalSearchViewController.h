//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@class NSArray;

@interface _TtC6GitHub26GlobalSearchViewController : UIViewController <UISearchResultsUpdating, UISearchBarDelegate>
{
    // Error parsing type: , name: $__lazy_storage_$_searchController
    // Error parsing type: , name: $__lazy_storage_$_tableView
    // Error parsing type: , name: $__lazy_storage_$_adapter
    // Error parsing type: , name: recentSearchStore
    // Error parsing type: , name: client
    // Error parsing type: , name: delegate
    // Error parsing type: , name: _state
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) NSArray *keyCommands;
- (void)keyboardShortcutFocus;
- (void)onKeyboardDismiss;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

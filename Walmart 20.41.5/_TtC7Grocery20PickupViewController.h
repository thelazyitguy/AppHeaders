//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7Grocery25GroceryBaseViewController.h"

@class UILabel, UITableView, UIView;

@interface _TtC7Grocery20PickupViewController : _TtC7Grocery25GroceryBaseViewController
{
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: dataStoreState
    // Error parsing type: , name: _searchController
    // Error parsing type: , name: searchedZIPCode
    // Error parsing type: , name: serviceAvailability
    // Error parsing type: , name: accessPoints
    // Error parsing type: , name: isEditingContract
    // Error parsing type: , name: isCheckout
    // Error parsing type: , name: analyticsPackage
    // Error parsing type: , name: completion
    // Error parsing type: , name: previousNavBarAppearance
    // Error parsing type: , name: indexPathForPreviouslySelectedRow
    // Error parsing type: , name: sortedByDistanceLabel
    // Error parsing type: , name: tableView
    // Error parsing type: , name: searchErrorLabel
    // Error parsing type: , name: searchErrorView
    // Error parsing type: , name: dataStoreObserver
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)searchPickupPoints;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
@property(nonatomic) __weak UIView *searchErrorView; // @synthesize searchErrorView;
@property(nonatomic) __weak UILabel *searchErrorLabel; // @synthesize searchErrorLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
@property(nonatomic) __weak UILabel *sortedByDistanceLabel; // @synthesize sortedByDistanceLabel;

@end

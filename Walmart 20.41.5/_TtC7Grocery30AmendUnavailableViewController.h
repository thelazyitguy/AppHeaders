//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7Grocery25GroceryBaseViewController.h"

@class UIButton, UITableView, UIView;

@interface _TtC7Grocery30AmendUnavailableViewController : _TtC7Grocery25GroceryBaseViewController
{
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: continueButton
    // Error parsing type: , name: centerView
    // Error parsing type: , name: tableView
    // Error parsing type: , name: outOfStockItems
    // Error parsing type: , name: overMaxItems
    // Error parsing type: , name: completion
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)continuePressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
@property(nonatomic) __weak UIView *centerView; // @synthesize centerView;
@property(nonatomic) __weak UIButton *continueButton; // @synthesize continueButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton;

@end

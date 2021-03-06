//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DynamicTextLabelCell, NSMutableArray, NSString, UITableView, UITableViewCell;

@interface SimpleDescriptionTextEmailViewController : BaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSString *_descriptionText;
    NSString *_email;
    NSString *_screenTitleText;
    NSMutableArray *_contactMenuCells;
    DynamicTextLabelCell *_contactMenuDescriptionTextCell;
    UITableViewCell *_contactMenuEmailCell;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UITableViewCell *contactMenuEmailCell; // @synthesize contactMenuEmailCell=_contactMenuEmailCell;
@property(retain, nonatomic) DynamicTextLabelCell *contactMenuDescriptionTextCell; // @synthesize contactMenuDescriptionTextCell=_contactMenuDescriptionTextCell;
@property(retain, nonatomic) NSMutableArray *contactMenuCells; // @synthesize contactMenuCells=_contactMenuCells;
@property(retain, nonatomic) NSString *screenTitleText; // @synthesize screenTitleText=_screenTitleText;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
- (void)configureAccessibility;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


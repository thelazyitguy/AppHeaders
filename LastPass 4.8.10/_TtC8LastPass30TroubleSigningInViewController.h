//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UILabel, UITableView;

@interface _TtC8LastPass30TroubleSigningInViewController : UIViewController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: versionLabel
    // Error parsing type: , name: buildTimeLabel
    // Error parsing type: , name: copyrightLabel
    // Error parsing type: , name: items
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UILabel *copyrightLabel; // @synthesize copyrightLabel;
@property(nonatomic) __weak UILabel *buildTimeLabel; // @synthesize buildTimeLabel;
@property(nonatomic) __weak UILabel *versionLabel; // @synthesize versionLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;

@end

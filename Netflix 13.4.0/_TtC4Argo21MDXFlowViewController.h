//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString;

@interface _TtC4Argo21MDXFlowViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: heightConstraint
    // Error parsing type: , name: sheetPresentation
    // Error parsing type: , name: headerView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: cellProvider
    // Error parsing type: , name: displayConfiguration
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)accessibilityPerformEscape;
@property(nonatomic) _Bool accessibilityViewIsModal;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateFontSize;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, copy) NSString *title;

@end

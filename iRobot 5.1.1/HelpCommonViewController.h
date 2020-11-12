//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAssetViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GuidedTourPage, NSArray, NSString, UITableView;

@interface HelpCommonViewController : BaseAssetViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_commonQuestions;
    NSString *_viewTitle;
    GuidedTourPage *_guidedTourPage;
    UITableView *_tableView;
    NSArray *_questions;
    long long _totalRows;
}

- (void).cxx_destruct;
@property(nonatomic) long long totalRows; // @synthesize totalRows=_totalRows;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) GuidedTourPage *guidedTourPage; // @synthesize guidedTourPage=_guidedTourPage;
@property(retain, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
@property(retain, nonatomic) NSArray *commonQuestions; // @synthesize commonQuestions=_commonQuestions;
- (void)configureAccessibility;
- (long long)getHelpVideoType:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FNBaseViewController.h>

#import <Funny/UITableViewDataSource-Protocol.h>
#import <Funny/UITableViewDelegate-Protocol.h>

@class IFActivityFilterObservable, NSArray, NSString, UISwitch, UITableView;
@protocol _TtP25FCFuncorpNetworkingiFunny18NetworkNewsService_;

@interface FNUserNewsFilterViewController : FNBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *filterTableView;
    NSArray *disabledTypes;
    UISwitch *smilesWorkSwitch;
    UISwitch *smilesRepubSwitch;
    UISwitch *smilesCommentSwitch;
    UISwitch *repubsWorkSwitch;
    UISwitch *repubsRepubSwitch;
    UISwitch *commentsWorkSwitch;
    UISwitch *commentsRepubSwitch;
    UISwitch *repliesSwitch;
    UISwitch *subscribersSwitch;
    UISwitch *smileTrackerSwitch;
    UISwitch *mentionContentSwitch;
    UISwitch *mentionUserSwitch;
    UISwitch *reportedSwitch;
    IFActivityFilterObservable *_activityFilterObservable;
    id <_TtP25FCFuncorpNetworkingiFunny18NetworkNewsService_> _newsNetworkService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP25FCFuncorpNetworkingiFunny18NetworkNewsService_> newsNetworkService; // @synthesize newsNetworkService=_newsNetworkService;
@property(retain, nonatomic) IFActivityFilterObservable *activityFilterObservable; // @synthesize activityFilterObservable=_activityFilterObservable;
- (void)dealloc;
- (void)requestDisabledTypes;
- (id)textForOther:(id)arg1;
- (id)textForCellAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)isNewsDisabled:(id)arg1;
- (void)handleOtherRow:(id)arg1 filterSwitch:(id)arg2;
- (id)getConstraint:(id)arg1 identifier:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)titleForSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)back;
- (id)filterString;
- (void)onSave;
- (void)onFirstAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithActivityFilterObservable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

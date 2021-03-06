//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/IFAdsVisibilityProtocol-Protocol.h>
#import <Funny/IFControllerProtocol-Protocol.h>
#import <Funny/IFUserListCellDelegate-Protocol.h>
#import <Funny/IFUserListModelDelegate-Protocol.h>
#import <Funny/UITableViewDataSource-Protocol.h>
#import <Funny/UITableViewDelegate-Protocol.h>

@class IFActivityIndicatorRefresher, IFCircularProgressView, IFNoContentView, IFUserListRouter, NSObject, NSString, UITableView, UIView;
@protocol IFUserListModelProtocol, IFViewProtocol;

@interface IFUserListTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, IFControllerProtocol, IFUserListCellDelegate, IFUserListModelDelegate, IFAdsVisibilityProtocol>
{
    _Bool _withRefreshControl;
    NSObject<IFUserListModelProtocol> *_model;
    IFUserListRouter *_router;
    NSString *_emojiText;
    NSString *_noContentText;
    unsigned long long _cellType;
    unsigned long long _subscribeType;
    UITableView *_tableView;
    IFCircularProgressView *_progressView;
    IFActivityIndicatorRefresher *_refreshControl;
    IFNoContentView *_noContentView;
    long long _recentErrorCode;
}

- (void).cxx_destruct;
@property(nonatomic) long long recentErrorCode; // @synthesize recentErrorCode=_recentErrorCode;
@property(retain, nonatomic) IFNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) IFActivityIndicatorRefresher *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) IFCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool withRefreshControl; // @synthesize withRefreshControl=_withRefreshControl;
@property(nonatomic) unsigned long long subscribeType; // @synthesize subscribeType=_subscribeType;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) NSString *noContentText; // @synthesize noContentText=_noContentText;
@property(retain, nonatomic) NSString *emojiText; // @synthesize emojiText=_emojiText;
@property(retain, nonatomic) IFUserListRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) NSObject<IFUserListModelProtocol> *model; // @synthesize model=_model;
@property(readonly, nonatomic) _Bool adsIsVisible;
- (void)dealloc;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)scrollingEnded:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)loadNextUsersIfNeeded;
- (void)loadNextUsers;
- (void)loadPrevUsers;
- (void)addProgreesViewToView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onUserProfile:(id)arg1 userView:(id)arg2;
- (void)onFollow:(id)arg1 userView:(id)arg2;
- (void)contentUpdated;
- (void)userListUpdateError:(id)arg1;
- (void)userListUpdated;
- (void)updateUserList;
- (void)clearRecentError;
- (_Bool)shouldShowErrorAlertForError:(id)arg1;
- (void)stopRefresh;
- (void)refreshData;
- (void)reloadTableData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<IFViewProtocol> *view;

@end


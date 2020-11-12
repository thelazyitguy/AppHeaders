//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNViewController.h"

#import "DYNSpamSubscriptionListener-Protocol.h"
#import "GILRecyclableViewLoggerDataSource-Protocol.h"
#import "GOOIndeterminateProgressBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GILTableViewLogger, GOOIndeterminateProgressBar, NSArray, NSMutableSet, NSString, UITableView;
@protocol DYNColorSchemeService, DYNMemberCacheService, DYNSpamSubscriptionService, GIPAccountID;

@interface DYNSpamInvitesViewController : DYNViewController <DYNSpamSubscriptionListener, GILRecyclableViewLoggerDataSource, GOOIndeterminateProgressBarDelegate, UITableViewDataSource, UITableViewDelegate>
{
    id <GIPAccountID> _accountID;
    id <DYNColorSchemeService> _colorSchemeService;
    id <DYNMemberCacheService> _memberCacheService;
    id <DYNSpamSubscriptionService> _spamSubscriptionService;
    NSMutableSet *_userIDsEnqueuedForMemberCacheResolution;
    NSArray *_cellModels;
    _Bool _waitingForNextPage;
    UITableView *_tableView;
    GILTableViewLogger *_tableViewLogger;
    GOOIndeterminateProgressBar *_progressBar;
}

- (void).cxx_destruct;
- (void)installProgressBarIfNeeded;
- (void)setProgressBarVisible:(_Bool)arg1;
- (void)setPaginating:(_Bool)arg1;
- (void)paginate;
- (id)groupNameFromSpamInviteGroupSummary:(id)arg1;
- (id)cellModelAtIndexPath:(id)arg1;
- (id)cellModelFromGroupSummary:(id)arg1;
- (id)newCellModelsArray;
- (void)setUpConstraints;
- (id)cellModels;
- (void)createSubviews;
- (void)setUpRootVisualElement;
- (void)animationFinished:(id)arg1;
- (id)visualElementParamsForItemAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)spamInvitesListSnapshotUpdated:(id)arg1;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 colorSchemeService:(id)arg2 memberCacheService:(id)arg3 spamSubscriptionService:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

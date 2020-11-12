//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "LPSecurityChallengeHeaderViewDelegate-Protocol.h"
#import "LPSecurityChallengeInfoCellDelegate-Protocol.h"
#import "LastPassModelObserver-Protocol.h"

@class ChallengeAnalysis, LPLabelStackTableViewCell, LPMasterPasswordWarningTableViewCell, LPSecurityChallengeDetailViewController, LPSecurityChallengeEditAccountActionSheetController, NSMutableDictionary, NSString, TableDefinition;
@protocol LPSecurityChallengeRefreshDelegate;

@interface LPSecurityChallengeSummaryViewController : UITableViewController <LastPassModelObserver, LPSecurityChallengeInfoCellDelegate, LPSecurityChallengeHeaderViewDelegate>
{
    ChallengeAnalysis *_challengeAnalysis;
    id <LPSecurityChallengeRefreshDelegate> _delegate;
    NSMutableDictionary *_cells;
    NSMutableDictionary *_headers;
    NSMutableDictionary *_mpWarningCells;
    LPMasterPasswordWarningTableViewCell *_mpWarningCell;
    LPLabelStackTableViewCell *_scoreCalculatedCell;
    LPLabelStackTableViewCell *_improveScoreCell;
    TableDefinition *_tableDefinition;
    LPSecurityChallengeEditAccountActionSheetController *_actionSheetController;
    LPSecurityChallengeDetailViewController *_detailViewController;
    long long _rank;
}

- (void).cxx_destruct;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) LPSecurityChallengeDetailViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(readonly, nonatomic) LPSecurityChallengeEditAccountActionSheetController *actionSheetController; // @synthesize actionSheetController=_actionSheetController;
@property(readonly, nonatomic) TableDefinition *tableDefinition; // @synthesize tableDefinition=_tableDefinition;
@property(readonly, nonatomic) LPLabelStackTableViewCell *improveScoreCell; // @synthesize improveScoreCell=_improveScoreCell;
@property(readonly, nonatomic) LPLabelStackTableViewCell *scoreCalculatedCell; // @synthesize scoreCalculatedCell=_scoreCalculatedCell;
@property(readonly, nonatomic) LPMasterPasswordWarningTableViewCell *mpWarningCell; // @synthesize mpWarningCell=_mpWarningCell;
@property(readonly, nonatomic) NSMutableDictionary *mpWarningCells; // @synthesize mpWarningCells=_mpWarningCells;
@property(readonly, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) NSMutableDictionary *cells; // @synthesize cells=_cells;
@property(nonatomic) __weak id <LPSecurityChallengeRefreshDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ChallengeAnalysis *challengeAnalysis; // @synthesize challengeAnalysis=_challengeAnalysis;
- (void)infoButtonClickedForHeaderView:(id)arg1;
- (void)securityChallengeRank:(long long)arg1;
- (void)details_clicked:(id)arg1;
- (void)close_clicked:(id)arg1;
- (void)infoButtonClickedForInfoCell:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)mpWarningCellForIndexPath:(id)arg1;
- (id)infoCellForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)challenge;
- (void)buildTableDefinition;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

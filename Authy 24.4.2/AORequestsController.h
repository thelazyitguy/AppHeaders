//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AORequestDetailDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIActivityIndicatorView, UIImageView, UILabel, UISegmentedControl, UITableView, UIView, _TtC5Authy13AORequestCell, _TtC5Authy14OneTouchDevice, _TtC5Authy15OneTouchManager;

@interface AORequestsController : UIViewController <UITableViewDelegate, UITableViewDataSource, AORequestDetailDelegate>
{
    _Bool _showLastPendingApprovalRequest;
    _Bool _isLoadingNewRequests;
    int _sourceView;
    UITableView *_tableView;
    UISegmentedControl *_requestsTypeDivider;
    UILabel *_noRequestsLabel;
    UIView *_requestStatusView;
    UIImageView *_requestStatusImage;
    UILabel *_requestStatusLabel;
    UIActivityIndicatorView *_requestsLoadingIndicator;
    NSArray *_pendingRequestDeviceUUIDs;
    _TtC5Authy14OneTouchDevice *_onetouchDevice;
    NSMutableArray *_requests;
    NSArray *_customerAccounts;
    _TtC5Authy13AORequestCell *_currentRequestCell;
    UIActivityIndicatorView *_approvalRequestLoadingIndicator;
    NSMutableDictionary *_offscreenCells;
    NSTimer *_refreshTimer;
    _TtC5Authy15OneTouchManager *_oneTouchManager;
}

+ (id)getTimeAgoTextForRequest:(id)arg1;
+ (id)requestDetailsAttributedString:(id)arg1 withDetailedInformation:(_Bool)arg2;
+ (id)requestMessageAttributedString:(id)arg1;
+ (id)removeHTMLTagsOfMessage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) _TtC5Authy15OneTouchManager *oneTouchManager; // @synthesize oneTouchManager=_oneTouchManager;
@property(nonatomic) int sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) NSMutableDictionary *offscreenCells; // @synthesize offscreenCells=_offscreenCells;
@property(retain, nonatomic) UIActivityIndicatorView *approvalRequestLoadingIndicator; // @synthesize approvalRequestLoadingIndicator=_approvalRequestLoadingIndicator;
@property(nonatomic) _Bool isLoadingNewRequests; // @synthesize isLoadingNewRequests=_isLoadingNewRequests;
@property(retain, nonatomic) _TtC5Authy13AORequestCell *currentRequestCell; // @synthesize currentRequestCell=_currentRequestCell;
@property(retain, nonatomic) NSArray *customerAccounts; // @synthesize customerAccounts=_customerAccounts;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) _TtC5Authy14OneTouchDevice *onetouchDevice; // @synthesize onetouchDevice=_onetouchDevice;
@property _Bool showLastPendingApprovalRequest; // @synthesize showLastPendingApprovalRequest=_showLastPendingApprovalRequest;
@property(retain, nonatomic) NSArray *pendingRequestDeviceUUIDs; // @synthesize pendingRequestDeviceUUIDs=_pendingRequestDeviceUUIDs;
@property(nonatomic) __weak UIActivityIndicatorView *requestsLoadingIndicator; // @synthesize requestsLoadingIndicator=_requestsLoadingIndicator;
@property(nonatomic) __weak UILabel *requestStatusLabel; // @synthesize requestStatusLabel=_requestStatusLabel;
@property(nonatomic) __weak UIImageView *requestStatusImage; // @synthesize requestStatusImage=_requestStatusImage;
@property(nonatomic) __weak UIView *requestStatusView; // @synthesize requestStatusView=_requestStatusView;
@property(nonatomic) __weak UILabel *noRequestsLabel; // @synthesize noRequestsLabel=_noRequestsLabel;
@property(nonatomic) __weak UISegmentedControl *requestsTypeDivider; // @synthesize requestsTypeDivider=_requestsTypeDivider;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void)requestWasUpdatedWithStatus:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)configureAORequestCell:(id)arg1 forAUTApprovalRequest:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateRefreshTimerWithApprovalRequest:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)currentRequestCellShouldShowDetailedInfoForRequest:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)transactionTypeChanged:(id)arg1;
- (long long)currentApprovalRequestStatus;
- (void)getRequestsForSingleAppsWithOptions:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)getRequestsForAllAppsWithOptions:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)getRequestsComplete:(CDUnknownBlockType)arg1;
- (void)refreshRequests:(id)arg1;
- (void)refreshNoRequestsLabel;
- (void)setupUI;
- (void)checkInternetConnection;
- (void)cancel:(id)arg1;
- (void)configureLeftCancelButtonWithColor:(id)arg1;
- (void)configureNavigationBarColor:(id)arg1;
- (void)configureNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)back:(id)arg1;
- (id)initControllerWithSourceView:(int *)arg1;
- (id)initWithSourceView:(int *)arg1;
- (id)initWithOneTouchDevice:(id)arg1 sourceView:(int *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


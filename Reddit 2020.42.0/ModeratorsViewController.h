//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ModUserListViewController.h"

#import "ModFormViewControllerDelegate-Protocol.h"
#import "PagedTabControllerProtocol-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"

@class AnalyticsEvent, NSString, NSURL, UIScrollView;
@protocol ModeratorsViewControllerDelegate, _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface ModeratorsViewController : ModUserListViewController <RUIActionSheetViewControllerDelegate, ModFormViewControllerDelegate, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_, PagedTabControllerProtocol>
{
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    unsigned long long _listType;
    id <ModeratorsViewControllerDelegate> _delegate;
    NSString *_subredditName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subredditName; // @synthesize subredditName=_subredditName;
@property(nonatomic) __weak id <ModeratorsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
- (void)handleInvitationAcceptance:(_Bool)arg1;
- (id)pageItemText;
- (void)form:(id)arg1 completed:(_Bool)arg2 context:(id)arg3;
- (void)removeModeratorUser:(id)arg1 isCurrentUser:(_Bool)arg2;
- (void)tryRemoveUser:(id)arg1;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)modUserTableCell:(id)arg1 didTapOverflowButton:(id)arg2 forUser:(id)arg3;
- (void)presentFormWithUserData:(id)arg1;
- (void)userSelected:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)presentAlertForInvite;
- (void)listingDidFetchMoreData:(id)arg1;
- (void)displayListingContent:(id)arg1 correlationID:(id)arg2;
- (void)addUserButtonPress:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)preferredContentInset;
- (void)viewDidLoad;
- (void)setupNetworkSource;
- (void)configureWithSubreddit:(id)arg1;
- (id)initWithSubredditName:(id)arg1 type:(unsigned long long)arg2 presenter:(id)arg3;
- (id)initWithSubreddit:(id)arg1 type:(unsigned long long)arg2 presenter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
@property(readonly) Class superclass;

@end


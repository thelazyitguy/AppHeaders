//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ModUserListViewController.h"

#import "ModFormViewControllerDelegate-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"

@class AnalyticsEvent, NSString, NSURL;
@protocol _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface MutedUsersViewController : ModUserListViewController <RUIActionSheetViewControllerDelegate, ModFormViewControllerDelegate, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_>
{
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
- (void)form:(id)arg1 completed:(_Bool)arg2 context:(id)arg3;
- (void)tryRemove:(id)arg1;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)modUserTableCell:(id)arg1 didTapOverflowButton:(id)arg2 forUser:(id)arg3;
- (void)presentFormWithUserData:(id)arg1;
- (void)userSelected:(id)arg1;
- (void)addUserButtonPress:(id)arg1;
- (void)addNewUserButton;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

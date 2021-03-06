//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNAlertManagerService-Protocol.h"

@class NSString;
@protocol DYNAlertManagerServiceDependencies, DYNAlertPresenting, DYNDialog, GIPAccountID;

@interface DYNAlertManagerServiceImpl : NSObject <DYNAlertManagerService>
{
    id <GIPAccountID> _accountID;
    id <DYNAlertManagerServiceDependencies> _deps;
    id <DYNDialog> _scheduledDialog;
    id <DYNAlertPresenting> _presenter;
}

- (void).cxx_destruct;
- (void)setAlertPresenter:(id)arg1;
- (void)setUpForTesting;
- (id)retrieveAndClearScheduledDialog;
- (_Bool)hasScheduledDialog;
- (void)openHangoutsClassicAccounts;
- (id)newStopDualNotificationsDialog;
- (void)showScheduledDialogIfNeeded;
- (void)scheduleDialog:(id)arg1;
- (void)scheduleStopDualNotificationsAlert;
- (void)showStopDualNotificationsAlert;
- (void)dismiss;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)showDialog:(id)arg1;
- (id)initWithAccountID:(id)arg1 alertManagerServiceDependencies:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


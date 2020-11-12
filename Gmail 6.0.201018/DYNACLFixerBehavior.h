//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNStreamBehavior-Protocol.h"
#import "GDKACLFixerOptionsVCDelegate-Protocol.h"
#import "MDCAppBarNavigationControllerDelegate-Protocol.h"

@class DYNTimerObject, GDKACLFixerService, GPCPromise, NSString;
@protocol DYNExperimentsService, DYNSharedLayerService, DYNStream, DYNTimerEventLoggingService, DYNTracingService, GIPAccountID;

@interface DYNACLFixerBehavior : NSObject <MDCAppBarNavigationControllerDelegate, GDKACLFixerOptionsVCDelegate, DYNStreamBehavior>
{
    GDKACLFixerService *_aclFixerService;
    id <DYNStream> _stream;
    id <GIPAccountID> _accountId;
    id <DYNExperimentsService> _experimentsService;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNTimerEventLoggingService> _timerEventLoggingService;
    id <DYNTracingService> _tracingService;
    _Bool _latestACLCheckPromiseCompleted;
    _Bool _sendInProgress;
    _Bool _triggerACLCheckOnCompletion;
    DYNTimerObject *_latestTimerObject;
    GPCPromise *_cachedACLFixerCheckPromise;
    _Bool _gdkACLFixerOptionsVCIsResend;
}

+ (id)urlsFromCheckingResult:(id)arg1;
- (void).cxx_destruct;
- (void)appBarNavigationController:(id)arg1 willAddAppBarViewController:(id)arg2 asChildOfViewController:(id)arg3;
- (void)ACLFixerOptionsVCWillDismiss:(id)arg1;
- (void)ACLFixerOptionsVCDidCancel:(id)arg1;
- (void)ACLFixerOptionsVCDidSelectProceedWithoutFixOption:(id)arg1;
- (void)ACLFixerOptionsVC:(id)arg1 didSelectFixItem:(id)arg2 withRole:(int)arg3;
- (void)denyMessageSend;
- (void)allowMessageSend;
- (void)showCannotFixDialog:(id)arg1 isResend:(_Bool)arg2;
- (void)checkOutOfDomainWarningForFixItem:(id)arg1 fixHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void)onACLFixerServiceCompletedWithError:(id)arg1 recommendedMessage:(id)arg2;
- (void)fixWithItem:(id)arg1 role:(int)arg2 isResend:(_Bool)arg3;
- (void)handleMoreOptionsButtonActionWithResult:(id)arg1 defaultRole:(int)arg2 isResend:(_Bool)arg3;
- (void)displayACLFixingOptions:(id)arg1 isResend:(_Bool)arg2 withState:(id)arg3;
- (id)memberEmailsFromMembers:(id)arg1;
- (id)memberEmailsFromUsers:(id)arg1;
- (_Bool)shouldAclToRosterEmailWithGroup:(id)arg1;
- (id)dynAlertActionFromGDKAlertAction:(id)arg1 message:(id)arg2;
- (id)getDynDialogfromGDKAlertMessage:(id)arg1;
- (void)logACLFixerDialogMetricsWithCheckResult:(id)arg1;
- (void)processACLCheckResult:(id)arg1 withState:(id)arg2 isResend:(_Bool)arg3 didShowLoadingDialog:(_Bool)arg4;
- (void)displayACLFixingUIWithState:(id)arg1 isResend:(_Bool)arg2 withPromise:(id)arg3;
- (void)processRecipientPromiseResult:(id)arg1 docIDs:(id)arg2 message:(id)arg3 recipientEmails:(id)arg4;
- (void)processACLCheckResult:(id)arg1 aclFixState:(int)arg2 docIDs:(id)arg3 error:(id)arg4 fixItems:(id)arg5 message:(id)arg6 recipientEmails:(id)arg7;
- (id)checkACLStatusWithState:(id)arg1 isResend:(_Bool)arg2;
- (id)driveMetadataIdFromState:(id)arg1;
- (void)rejectRecipientPromiseWithStream:(id)arg1 state:(id)arg2 errorMessage:(id)arg3;
- (void)resolveRecipientPromiseWithStream:(id)arg1 state:(id)arg2 recipients:(id)arg3;
- (void)setEventTrackingPropertiesWithStream:(id)arg1 state:(id)arg2;
- (_Bool)shouldTriggerACLCheckWithStream:(id)arg1 state:(id)arg2 oldState:(id)arg3;
- (void)finalizeWithStreamState:(id)arg1;
- (void)handleEventsInStream:(id)arg1 withState:(id)arg2 oldState:(id)arg3;
- (void)initializeWithStream:(id)arg1 state:(id)arg2;
- (id)initWithAccountId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

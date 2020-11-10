//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "SPTWatchConnectivitySubscriber-Protocol.h"

@class NSString, NSUserDefaults, SPTAuthLegacySession;
@protocol SPTAlertInterface, SPTUIPresentationService, SPTWatchConnectivityPubSub;

@interface SPTWatchPlatformWatchApplicationLogSubscriber : NSObject <SPTWatchConnectivitySubscriber, MFMailComposeViewControllerDelegate>
{
    id <SPTWatchConnectivityPubSub> _pubSub;
    SPTAuthLegacySession *_session;
    id <SPTAlertInterface> _alertController;
    id <SPTUIPresentationService> _presentationService;
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(readonly, nonatomic) __weak id <SPTAlertInterface> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) __weak SPTAuthLegacySession *session; // @synthesize session=_session;
@property(readonly, nonatomic) __weak id <SPTWatchConnectivityPubSub> pubSub; // @synthesize pubSub=_pubSub;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)emailBodyWithMessage:(id)arg1;
- (id)emailSubject;
- (void)composeEmailWithMessage:(id)arg1;
- (void)presentIncomingLogAlertWithMessage:(id)arg1;
- (void)handleMessage:(id)arg1 fromTopic:(id)arg2;
- (void)load;
- (id)initWithPubSub:(id)arg1 session:(id)arg2 alertController:(id)arg3 presentationService:(id)arg4 userDefaults:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


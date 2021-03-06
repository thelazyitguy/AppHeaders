//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASKAppLifecycleEventsReceiverExtension-Protocol.h"
#import "WCSessionDelegate-Protocol.h"
#import "WatchNotificationProcessor-Protocol.h"

@class MGFAppReminderHandler, MGFRemindMeNotificationAction, MGFWatchMetricsLogger, MGFWatchNotificationsProvider, NSString;

@interface MGFWatchNotificationsProcessor : NSObject <WCSessionDelegate, ASKAppLifecycleEventsReceiverExtension, WatchNotificationProcessor>
{
    MGFRemindMeNotificationAction *_remindMeNotificationAction;
    MGFAppReminderHandler *_appReminderHandler;
    MGFWatchMetricsLogger *_metricsLogger;
    MGFWatchNotificationsProvider *_watchNotificationProvider;
}

@property(retain, nonatomic) MGFWatchNotificationsProvider *watchNotificationProvider; // @synthesize watchNotificationProvider=_watchNotificationProvider;
@property(retain, nonatomic) MGFWatchMetricsLogger *metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(retain, nonatomic) MGFAppReminderHandler *appReminderHandler; // @synthesize appReminderHandler=_appReminderHandler;
@property(retain, nonatomic) MGFRemindMeNotificationAction *remindMeNotificationAction; // @synthesize remindMeNotificationAction=_remindMeNotificationAction;
- (void).cxx_destruct;
- (id)getSharedUserDefaults;
- (void)logRemoteNotificationReceived:(id)arg1;
- (void)logNotificationAction:(id)arg1;
- (void)didChangeMarketplace:(id)arg1;
- (void)shareMarketplaceWithExtensions;
- (void)performMarketplaceActions;
- (void)onWillEnterForeground;
- (void)presentPendingReminder;
- (void)handleNotificationAction:(id)arg1;
- (void)addNotificationActions:(id)arg1 to:(id)arg2;
- (_Bool)canHandleActionIdentifier:(id)arg1;
- (void)registerRemindMeActionForGeneralAndDefaultCategory;
- (void)didReceiveRemoteNotification:(id)arg1;
- (void)setWatchPairedState:(id)arg1;
- (_Bool)isInExperiment;
- (_Bool)isWatchPaired;
- (void)activateWCSession;
- (void)sessionDidDeactivate:(id)arg1;
- (_Bool)isAppInForeground;
- (void)sessionDidBecomeInactive:(id)arg1;
- (void)sessionWatchStateDidChange:(id)arg1;
- (_Bool)isEnabled;
- (void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
- (void)appDidFinishStartup:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, _TtC5Authy11LockManager;

@interface PushNotificationHandler : NSObject
{
    _Bool _supportRequestsApprovalFromNotifications;
    _TtC5Authy11LockManager *_lockManager;
    NSDictionary *_pendingNotification;
}

+ (id)sharedPushNotificationHandler;
- (void).cxx_destruct;
@property(nonatomic) _Bool supportRequestsApprovalFromNotifications; // @synthesize supportRequestsApprovalFromNotifications=_supportRequestsApprovalFromNotifications;
@property(retain, nonatomic) NSDictionary *pendingNotification; // @synthesize pendingNotification=_pendingNotification;
@property(retain, nonatomic) _TtC5Authy11LockManager *lockManager; // @synthesize lockManager=_lockManager;
- (void)updateOneTouchRequestFromNotificationWithStatus:(id)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendOneTouchLocalNotificationWhenError:(id)arg1 forUserInfo:(id)arg2 andRequest:(id)arg3;
- (id)getAlertForUserInfo:(id)arg1 andRequest:(id)arg2;
- (_Bool)isOneTouchPushNotificationRequest:(id)arg1;
- (void)sendLocalNotificationWithUserInfo:(id)arg1 alert:(id)arg2 andCategory:(id)arg3;
- (void)sendLocalNotificationForiOS8WithUserInfo:(id)arg1 alert:(id)arg2 andCategory:(id)arg3;
- (void)sendLocalNotificationForiOS10WithUserInfo:(id)arg1 alert:(id)arg2 andCategory:(id)arg3;
- (void)protectionPinForAllAppChanged:(_Bool)arg1;
- (void)disableRequestsApprovalFromNotifications;
- (void)enableRequestsApprovalFromNotifications;
- (void)storeValueForRequestsApprovalFromNotifications;
- (void)enableNotifications;
- (void)registerForRemoteNotificationsWithActionsForiOS10AndAbove;
- (id)getOneTouchCategoryForiOS10AndAbove;
- (void)registerForRemoteNotificationsWithActionsForiOS8AndAbove;
- (id)getNotificationSettingsForiOS8AndAboveWithCategories:(id)arg1;
- (id)getOneTouchCategoryForiOS8AndAbove;
- (id)getOneTouchCategoryForiOS8AndAboveWithActions:(id)arg1;
- (id)getDenyActionForNotificationsForiOS8AndAbove;
- (id)getApproveActionForNotificationsForiOS8AndAbove;
- (_Bool)areRequestsApprovalFromNotificationsSupported;
- (_Bool)hasPendingNotification;
- (void)addPendingNotificationWithInfo:(id)arg1;
- (_Bool)handlePendingNotificationForCurrentViewController:(id)arg1;
- (_Bool)handlePushNotificationWithInfo:(id)arg1 forCurrentViewController:(id)arg2;
- (void)presentRequestDetailViewController:(id)arg1 forCurrentVisibleViewController:(id)arg2;
- (void)configureRequestDetailViewController:(id)arg1;
- (void)addCloseButtonToViewController:(id)arg1;
- (void)closeView:(id)arg1;
- (_Bool)isCurrentViewControllerIpadSettingsView:(id)arg1;
- (void)dismissViewController:(id)arg1;
- (id)init;
- (void)loadSupportRequestsValue;

@end

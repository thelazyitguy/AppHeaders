//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSCondition, UIWindow, _TtC8LastPass19SubsystemRepository, _TtC8LastPass9LPAuthApp;

@interface _TtC8LastPass11AppDelegate : UIResponder <UIApplicationDelegate>
{
    // Error parsing type: , name: window
    // Error parsing type: , name: mainViewController
    // Error parsing type: , name: idleWatcher
    // Error parsing type: , name: becameActiveCondition
    // Error parsing type: , name: appIsInBackground
    // Error parsing type: , name: launcher
    // Error parsing type: , name: bgTask
    // Error parsing type: , name: g_bClearClipboard
    // Error parsing type: , name: touchIdSentResignActive
    // Error parsing type: , name: lastApplicationBecomeActiveTime
    // Error parsing type: , name: lastApplicationResignActiveTime
    // Error parsing type: , name: lastApplicationEnteredBackgroundTime
    // Error parsing type: , name: lastApplicationEnterForegroundTime
    // Error parsing type: , name: isFirstLaunch
    // Error parsing type: , name: $__lazy_storage_$_subsystems
    // Error parsing type: , name: lpAuthApp
    // Error parsing type: , name: notificationManager
    // Error parsing type: , name: sharedFolders
    // Error parsing type: , name: launchScreenViewController
    // Error parsing type: , name: initialized
    // Error parsing type: , name: startingUp
    // Error parsing type: , name: onboardingReminderNotification
    // Error parsing type: , name: mixpanelNotificationHandler
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 shouldAllowExtensionPointIdentifier:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)showSyncLanguageSettingsWithNotification:(id)arg1;
- (void)syncLanguageSettingsWithNotification:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
@property(nonatomic, retain) _TtC8LastPass9LPAuthApp *lpAuthApp; // @synthesize lpAuthApp;
@property(nonatomic, retain) _TtC8LastPass19SubsystemRepository *subsystems;
@property(nonatomic) double lastApplicationResignActiveTime; // @synthesize lastApplicationResignActiveTime;
@property(nonatomic) double lastApplicationBecomeActiveTime; // @synthesize lastApplicationBecomeActiveTime;
@property(nonatomic) _Bool appIsInBackground; // @synthesize appIsInBackground;
@property(nonatomic, readonly) NSCondition *becameActiveCondition; // @synthesize becameActiveCondition;
@property(nonatomic, retain) UIWindow *window; // @synthesize window;

@end

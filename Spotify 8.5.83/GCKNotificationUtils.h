//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKNotificationUtils : NSObject
{
}

+ (void)unregisterAllNotifications:(id)arg1;
+ (void)unregisterForBatteryStateChangeNotification:(id)arg1;
+ (void)unregisterForAppBecomeActiveNotification:(id)arg1;
+ (void)unregisterForAppForegroundNotification:(id)arg1;
+ (void)unregisterForAppBackgroundNotification:(id)arg1;
+ (void)registerForBatteryStateChangeNotification:(id)arg1 selector:(SEL)arg2;
+ (void)registerForAppBecomeActiveNotification:(id)arg1 selector:(SEL)arg2;
+ (void)registerForAppForegroundNotification:(id)arg1 selector:(SEL)arg2;
+ (void)registerForAppBackgroundNotification:(id)arg1 selector:(SEL)arg2;

@end


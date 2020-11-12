//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABKPushSettings : NSObject
{
}

+ (_Bool)hasUNUserNotificationCenter;
+ (void)setPushDisplaySetting:(long long)arg1 forKey:(id)arg2 inDictionary:(id)arg3;
+ (void)readAndStoreCurrentPushDisplayOptions:(id)arg1 withFlush:(_Bool)arg2;
+ (void)storeIsForegroundPushEnabled:(_Bool)arg1 withFlush:(_Bool)arg2;
+ (void)storePushAuthStatus:(long long)arg1 withFlush:(_Bool)arg2;
+ (id)pushDisplayOptions;
+ (id)pushAuthStatus;
+ (_Bool)isForegroundPushEnabled;
+ (void)readAndStoreCurrentPushSettingsWithFlush:(_Bool)arg1;

@end

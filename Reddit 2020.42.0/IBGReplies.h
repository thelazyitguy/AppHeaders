//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IBGReplies : NSObject
{
}

+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1;
+ (_Bool)didReceiveRemoteNotification:(id)arg1;
+ (_Bool)hasChats;
+ (void)show;
+ (long long)unreadRepliesCount;
+ (void)setPushNotificationsEnabled:(_Bool)arg1;
+ (_Bool)pushNotificationsEnabled;
+ (void)setInAppNotificationsEnabled:(_Bool)arg1;
+ (_Bool)inAppNotificationsEnabled;
+ (void)setDidReceiveReplyHandler:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)didReceiveReplyHandler;
+ (void)setEnabled:(_Bool)arg1;
+ (_Bool)enabled;

@end


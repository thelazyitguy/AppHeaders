//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class CNPNotificationSettings;

@interface CNPDevicePayload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasServerType; // @dynamic hasServerType;
@property(retain, nonatomic) CNPNotificationSettings *notificationSettings; // @dynamic notificationSettings;
@property(nonatomic) int serverType; // @dynamic serverType;
@property(readonly, nonatomic) int settingsOneOfCase; // @dynamic settingsOneOfCase;

@end

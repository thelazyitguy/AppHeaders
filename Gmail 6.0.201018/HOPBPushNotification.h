//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GHMMeetingsPushNotification, GPBAny;

@interface HOPBPushNotification : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMeetingsUpdate; // @dynamic hasMeetingsUpdate;
@property(nonatomic) _Bool hasSynapsePushNotification; // @dynamic hasSynapsePushNotification;
@property(retain, nonatomic) GHMMeetingsPushNotification *meetingsUpdate; // @dynamic meetingsUpdate;
@property(retain, nonatomic) GPBAny *synapsePushNotification; // @dynamic synapsePushNotification;

@end

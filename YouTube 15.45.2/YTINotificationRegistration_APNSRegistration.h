//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTINotificationRegistration_APNSRegistration_EnabledSettings;

@interface YTINotificationRegistration_APNSRegistration : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int enabledRemoteNotificationTypes; // @dynamic enabledRemoteNotificationTypes;
@property(retain, nonatomic) YTINotificationRegistration_APNSRegistration_EnabledSettings *enabledSettings; // @dynamic enabledSettings;
@property(copy, nonatomic) NSString *gcmMessagingId; // @dynamic gcmMessagingId;
@property(nonatomic) _Bool getNotificationSettingsOutertubeExperiment; // @dynamic getNotificationSettingsOutertubeExperiment;
@property(nonatomic) _Bool hasEnabledRemoteNotificationTypes; // @dynamic hasEnabledRemoteNotificationTypes;
@property(nonatomic) _Bool hasEnabledSettings; // @dynamic hasEnabledSettings;
@property(nonatomic) _Bool hasGcmMessagingId; // @dynamic hasGcmMessagingId;
@property(nonatomic) _Bool hasGetNotificationSettingsOutertubeExperiment; // @dynamic hasGetNotificationSettingsOutertubeExperiment;
@property(nonatomic) _Bool hasMessagingId; // @dynamic hasMessagingId;
@property(nonatomic) _Bool hasProjectId; // @dynamic hasProjectId;
@property(nonatomic) _Bool hasRegisteredNotificationActions; // @dynamic hasRegisteredNotificationActions;
@property(nonatomic) _Bool hasSsoClientId; // @dynamic hasSsoClientId;
@property(nonatomic) _Bool hasSsoDeviceId; // @dynamic hasSsoDeviceId;
@property(nonatomic) _Bool hasSsoMatchPrototypeBytes; // @dynamic hasSsoMatchPrototypeBytes;
@property(copy, nonatomic) NSData *messagingId; // @dynamic messagingId;
@property(copy, nonatomic) NSString *projectId; // @dynamic projectId;
@property(nonatomic) _Bool registeredNotificationActions; // @dynamic registeredNotificationActions;
@property(copy, nonatomic) NSString *ssoClientId; // @dynamic ssoClientId;
@property(copy, nonatomic) NSString *ssoDeviceId; // @dynamic ssoDeviceId;
@property(copy, nonatomic) NSData *ssoMatchPrototypeBytes; // @dynamic ssoMatchPrototypeBytes;

@end

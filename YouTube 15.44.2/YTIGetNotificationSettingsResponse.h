//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIIosUserNotificationsRegistrationConfig, YTIManagedRegistrationsConfig, YTINotificationRegistrationSupportedConfigs, YTIResponseContext;

@interface YTIGetNotificationSettingsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIosUserNotificationsRegistrationConfig; // @dynamic hasIosUserNotificationsRegistrationConfig;
@property(nonatomic) _Bool hasManagedRegistrationsConfig; // @dynamic hasManagedRegistrationsConfig;
@property(nonatomic) _Bool hasRegistration; // @dynamic hasRegistration;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTIIosUserNotificationsRegistrationConfig *iosUserNotificationsRegistrationConfig; // @dynamic iosUserNotificationsRegistrationConfig;
@property(retain, nonatomic) YTIManagedRegistrationsConfig *managedRegistrationsConfig; // @dynamic managedRegistrationsConfig;
@property(retain, nonatomic) YTINotificationRegistrationSupportedConfigs *registration; // @dynamic registration;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _TtP5Authy9Analytics_;

@interface _TtC5Authy16AnalyticsManager : NSObject
{
    // Error parsing type: , name: analytics
    // Error parsing type: , name: analyticsType
    // Error parsing type: , name: userAccount
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (id)init;
- (void)sendSecurityTestExecutedEventWithResult:(_Bool)arg1;
- (void)sendLogoSelectedEventWithLogoSearched:(id)arg1 logo:(id)arg2 isNew:(_Bool)arg3 isGeneric:(_Bool)arg4;
- (void)sendLogoSearchedEventWithLogoSearched:(id)arg1 logo:(id)arg2 logoFound:(_Bool)arg3;
- (void)sendSecurityAchievementEventWithId:(long long)arg1 title:(id)arg2 socialMedia:(long long)arg3;
- (void)sendSecurityAchievementEventWithId:(long long)arg1 title:(id)arg2;
- (id)getDeviceId;
- (id)getModelName;
- (id)getUserAgentWithOsVersion:(id)arg1;
- (id)getiOSOSVersion;
- (id)getBuildVersion;
- (id)getAppVersion;
- (id)getProductValue;
- (id)formatDate:(id)arg1;
- (_Bool)sendScanQRCodeEvent:(long long)arg1 scheme:(id)arg2 errorName:(id)arg3;
- (_Bool)sendTransactionalOtpEvent:(long long)arg1 serialId:(long long)arg2;
- (void)sendAddAccountFromKeyManually;
- (void)sendAddAccountFromSettingsViewEvent;
- (void)sendAddAccountFromTokenViewEvent;
- (void)sendTokenSearchStartedEvent;
- (_Bool)sendAppCrashEventWithReason:(id)arg1 andStackTrace:(id)arg2;
- (_Bool)sendAppRateEvent;
- (_Bool)sendOneTouchEventWithId:(long long)arg1 account:(id)arg2;
- (_Bool)sendWearableSelectAccountDetailEventAtDate:(id)arg1 account:(id)arg2 osVersion:(id)arg3 procesorArchitecture:(id)arg4 operatingSystem:(id)arg5 modelName:(id)arg6;
- (_Bool)sendWearableSessionEvent:(long long)arg1 atDate:(id)arg2 sessionTimeInSeconds:(double)arg3 osVersion:(id)arg4 procesorArchitecture:(id)arg5 operatingSystem:(id)arg6 modelName:(id)arg7;
- (_Bool)sendWearableSessionFinishEventAtDate:(id)arg1 sessionTimeInSeconds:(double)arg2 osVersion:(id)arg3 processorArchitecture:(id)arg4 operatingSystem:(id)arg5 modelName:(id)arg6;
- (_Bool)sendWearableSessionInitEventAtDate:(id)arg1 osVersion:(id)arg2 processorArchitecture:(id)arg3 operatingSystem:(id)arg4 modelName:(id)arg5;
- (_Bool)sendWearableAppPairedEvent;
- (_Bool)sendWearableAppInstalledEvent;
- (_Bool)sendWearableAppRemovedEvent;
- (_Bool)sendExtensionEventWithId:(long long)arg1 sessionTimeInSeconds:(double)arg2 atDate:(id)arg3;
- (_Bool)sendAccountEventWithId:(long long)arg1 forAccount:(id)arg2 atRow:(long long)arg3 atColumn:(long long)arg4;
- (void)sendAccountSelectedEventForAccount:(id)arg1 atRow:(long long)arg2 atColumn:(long long)arg3 viewMode:(long long)arg4 transactionalOtp:(id)arg5;
- (void)pushNotificationReceived:(id)arg1;
- (_Bool)sendPushNotificationOpenEventWhenAppActive:(id)arg1;
- (_Bool)sendPushNotificationOpenEventWhenAppClosed:(id)arg1;
- (_Bool)sendUserAccountEventWithId:(long long)arg1;
- (_Bool)sendAuthenticatorBackupsEventWithId:(long long)arg1 enableMode:(id)arg2;
- (_Bool)sendAuthenticatorBackupsReminderVerifiedFromAlertEvent;
- (_Bool)sendAuthenticatorBackupsReminderEnabledFromAlertEvent;
- (_Bool)sendAuthenticatorBackupsReminderShownEvent;
- (_Bool)sendMultideviceEventWithId:(long long)arg1;
- (_Bool)sendNewDeviceRequestEventWithId:(long long)arg1 withStatus:(id)arg2;
- (_Bool)denyNewDeviceRequest;
- (_Bool)approveNewDeviceRequest;
- (_Bool)sendProtectionPinEventWithId:(long long)arg1 touchIdAvailable:(_Bool)arg2;
- (_Bool)sendRegistrationEvent:(long long)arg1 provider:(id)arg2;
- (_Bool)sendAppEventWithId:(long long)arg1 sessionTimeInSeconds:(double)arg2;
- (_Bool)sendKeychainErrorEventWithId:(long long)arg1 errorCode:(long long)arg2 anonymousUser:(_Bool)arg3;
- (_Bool)sendKeychainItemNotFoundEventWithId:(long long)arg1 errorCode:(long long)arg2 callStack:(id)arg3 token:(id)arg4;
@property(nonatomic, retain) id <_TtP5Authy9Analytics_> analytics; // @synthesize analytics;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRAnalyticsSubsystem : NSObject
{
    struct Handle<std::__1::shared_ptr<core::AnalyticsSubsystem>, std::__1::shared_ptr<core::AnalyticsSubsystem>> _cppRefHandle;
}

+ (id)getInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)trackProvFinished:(long long)arg1 assetId:(id)arg2;
- (void)trackProvError:(long long)arg1 assetId:(id)arg2 error:(int)arg3;
- (void)trackProvStatus:(long long)arg1 assetId:(id)arg2 status:(long long)arg3;
- (void)trackProvStarted:(long long)arg1 assetId:(id)arg2;
- (void)trackProvCancelButtonPressed:(long long)arg1;
- (void)trackProvInfoButtonPressed:(long long)arg1;
- (void)trackProvBleDiscoveryPageResult:(long long)arg1;
- (void)trackProvWifiPasswordDone:(_Bool)arg1;
- (void)trackProvRobotNameDone:(_Bool)arg1;
- (void)trackProvAddRobotSelected:(long long)arg1;
- (void)trackProvStepViewed:(long long)arg1;
- (void)trackNotificationSmartScheduleMessageSelected:(id)arg1 eventId:(id)arg2 scheduleSuggestedCount:(int)arg3 schedulingVersion:(id)arg4;
- (void)trackAssetRegistrationWithCloudFinished:(id)arg1;
- (void)trackAssetRegistrationWithCloudStarted;
- (void)flushMessages;
- (void)trackRoombaV1ProvisioningError:(id)arg1 error:(long long)arg2;
- (void)trackRoombaV2ProvisioningError:(id)arg1 error:(int)arg2;
- (void)trackAccountServiceUnavailableDialogViewed:(long long)arg1 updateStatus:(long long)arg2;
- (void)trackNewAppVersionAvailableSkipClicked:(id)arg1;
- (void)trackNewAppVersionAvailableUpdateClicked:(id)arg1;
- (void)trackNewAppVersionAvailableViewed:(id)arg1;
- (void)trackNewAppVersionRequestResult:(long long)arg1;
- (void)trackAccountInfoRequestFinished:(int)arg1 errorCode:(int)arg2;
- (int)trackAccountInfoRequestStarted;
- (void)trackMissionPrecheckToggled:(id)arg1 enabled:(_Bool)arg2;
- (void)trackBraavaPadOptionsChanged:(id)arg1 padType:(long long)arg2 level:(int)arg3;
- (void)trackAccountError:(int)arg1 message:(id)arg2 details:(id)arg3 finishedLoading:(_Bool)arg4;
- (void)trackCountryPickerSelection:(id)arg1;
- (void)trackCareResetStatusButtonPressed:(id)arg1 type:(long long)arg2;
- (void)trackCleaningPresetSettingChanged:(id)arg1 setting:(long long)arg2;
- (void)trackCleaningPassesSettingChanged:(id)arg1 setting:(long long)arg2;
- (void)trackCarpetBoostSettingChanged:(id)arg1 setting:(long long)arg2;
- (void)trackEdgeCleanSettingChanged:(id)arg1 enabled:(_Bool)arg2;
- (void)trackFinishWhenBinFullSettingChanged:(id)arg1 enabled:(_Bool)arg2;
- (void)trackAppLanguageCode:(id)arg1;
- (void)trackRobotAssetsForUser:(id)arg1;
- (void)trackAppBackgrounded;
- (void)trackAppLaunched:(_Bool)arg1 assets:(id)arg2;
- (void)trackBadgedActionForAssetId:(long long)arg1 assetId:(id)arg2 badgeShown:(_Bool)arg3;
- (id)nameForAnalyticsEvent:(long long)arg1;
- (void)enableLogging:(_Bool)arg1;
- (void)startTimedEvent:(id)arg1;
- (void)incrementCounter:(id)arg1 amount:(int)arg2;
- (void)setProperties:(id)arg1;
- (void)trackAssetPropertyEvent:(id)arg1 assetId:(id)arg2 property:(id)arg3;
- (void)trackPropertyEvent:(id)arg1 property:(id)arg2;
- (void)trackAssetEvent:(id)arg1 assetId:(id)arg2;
- (void)trackEvent:(id)arg1;
- (void)addDeviceTokenData:(id)arg1;
- (void)addAnalyticsHandler:(long long)arg1 handler:(id)arg2;
- (const shared_ptr_17ee573f *)cppRef;
- (id)initWithCpp:(const shared_ptr_17ee573f *)arg1;

@end

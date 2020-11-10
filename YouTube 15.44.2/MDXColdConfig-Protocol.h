//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol MDXColdConfig <NSObject>
@property(readonly, nonatomic, getter=isSignInButtonInCastDialogEnabled) _Bool signInButtonInCastDialogEnabled;
@property(readonly, nonatomic) long long maxDetectedScreensEligibleForNotifications;
@property(readonly, nonatomic, getter=isSeamlessNewFullscreenEnabled) _Bool seamlessNewFullscreenEnabled;
@property(readonly, nonatomic, getter=isSeamlessSmallAccountPickerEnabled) _Bool seamlessSmallAccountPickerEnabled;
@property(readonly, nonatomic, getter=isSeamlessWithoutTooltipEnabled) _Bool seamlessWithoutTooltipEnabled;
@property(readonly, nonatomic, getter=isSeamlessDelegateAccountSignInEnabled) _Bool seamlessDelegateAccountSignInEnabled;
@property(readonly, nonatomic, getter=isFloatyBarIntegrationEnabled) _Bool floatyBarIntegrationEnabled;
@property(readonly, nonatomic) double mealbarPromotedLiveFeedChannelsThrottleSeconds;
@property(readonly, nonatomic) NSArray *mealbarPromotedLiveFeedChannels;
@property(readonly, nonatomic, getter=isPassiveSignInMdxConnectAfterCompletionEnabled) _Bool passiveSignInMdxConnectAfterCompletionEnabled;
@property(readonly, nonatomic, getter=isPassiveSignInUniquePremiumValuePropEnabled) _Bool passiveSignInUniquePremiumValuePropEnabled;
@property(readonly, nonatomic, getter=isPassiveSignInEnabled) _Bool passiveSignInEnabled;
@property(readonly, nonatomic, getter=isRemoteButtonsInCastDialogEnabled) _Bool remoteButtonsInCastDialogEnabled;
@property(readonly, nonatomic, getter=isMealbarPromotedLiveFeedChannelsEnabled) _Bool mealbarPromotedLiveFeedChannelsEnabled;
@property(readonly, nonatomic, getter=isRetryConnectionFailureEnabled) _Bool retryConnectionFailureEnabled;
@property(readonly, nonatomic) _Bool ignorePendingDIALRequestsAfterConnecting;
@property(readonly, nonatomic, getter=isVolumeDialogEnabled) _Bool volumeDialogEnabled;
@property(readonly, nonatomic, getter=isQuickPreviewDialogEnabled) _Bool quickPreviewDialogEnabled;
@property(readonly, nonatomic, getter=isCastToNativeEnabled) _Bool castToNativeEnabled;
@property(readonly, nonatomic, getter=isMigratedSeamlessSignInAuthComponentEnabled) _Bool migratedSeamlessSignInAuthComponentEnabled;
@property(readonly, nonatomic, getter=isNewTVCodeDesignEnabled) _Bool newTVCodeDesignEnabled;
@property(readonly, nonatomic, getter=isLinkTVCodeEnabled) _Bool linkTVCodeEnabled;
@property(readonly, nonatomic, getter=isNotificationRevocationEnabled) _Bool notificationRevocationEnabled;
@property(readonly, nonatomic, getter=isErrorDialogForMDXConnectionsEnabled) _Bool errorDialogForMDXConnectionsEnabled;
@property(readonly, nonatomic) double notificationTTLSeconds;
@property(readonly, nonatomic) double backgroundScanTimeoutSeconds;
@property(readonly, nonatomic) long long assistedSignInQuietPeriodDays;
@property(readonly, nonatomic, getter=isAssistedSignInEnabled) _Bool assistedSignInEnabled;
@property(readonly, nonatomic, getter=isSmartRemoteExperimentOverrideEnabled) _Bool smartRemoteExperimentOverrideEnabled;
@property(readonly, nonatomic, getter=isSmartRemoteMealbarEnabled) _Bool smartRemoteMealbarEnabled;
@property(readonly, nonatomic, getter=isSmartRemoteEnabled) _Bool smartRemoteEnabled;
@property(readonly, nonatomic, getter=isPersistentCastIconEnabled) _Bool persistentCastIconEnabled;
@property(readonly, nonatomic) NSString *impactedSessionServerEvent;
@property(readonly, nonatomic) long long notificationReceptionQuietPeriodMinutes;
@property(readonly, nonatomic, getter=areNotificationsEnabledViaGELLog) _Bool notificationsEnabledViaGELLog;
@property(readonly, nonatomic, getter=areClientSideNotificationsEnabled) _Bool clientSideNotificationsEnabled;
@property(readonly, nonatomic, getter=isLocalTransportEncryptionEnabled) _Bool localTransportEncryptionEnabled;
@property(readonly, nonatomic, getter=isWakeOnLANEnabled) _Bool wakeOnLANEnabled;
@end


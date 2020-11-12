//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ANXWeblabTriggerService-Protocol.h"

@class NSArray, NSString;
@protocol AMIWeblabBridgeService, ASKWeblabService;

@interface ANXWeblabTriggerServiceImpl : NSObject <ANXWeblabTriggerService>
{
    NSArray *_registeredWeblabs;
    id <AMIWeblabBridgeService> _weblabBridge;
    id <ASKWeblabService> _askWeblabService;
}

@property(retain, nonatomic) id <ASKWeblabService> askWeblabService; // @synthesize askWeblabService=_askWeblabService;
@property(nonatomic) __weak id <AMIWeblabBridgeService> weblabBridge; // @synthesize weblabBridge=_weblabBridge;
@property(retain, nonatomic) NSArray *registeredWeblabs; // @synthesize registeredWeblabs=_registeredWeblabs;
- (void).cxx_destruct;
- (_Bool)isLandscapeModeFixEnabled;
- (id)captureCartSubnavBackButtonSnapshot;
- (_Bool)isStoreModesDockedBottomTabsEnabled;
- (id)getNotificationHubEnableiPadSnapshot;
- (id)captureIPadLinkTreeMenuSnapshot;
- (_Bool)isStoreModesFullScreenBottomBarVisibilityFixEnabled;
- (_Bool)shouldAddCustomizedNavigationOnYOBAYLYA;
- (_Bool)isBottomCartTabAnimationEnabled;
- (_Bool)SMASHMigrationWeblabEnabled;
- (id)captureShouldReturnYesFromStoreModesRuleOnEgressWeblabSnapshot;
- (_Bool)isCRMEnabled;
- (_Bool)isISSRecentSearchLocalFilterEnabled;
- (_Bool)isEligibleToRevertCXIBasedOnDurationInBackground;
- (id)captureCXIAppearanceManagerRemembersLastVCSnapshot;
- (id)captureVoiceCameraPlacementSnapshot;
- (id)captureCartCustomerTooltipSnapshot;
- (id)captureCustomerTooltipSnapshot;
- (id)captureAppXWelcomeExperienceSnapshot;
- (id)captureCXIBottomTabsBarForPrimeFoodINSnapshot;
- (_Bool)isStoreModesBackButtonFixEnabled;
- (id)captureOneTapBarExperimentSnapshot;
- (id)captureOneTapBarLaunchSnapshot;
- (id)captureSecondaryBarsSnapshot;
- (id)captureBottomNavCounterFix;
- (id)captureAnchorSubNavSnapshot;
- (_Bool)shouldShowDockedBottomTabs;
- (id)shouldRefreshHomePageTTLTreatment;
- (_Bool)shouldRefreshHomePageInHomeTab;
- (id)getEuMfaNotificationBarDisplaySnapshot;
- (id)getEuMfaNotificationBarSnapshot;
- (_Bool)shouldRenderProductImageViewAsModal;
- (_Bool)chromeRedirectionSupportEnabled;
- (_Bool)chromeTakeoverModeEnabled;
- (id)captureMultiModelImageBlockSnapshot;
- (id)captureMenuFontSizeIncreaseSnapshot;
- (id)captureStrategicSubNavFreshIngressImprovementSnapshot;
- (_Bool)shouldLoadWNDAsNonCriticalModule;
- (id)captureDTNavMenuSnapshot;
- (id)captureBottomTabsDoubleTapRefreshSnapshot;
- (id)captureWonderlandChevronV2Snapshot;
- (id)captureCartSubNavInitOptimizationSnapshot;
- (id)captureNavMenuFontSizeSnapshot;
- (id)captureNavMenuSLISubNavSnapshot;
- (id)captureSBDSubDepartmentSubNavBetaSnapshot;
- (id)captureSBDSubDepartmentSubNavSnapshot;
- (id)captureSBDSubnavZLSwapBarSnapshot;
- (_Bool)shouldUseLinkTreeForConfigChrome;
- (id)captureSBDSubnavFeaturedCategorySnapshot;
- (_Bool)shouldToggleImpressionMetricLogging;
- (id)captureWDCSnapshot;
- (id)captureNotificationBadgeXPositionOffsetSnapshot;
- (id)captureCartSubNavSnapshot;
- (id)capturePersonalizationGatewaySnapshot;
- (id)captureWonderlandChevronSnapshot;
- (id)captureDisableTransitioningStateTrackingSnapshot;
- (id)captureCartDoubleTapMetric;
- (id)captureLTFSMigrationSnapshot;
- (id)captureWonderlandSnapshot;
- (id)captureRDCWeblabRegistrationGuardSnapshot;
- (id)captureNavMenuRCDInitAtStartSnapshot;
- (id)captureNavMenuRCDIntegrationSnapshot;
- (id)captureNavMenuUseIntegForDebugRDCNavMenu;
- (id)captureSnowFlakesSnapshot;
- (id)captureSBDNativeDataSnapshot;
- (id)captureRemoteFetchingDurationWeblab;
- (id)captureClearBackstackOnGatewayLoadSnapShot;
- (id)captureLinkTreeRemoteFetcherSnapShot;
- (id)captureSBDMenuStyleSnapshot;
- (id)getRegisteredWeblabs;
- (id)initWithWeblabService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

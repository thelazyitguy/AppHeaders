//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMNavigationParametersProto_NavigationMediaConfig;

@interface GMSx_GMMNavigationParametersProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool agmmNativeRoadSnapping; // @dynamic agmmNativeRoadSnapping;
@property(nonatomic) int bearingNoiseSpeedFalloffMs; // @dynamic bearingNoiseSpeedFalloffMs;
@property(nonatomic) int bearingNoiseThresholdCmPerSec; // @dynamic bearingNoiseThresholdCmPerSec;
@property(nonatomic) int betterTripDivergenceSecondsPerSample; // @dynamic betterTripDivergenceSecondsPerSample;
@property(nonatomic) int betterTripMaxSecondsToDivergence; // @dynamic betterTripMaxSecondsToDivergence;
@property(nonatomic) int betterTripMinSecondsToDivergence; // @dynamic betterTripMinSecondsToDivergence;
@property(nonatomic) int betterTripPromptTimeoutSeconds; // @dynamic betterTripPromptTimeoutSeconds;
@property(nonatomic) int controllerMaxZoomDifferenceToAnimate; // @dynamic controllerMaxZoomDifferenceToAnimate;
@property(nonatomic) _Bool controllerUseAnimation; // @dynamic controllerUseAnimation;
@property(nonatomic) _Bool coreLocationDecreaseDesiredAccuracy; // @dynamic coreLocationDecreaseDesiredAccuracy;
@property(nonatomic) _Bool decodeSnaptileRoadAltitudes; // @dynamic decodeSnaptileRoadAltitudes;
@property(nonatomic) int deprecatedMinimumUe3LoggingIntervalSeconds; // @dynamic deprecatedMinimumUe3LoggingIntervalSeconds;
@property(nonatomic) _Bool disableEvBatteryAlerts; // @dynamic disableEvBatteryAlerts;
@property(nonatomic) _Bool disableImplicitDirectionSearch; // @dynamic disableImplicitDirectionSearch;
@property(nonatomic) _Bool disableIndoorMaps; // @dynamic disableIndoorMaps;
@property(nonatomic) _Bool disableNightmodeForNavMemoryBenchmarks; // @dynamic disableNightmodeForNavMemoryBenchmarks;
@property(nonatomic) _Bool disablePowerManager; // @dynamic disablePowerManager;
@property(nonatomic) _Bool disableTrafficReportOptionsForNavMemoryBenchmarks; // @dynamic disableTrafficReportOptionsForNavMemoryBenchmarks;
@property(nonatomic) _Bool displaySpeedLimits; // @dynamic displaySpeedLimits;
@property(nonatomic) _Bool enableAcausalSnappingMetrics; // @dynamic enableAcausalSnappingMetrics;
@property(nonatomic) _Bool enableAggressiveTileCacheTrimmingDebugOnly; // @dynamic enableAggressiveTileCacheTrimmingDebugOnly;
@property(nonatomic) _Bool enableArrivalCardLogging; // @dynamic enableArrivalCardLogging;
@property(nonatomic) _Bool enableArrivalCardSentimentSurvey; // @dynamic enableArrivalCardSentimentSurvey;
@property(nonatomic) _Bool enableArrivalCardStreetViewPeek; // @dynamic enableArrivalCardStreetViewPeek;
@property(nonatomic) _Bool enableAsyncLayoutInflation; // @dynamic enableAsyncLayoutInflation;
@property(nonatomic) _Bool enableAudibleChimes; // @dynamic enableAudibleChimes;
@property(nonatomic) _Bool enableAutoTriggerAssistantRoutines; // @dynamic enableAutoTriggerAssistantRoutines;
@property(nonatomic) _Bool enableBackgroundVoiceGuidanceWithoutNotifications; // @dynamic enableBackgroundVoiceGuidanceWithoutNotifications;
@property(nonatomic) _Bool enableBorderCrossingPopups; // @dynamic enableBorderCrossingPopups;
@property(nonatomic) _Bool enableCompassInNavigation; // @dynamic enableCompassInNavigation;
@property(nonatomic) _Bool enableCurrentRoadCallout; // @dynamic enableCurrentRoadCallout;
@property(nonatomic) _Bool enableCurvedRoadsForNav; // @dynamic enableCurvedRoadsForNav;
@property(nonatomic) _Bool enableDecisionHorizonCamera; // @dynamic enableDecisionHorizonCamera;
@property(nonatomic) _Bool enableDirectionsInlineSentimentSurvey; // @dynamic enableDirectionsInlineSentimentSurvey;
@property(nonatomic) _Bool enableDrivingAfterArrival; // @dynamic enableDrivingAfterArrival;
@property(nonatomic) _Bool enableExpandableArrivalCardLaunch; // @dynamic enableExpandableArrivalCardLaunch;
@property(nonatomic) _Bool enableEyesFreeWalkingGuidance; // @dynamic enableEyesFreeWalkingGuidance;
@property(nonatomic) _Bool enableGreyOutSelectedRoute; // @dynamic enableGreyOutSelectedRoute;
@property(nonatomic) _Bool enableIgmmNavHeaderSharedInstructionsUi; // @dynamic enableIgmmNavHeaderSharedInstructionsUi;
@property(nonatomic) _Bool enableIgmmRouteOverviewButtonV2; // @dynamic enableIgmmRouteOverviewButtonV2;
@property(nonatomic) _Bool enableLargerFabsInNav; // @dynamic enableLargerFabsInNav;
@property(nonatomic) _Bool enableLiveTrafficLabel; // @dynamic enableLiveTrafficLabel;
@property(nonatomic) _Bool enableManeuverCallouts; // @dynamic enableManeuverCallouts;
@property(nonatomic) _Bool enableNavGm2Footer; // @dynamic enableNavGm2Footer;
@property(nonatomic) _Bool enableNavGm2Header; // @dynamic enableNavGm2Header;
@property(nonatomic) _Bool enableNavMediaIntegration; // @dynamic enableNavMediaIntegration;
@property(nonatomic) _Bool enableNavMemoryBenchmarksDebugOnly; // @dynamic enableNavMemoryBenchmarksDebugOnly;
@property(nonatomic) _Bool enableNavToAddAStop; // @dynamic enableNavToAddAStop;
@property(nonatomic) _Bool enableNavigationDimScreen; // @dynamic enableNavigationDimScreen;
@property(nonatomic) _Bool enableNavigationPauseSpokenWordAudio; // @dynamic enableNavigationPauseSpokenWordAudio;
@property(nonatomic) _Bool enableNavigationRmi; // @dynamic enableNavigationRmi;
@property(nonatomic) _Bool enableNavigationStartupPerformanceImprovements; // @dynamic enableNavigationStartupPerformanceImprovements;
@property(nonatomic) _Bool enablePantastic; // @dynamic enablePantastic;
@property(nonatomic) _Bool enablePatchworkSnaptileMap; // @dynamic enablePatchworkSnaptileMap;
@property(nonatomic) _Bool enablePhoneInertialSensorsForNav; // @dynamic enablePhoneInertialSensorsForNav;
@property(nonatomic) _Bool enableRoadSnappingParameterFuzzing; // @dynamic enableRoadSnappingParameterFuzzing;
@property(nonatomic) _Bool enableShareMyEta; // @dynamic enableShareMyEta;
@property(nonatomic) _Bool enableTerraArrivalCard; // @dynamic enableTerraArrivalCard;
@property(nonatomic) _Bool enableTrafficRadar; // @dynamic enableTrafficRadar;
@property(nonatomic) int estimatedBatteryLifeSeconds; // @dynamic estimatedBatteryLifeSeconds;
@property(nonatomic) _Bool forceUnmute; // @dynamic forceUnmute;
@property(nonatomic) int frameRateInNav; // @dynamic frameRateInNav;
@property(nonatomic) int gpsAccuracyDefaultIfMissingMeters; // @dynamic gpsAccuracyDefaultIfMissingMeters;
@property(nonatomic) int gpsAccuracyScalePercent; // @dynamic gpsAccuracyScalePercent;
@property(nonatomic) int gpsAccuracyThresholdMeters; // @dynamic gpsAccuracyThresholdMeters;
@property(nonatomic) int gpsMinSatellitesForAccurateGps; // @dynamic gpsMinSatellitesForAccurateGps;
@property(nonatomic) int gpsMinUpdateIntervalMs; // @dynamic gpsMinUpdateIntervalMs;
@property(nonatomic) int gpsTimeoutMs; // @dynamic gpsTimeoutMs;
@property(nonatomic) _Bool hasAgmmNativeRoadSnapping; // @dynamic hasAgmmNativeRoadSnapping;
@property(nonatomic) _Bool hasBearingNoiseSpeedFalloffMs; // @dynamic hasBearingNoiseSpeedFalloffMs;
@property(nonatomic) _Bool hasBearingNoiseThresholdCmPerSec; // @dynamic hasBearingNoiseThresholdCmPerSec;
@property(nonatomic) _Bool hasBetterTripDivergenceSecondsPerSample; // @dynamic hasBetterTripDivergenceSecondsPerSample;
@property(nonatomic) _Bool hasBetterTripMaxSecondsToDivergence; // @dynamic hasBetterTripMaxSecondsToDivergence;
@property(nonatomic) _Bool hasBetterTripMinSecondsToDivergence; // @dynamic hasBetterTripMinSecondsToDivergence;
@property(nonatomic) _Bool hasBetterTripPromptTimeoutSeconds; // @dynamic hasBetterTripPromptTimeoutSeconds;
@property(nonatomic) _Bool hasControllerMaxZoomDifferenceToAnimate; // @dynamic hasControllerMaxZoomDifferenceToAnimate;
@property(nonatomic) _Bool hasControllerUseAnimation; // @dynamic hasControllerUseAnimation;
@property(nonatomic) _Bool hasCoreLocationDecreaseDesiredAccuracy; // @dynamic hasCoreLocationDecreaseDesiredAccuracy;
@property(nonatomic) _Bool hasDecodeSnaptileRoadAltitudes; // @dynamic hasDecodeSnaptileRoadAltitudes;
@property(nonatomic) _Bool hasDeprecatedMinimumUe3LoggingIntervalSeconds; // @dynamic hasDeprecatedMinimumUe3LoggingIntervalSeconds;
@property(nonatomic) _Bool hasDisableEvBatteryAlerts; // @dynamic hasDisableEvBatteryAlerts;
@property(nonatomic) _Bool hasDisableImplicitDirectionSearch; // @dynamic hasDisableImplicitDirectionSearch;
@property(nonatomic) _Bool hasDisableIndoorMaps; // @dynamic hasDisableIndoorMaps;
@property(nonatomic) _Bool hasDisableNightmodeForNavMemoryBenchmarks; // @dynamic hasDisableNightmodeForNavMemoryBenchmarks;
@property(nonatomic) _Bool hasDisablePowerManager; // @dynamic hasDisablePowerManager;
@property(nonatomic) _Bool hasDisableTrafficReportOptionsForNavMemoryBenchmarks; // @dynamic hasDisableTrafficReportOptionsForNavMemoryBenchmarks;
@property(nonatomic) _Bool hasDisplaySpeedLimits; // @dynamic hasDisplaySpeedLimits;
@property(nonatomic) _Bool hasEnableAcausalSnappingMetrics; // @dynamic hasEnableAcausalSnappingMetrics;
@property(nonatomic) _Bool hasEnableAggressiveTileCacheTrimmingDebugOnly; // @dynamic hasEnableAggressiveTileCacheTrimmingDebugOnly;
@property(nonatomic) _Bool hasEnableArrivalCardLogging; // @dynamic hasEnableArrivalCardLogging;
@property(nonatomic) _Bool hasEnableArrivalCardSentimentSurvey; // @dynamic hasEnableArrivalCardSentimentSurvey;
@property(nonatomic) _Bool hasEnableArrivalCardStreetViewPeek; // @dynamic hasEnableArrivalCardStreetViewPeek;
@property(nonatomic) _Bool hasEnableAsyncLayoutInflation; // @dynamic hasEnableAsyncLayoutInflation;
@property(nonatomic) _Bool hasEnableAudibleChimes; // @dynamic hasEnableAudibleChimes;
@property(nonatomic) _Bool hasEnableAutoTriggerAssistantRoutines; // @dynamic hasEnableAutoTriggerAssistantRoutines;
@property(nonatomic) _Bool hasEnableBackgroundVoiceGuidanceWithoutNotifications; // @dynamic hasEnableBackgroundVoiceGuidanceWithoutNotifications;
@property(nonatomic) _Bool hasEnableBorderCrossingPopups; // @dynamic hasEnableBorderCrossingPopups;
@property(nonatomic) _Bool hasEnableCompassInNavigation; // @dynamic hasEnableCompassInNavigation;
@property(nonatomic) _Bool hasEnableCurrentRoadCallout; // @dynamic hasEnableCurrentRoadCallout;
@property(nonatomic) _Bool hasEnableCurvedRoadsForNav; // @dynamic hasEnableCurvedRoadsForNav;
@property(nonatomic) _Bool hasEnableDecisionHorizonCamera; // @dynamic hasEnableDecisionHorizonCamera;
@property(nonatomic) _Bool hasEnableDirectionsInlineSentimentSurvey; // @dynamic hasEnableDirectionsInlineSentimentSurvey;
@property(nonatomic) _Bool hasEnableDrivingAfterArrival; // @dynamic hasEnableDrivingAfterArrival;
@property(nonatomic) _Bool hasEnableExpandableArrivalCardLaunch; // @dynamic hasEnableExpandableArrivalCardLaunch;
@property(nonatomic) _Bool hasEnableEyesFreeWalkingGuidance; // @dynamic hasEnableEyesFreeWalkingGuidance;
@property(nonatomic) _Bool hasEnableGreyOutSelectedRoute; // @dynamic hasEnableGreyOutSelectedRoute;
@property(nonatomic) _Bool hasEnableIgmmNavHeaderSharedInstructionsUi; // @dynamic hasEnableIgmmNavHeaderSharedInstructionsUi;
@property(nonatomic) _Bool hasEnableIgmmRouteOverviewButtonV2; // @dynamic hasEnableIgmmRouteOverviewButtonV2;
@property(nonatomic) _Bool hasEnableLargerFabsInNav; // @dynamic hasEnableLargerFabsInNav;
@property(nonatomic) _Bool hasEnableLiveTrafficLabel; // @dynamic hasEnableLiveTrafficLabel;
@property(nonatomic) _Bool hasEnableManeuverCallouts; // @dynamic hasEnableManeuverCallouts;
@property(nonatomic) _Bool hasEnableNavGm2Footer; // @dynamic hasEnableNavGm2Footer;
@property(nonatomic) _Bool hasEnableNavGm2Header; // @dynamic hasEnableNavGm2Header;
@property(nonatomic) _Bool hasEnableNavMediaIntegration; // @dynamic hasEnableNavMediaIntegration;
@property(nonatomic) _Bool hasEnableNavMemoryBenchmarksDebugOnly; // @dynamic hasEnableNavMemoryBenchmarksDebugOnly;
@property(nonatomic) _Bool hasEnableNavToAddAStop; // @dynamic hasEnableNavToAddAStop;
@property(nonatomic) _Bool hasEnableNavigationDimScreen; // @dynamic hasEnableNavigationDimScreen;
@property(nonatomic) _Bool hasEnableNavigationPauseSpokenWordAudio; // @dynamic hasEnableNavigationPauseSpokenWordAudio;
@property(nonatomic) _Bool hasEnableNavigationRmi; // @dynamic hasEnableNavigationRmi;
@property(nonatomic) _Bool hasEnableNavigationStartupPerformanceImprovements; // @dynamic hasEnableNavigationStartupPerformanceImprovements;
@property(nonatomic) _Bool hasEnablePantastic; // @dynamic hasEnablePantastic;
@property(nonatomic) _Bool hasEnablePatchworkSnaptileMap; // @dynamic hasEnablePatchworkSnaptileMap;
@property(nonatomic) _Bool hasEnablePhoneInertialSensorsForNav; // @dynamic hasEnablePhoneInertialSensorsForNav;
@property(nonatomic) _Bool hasEnableRoadSnappingParameterFuzzing; // @dynamic hasEnableRoadSnappingParameterFuzzing;
@property(nonatomic) _Bool hasEnableShareMyEta; // @dynamic hasEnableShareMyEta;
@property(nonatomic) _Bool hasEnableTerraArrivalCard; // @dynamic hasEnableTerraArrivalCard;
@property(nonatomic) _Bool hasEnableTrafficRadar; // @dynamic hasEnableTrafficRadar;
@property(nonatomic) _Bool hasEstimatedBatteryLifeSeconds; // @dynamic hasEstimatedBatteryLifeSeconds;
@property(nonatomic) _Bool hasForceUnmute; // @dynamic hasForceUnmute;
@property(nonatomic) _Bool hasFrameRateInNav; // @dynamic hasFrameRateInNav;
@property(nonatomic) _Bool hasGpsAccuracyDefaultIfMissingMeters; // @dynamic hasGpsAccuracyDefaultIfMissingMeters;
@property(nonatomic) _Bool hasGpsAccuracyScalePercent; // @dynamic hasGpsAccuracyScalePercent;
@property(nonatomic) _Bool hasGpsAccuracyThresholdMeters; // @dynamic hasGpsAccuracyThresholdMeters;
@property(nonatomic) _Bool hasGpsMinSatellitesForAccurateGps; // @dynamic hasGpsMinSatellitesForAccurateGps;
@property(nonatomic) _Bool hasGpsMinUpdateIntervalMs; // @dynamic hasGpsMinUpdateIntervalMs;
@property(nonatomic) _Bool hasGpsTimeoutMs; // @dynamic hasGpsTimeoutMs;
@property(nonatomic) _Bool hasHmmBaselineTransitionInverseLikelihood; // @dynamic hasHmmBaselineTransitionInverseLikelihood;
@property(nonatomic) _Bool hasHmmConnectivityToleranceWorld; // @dynamic hasHmmConnectivityToleranceWorld;
@property(nonatomic) _Bool hasHmmMaxRoadNetworkRadiusMeters; // @dynamic hasHmmMaxRoadNetworkRadiusMeters;
@property(nonatomic) _Bool hasHmmNumCandidatesToKeep; // @dynamic hasHmmNumCandidatesToKeep;
@property(nonatomic) _Bool hasHmmOffRoadLikelihoodThreshold; // @dynamic hasHmmOffRoadLikelihoodThreshold;
@property(nonatomic) _Bool hasHmmRoadNetworkBearingErrorStdDeg; // @dynamic hasHmmRoadNetworkBearingErrorStdDeg;
@property(nonatomic) _Bool hasHmmRoadNetworkErrorStdMeters; // @dynamic hasHmmRoadNetworkErrorStdMeters;
@property(nonatomic) _Bool hasHmmRouteLikelihoodWeightMillionths; // @dynamic hasHmmRouteLikelihoodWeightMillionths;
@property(nonatomic) _Bool hasHmmRouteMatchingToleranceWorld; // @dynamic hasHmmRouteMatchingToleranceWorld;
@property(nonatomic) _Bool hasHmmStayOnRouteLikelihoodWeight; // @dynamic hasHmmStayOnRouteLikelihoodWeight;
@property(nonatomic) _Bool hasHmmSwitchToAlternateLikelihoodWeight; // @dynamic hasHmmSwitchToAlternateLikelihoodWeight;
@property(nonatomic) _Bool hasHmmTunnelEmissionLikelihoodMillionths; // @dynamic hasHmmTunnelEmissionLikelihoodMillionths;
@property(nonatomic) _Bool hasIgmmCoreLocationAccuracyHighThreshold; // @dynamic hasIgmmCoreLocationAccuracyHighThreshold;
@property(nonatomic) _Bool hasIgmmCoreLocationAccuracyMediumThreshold; // @dynamic hasIgmmCoreLocationAccuracyMediumThreshold;
@property(nonatomic) _Bool hasIgmmCoreLocationStaleDiscardThresholdSeconds; // @dynamic hasIgmmCoreLocationStaleDiscardThresholdSeconds;
@property(nonatomic) _Bool hasLoggingAllowPersonal; // @dynamic hasLoggingAllowPersonal;
@property(nonatomic) _Bool hasLoggingAndroidActivityRecognitionMaxActivities; // @dynamic hasLoggingAndroidActivityRecognitionMaxActivities;
@property(nonatomic) _Bool hasLoggingAndroidActivityRecognitionPeriodSeconds; // @dynamic hasLoggingAndroidActivityRecognitionPeriodSeconds;
@property(nonatomic) _Bool hasLoggingCollectionTicks; // @dynamic hasLoggingCollectionTicks;
@property(nonatomic) _Bool hasLoggingEnableAutomotiveContextLogging; // @dynamic hasLoggingEnableAutomotiveContextLogging;
@property(nonatomic) _Bool hasLoggingEnableAutomotiveContextProjectedLogging; // @dynamic hasLoggingEnableAutomotiveContextProjectedLogging;
@property(nonatomic) _Bool hasLoggingEnableEgmmLogging; // @dynamic hasLoggingEnableEgmmLogging;
@property(nonatomic) _Bool hasLoggingEnableForwarding; // @dynamic hasLoggingEnableForwarding;
@property(nonatomic) _Bool hasLoggingEnableFreeNavLogging; // @dynamic hasLoggingEnableFreeNavLogging;
@property(nonatomic) _Bool hasLoggingEnableLogging; // @dynamic hasLoggingEnableLogging;
@property(nonatomic) _Bool hasLoggingEnableWaaOffLogging; // @dynamic hasLoggingEnableWaaOffLogging;
@property(nonatomic) _Bool hasLoggingLogRawLocations; // @dynamic hasLoggingLogRawLocations;
@property(nonatomic) _Bool hasLoggingLogSnappedLocations; // @dynamic hasLoggingLogSnappedLocations;
@property(nonatomic) _Bool hasLoggingLowConfidenceCollectionTicks; // @dynamic hasLoggingLowConfidenceCollectionTicks;
@property(nonatomic) _Bool hasLoggingMaxDataAgeSeconds; // @dynamic hasLoggingMaxDataAgeSeconds;
@property(nonatomic) _Bool hasLoggingMaxGwsInflightRpcs; // @dynamic hasLoggingMaxGwsInflightRpcs;
@property(nonatomic) _Bool hasLoggingMaxGwsReplyDelayMs; // @dynamic hasLoggingMaxGwsReplyDelayMs;
@property(nonatomic) _Bool hasLoggingMaxScrubbingDistanceMeters; // @dynamic hasLoggingMaxScrubbingDistanceMeters;
@property(nonatomic) _Bool hasLoggingMaximumGapTicks; // @dynamic hasLoggingMaximumGapTicks;
@property(nonatomic) _Bool hasLoggingMechanism; // @dynamic hasLoggingMechanism;
@property(nonatomic) _Bool hasLoggingMinHighConfidencePercent; // @dynamic hasLoggingMinHighConfidencePercent;
@property(nonatomic) _Bool hasLoggingMinScrubbingDistanceMeters; // @dynamic hasLoggingMinScrubbingDistanceMeters;
@property(nonatomic) _Bool hasLoggingMinTrustworthyTicks; // @dynamic hasLoggingMinTrustworthyTicks;
@property(nonatomic) _Bool hasLoggingPreferSnappedUserTracks; // @dynamic hasLoggingPreferSnappedUserTracks;
@property(nonatomic) _Bool hasLoggingProjectedRouteMaximumDurationSeconds; // @dynamic hasLoggingProjectedRouteMaximumDurationSeconds;
@property(nonatomic) _Bool hasLoggingProjectedRouteMaximumNumberOfRoutes; // @dynamic hasLoggingProjectedRouteMaximumNumberOfRoutes;
@property(nonatomic) _Bool hasLoggingProjectedRouteSamplingIntervalSeconds; // @dynamic hasLoggingProjectedRouteSamplingIntervalSeconds;
@property(nonatomic) _Bool hasLoggingSampleMidSegments; // @dynamic hasLoggingSampleMidSegments;
@property(nonatomic) _Bool hasLoggingShutdownGracePeriodMs; // @dynamic hasLoggingShutdownGracePeriodMs;
@property(nonatomic) _Bool hasLoggingTickIntervalMs; // @dynamic hasLoggingTickIntervalMs;
@property(nonatomic) _Bool hasLoggingTimestampQuantizationSeconds; // @dynamic hasLoggingTimestampQuantizationSeconds;
@property(nonatomic) _Bool hasLoggingUploadIntervalSeconds; // @dynamic hasLoggingUploadIntervalSeconds;
@property(nonatomic) _Bool hasMapVersusSensorInconsistencySampleRate; // @dynamic hasMapVersusSensorInconsistencySampleRate;
@property(nonatomic) _Bool hasMaxNavTactileTripUpdateIntervalSeconds; // @dynamic hasMaxNavTactileTripUpdateIntervalSeconds;
@property(nonatomic) _Bool hasMaxOfflineNavEnergyUpdateIntervalSeconds; // @dynamic hasMaxOfflineNavEnergyUpdateIntervalSeconds;
@property(nonatomic) _Bool hasMaxTilesToCacheDebugOnly; // @dynamic hasMaxTilesToCacheDebugOnly;
@property(nonatomic) _Bool hasMaxUseTrafficInSavedDirectionsSeconds; // @dynamic hasMaxUseTrafficInSavedDirectionsSeconds;
@property(nonatomic) _Bool hasMinSecondsBetweenRerouteChimes; // @dynamic hasMinSecondsBetweenRerouteChimes;
@property(nonatomic) _Bool hasNavMediaConfig; // @dynamic hasNavMediaConfig;
@property(nonatomic) _Bool hasNavOnRouteConfidenceThreshold; // @dynamic hasNavOnRouteConfidenceThreshold;
@property(nonatomic) _Bool hasNavSuboptimalRouteCoefficientMillionths; // @dynamic hasNavSuboptimalRouteCoefficientMillionths;
@property(nonatomic) _Bool hasNavTactileFirstTripUpdateIntervalSeconds; // @dynamic hasNavTactileFirstTripUpdateIntervalSeconds;
@property(nonatomic) _Bool hasNavTactileTripUpdateIntervalSeconds; // @dynamic hasNavTactileTripUpdateIntervalSeconds;
@property(nonatomic) _Bool hasNavTrafficStatusDistanceKm; // @dynamic hasNavTrafficStatusDistanceKm;
@property(nonatomic) _Bool hasNavTrafficUpdateIntervalSeconds; // @dynamic hasNavTrafficUpdateIntervalSeconds;
@property(nonatomic) _Bool hasNavTrafficValidityPeriodSeconds; // @dynamic hasNavTrafficValidityPeriodSeconds;
@property(nonatomic) _Bool hasNavigationRmiPromoTriggerRerouteCount; // @dynamic hasNavigationRmiPromoTriggerRerouteCount;
@property(nonatomic) _Bool hasNoOnRouteLocationsRerouteThresholdSeconds; // @dynamic hasNoOnRouteLocationsRerouteThresholdSeconds;
@property(nonatomic) _Bool hasOfflineReroutingEnablePercent; // @dynamic hasOfflineReroutingEnablePercent;
@property(nonatomic) _Bool hasPolylineSnappingRerouteBaseMeters; // @dynamic hasPolylineSnappingRerouteBaseMeters;
@property(nonatomic) _Bool hasPowerSavingsPromptTimeoutSeconds; // @dynamic hasPowerSavingsPromptTimeoutSeconds;
@property(nonatomic) _Bool hasPredictedBatteryDrainPercentToTriggerPowerSavings; // @dynamic hasPredictedBatteryDrainPercentToTriggerPowerSavings;
@property(nonatomic) _Bool hasPrefetcherCacheProcessingDelayMs; // @dynamic hasPrefetcherCacheProcessingDelayMs;
@property(nonatomic) _Bool hasPrefetcherFetchProcessingDelayMs; // @dynamic hasPrefetcherFetchProcessingDelayMs;
@property(nonatomic) _Bool hasPrefetcherMaxKm; // @dynamic hasPrefetcherMaxKm;
@property(nonatomic) _Bool hasPrefetcherMaxTilesPerRequest; // @dynamic hasPrefetcherMaxTilesPerRequest;
@property(nonatomic) _Bool hasRasterMaps; // @dynamic hasRasterMaps;
@property(nonatomic) _Bool hasRejectBetterRouteByDefaultDebugOnly; // @dynamic hasRejectBetterRouteByDefaultDebugOnly;
@property(nonatomic) _Bool hasRenderVisible3DBuildingsIgnoringTileClipping; // @dynamic hasRenderVisible3DBuildingsIgnoringTileClipping;
@property(nonatomic) _Bool hasRerouteCountExclusionMetersFromEndpoints; // @dynamic hasRerouteCountExclusionMetersFromEndpoints;
@property(nonatomic) _Bool hasSaveParkingAfterNavExit; // @dynamic hasSaveParkingAfterNavExit;
@property(nonatomic) _Bool hasSaveParkingAfterNavExitDelaySec; // @dynamic hasSaveParkingAfterNavExitDelaySec;
@property(nonatomic) _Bool hasSettingsRefreshWithInlineButtons; // @dynamic hasSettingsRefreshWithInlineButtons;
@property(nonatomic) _Bool hasSnappingTraceSpontaneousRate; // @dynamic hasSnappingTraceSpontaneousRate;
@property(nonatomic) _Bool hasSnappingTraceTriggeredRate; // @dynamic hasSnappingTraceTriggeredRate;
@property(nonatomic) _Bool hasUseGoAsStartNavigationButtonLabel; // @dynamic hasUseGoAsStartNavigationButtonLabel;
@property(nonatomic) _Bool hasUseRoadSpeedsInSnapping; // @dynamic hasUseRoadSpeedsInSnapping;
@property(nonatomic) _Bool hasVectorMinIconHeightForScalingPx; // @dynamic hasVectorMinIconHeightForScalingPx;
@property(nonatomic) _Bool hasVoiceRmiEnablePercent; // @dynamic hasVoiceRmiEnablePercent;
@property(nonatomic) _Bool hasWazeTunnelBeacons; // @dynamic hasWazeTunnelBeacons;
@property(nonatomic) int hmmBaselineTransitionInverseLikelihood; // @dynamic hmmBaselineTransitionInverseLikelihood;
@property(nonatomic) int hmmConnectivityToleranceWorld; // @dynamic hmmConnectivityToleranceWorld;
@property(nonatomic) int hmmMaxRoadNetworkRadiusMeters; // @dynamic hmmMaxRoadNetworkRadiusMeters;
@property(nonatomic) int hmmNumCandidatesToKeep; // @dynamic hmmNumCandidatesToKeep;
@property(nonatomic) unsigned int hmmOffRoadLikelihoodThreshold; // @dynamic hmmOffRoadLikelihoodThreshold;
@property(nonatomic) int hmmRoadNetworkBearingErrorStdDeg; // @dynamic hmmRoadNetworkBearingErrorStdDeg;
@property(nonatomic) int hmmRoadNetworkErrorStdMeters; // @dynamic hmmRoadNetworkErrorStdMeters;
@property(nonatomic) unsigned int hmmRouteLikelihoodWeightMillionths; // @dynamic hmmRouteLikelihoodWeightMillionths;
@property(nonatomic) int hmmRouteMatchingToleranceWorld; // @dynamic hmmRouteMatchingToleranceWorld;
@property(nonatomic) float hmmStayOnRouteLikelihoodWeight; // @dynamic hmmStayOnRouteLikelihoodWeight;
@property(nonatomic) float hmmSwitchToAlternateLikelihoodWeight; // @dynamic hmmSwitchToAlternateLikelihoodWeight;
@property(nonatomic) unsigned int hmmTunnelEmissionLikelihoodMillionths; // @dynamic hmmTunnelEmissionLikelihoodMillionths;
@property(nonatomic) int igmmCoreLocationAccuracyHighThreshold; // @dynamic igmmCoreLocationAccuracyHighThreshold;
@property(nonatomic) int igmmCoreLocationAccuracyMediumThreshold; // @dynamic igmmCoreLocationAccuracyMediumThreshold;
@property(nonatomic) int igmmCoreLocationStaleDiscardThresholdSeconds; // @dynamic igmmCoreLocationStaleDiscardThresholdSeconds;
@property(nonatomic) _Bool loggingAllowPersonal; // @dynamic loggingAllowPersonal;
@property(nonatomic) int loggingAndroidActivityRecognitionMaxActivities; // @dynamic loggingAndroidActivityRecognitionMaxActivities;
@property(nonatomic) int loggingAndroidActivityRecognitionPeriodSeconds; // @dynamic loggingAndroidActivityRecognitionPeriodSeconds;
@property(nonatomic) int loggingCollectionTicks; // @dynamic loggingCollectionTicks;
@property(nonatomic) _Bool loggingEnableAutomotiveContextLogging; // @dynamic loggingEnableAutomotiveContextLogging;
@property(nonatomic) _Bool loggingEnableAutomotiveContextProjectedLogging; // @dynamic loggingEnableAutomotiveContextProjectedLogging;
@property(nonatomic) _Bool loggingEnableEgmmLogging; // @dynamic loggingEnableEgmmLogging;
@property(nonatomic) _Bool loggingEnableForwarding; // @dynamic loggingEnableForwarding;
@property(nonatomic) _Bool loggingEnableFreeNavLogging; // @dynamic loggingEnableFreeNavLogging;
@property(nonatomic) _Bool loggingEnableLogging; // @dynamic loggingEnableLogging;
@property(nonatomic) _Bool loggingEnableWaaOffLogging; // @dynamic loggingEnableWaaOffLogging;
@property(nonatomic) _Bool loggingLogRawLocations; // @dynamic loggingLogRawLocations;
@property(nonatomic) _Bool loggingLogSnappedLocations; // @dynamic loggingLogSnappedLocations;
@property(nonatomic) int loggingLowConfidenceCollectionTicks; // @dynamic loggingLowConfidenceCollectionTicks;
@property(nonatomic) int loggingMaxDataAgeSeconds; // @dynamic loggingMaxDataAgeSeconds;
@property(nonatomic) int loggingMaxGwsInflightRpcs; // @dynamic loggingMaxGwsInflightRpcs;
@property(nonatomic) int loggingMaxGwsReplyDelayMs; // @dynamic loggingMaxGwsReplyDelayMs;
@property(nonatomic) int loggingMaxScrubbingDistanceMeters; // @dynamic loggingMaxScrubbingDistanceMeters;
@property(nonatomic) int loggingMaximumGapTicks; // @dynamic loggingMaximumGapTicks;
@property(nonatomic) int loggingMechanism; // @dynamic loggingMechanism;
@property(nonatomic) int loggingMinHighConfidencePercent; // @dynamic loggingMinHighConfidencePercent;
@property(nonatomic) int loggingMinScrubbingDistanceMeters; // @dynamic loggingMinScrubbingDistanceMeters;
@property(nonatomic) int loggingMinTrustworthyTicks; // @dynamic loggingMinTrustworthyTicks;
@property(nonatomic) _Bool loggingPreferSnappedUserTracks; // @dynamic loggingPreferSnappedUserTracks;
@property(nonatomic) int loggingProjectedRouteMaximumDurationSeconds; // @dynamic loggingProjectedRouteMaximumDurationSeconds;
@property(nonatomic) int loggingProjectedRouteMaximumNumberOfRoutes; // @dynamic loggingProjectedRouteMaximumNumberOfRoutes;
@property(nonatomic) int loggingProjectedRouteSamplingIntervalSeconds; // @dynamic loggingProjectedRouteSamplingIntervalSeconds;
@property(nonatomic) _Bool loggingSampleMidSegments; // @dynamic loggingSampleMidSegments;
@property(nonatomic) int loggingShutdownGracePeriodMs; // @dynamic loggingShutdownGracePeriodMs;
@property(nonatomic) int loggingTickIntervalMs; // @dynamic loggingTickIntervalMs;
@property(nonatomic) int loggingTimestampQuantizationSeconds; // @dynamic loggingTimestampQuantizationSeconds;
@property(nonatomic) int loggingUploadIntervalSeconds; // @dynamic loggingUploadIntervalSeconds;
@property(nonatomic) float mapVersusSensorInconsistencySampleRate; // @dynamic mapVersusSensorInconsistencySampleRate;
@property(nonatomic) int maxNavTactileTripUpdateIntervalSeconds; // @dynamic maxNavTactileTripUpdateIntervalSeconds;
@property(nonatomic) int maxOfflineNavEnergyUpdateIntervalSeconds; // @dynamic maxOfflineNavEnergyUpdateIntervalSeconds;
@property(nonatomic) int maxTilesToCacheDebugOnly; // @dynamic maxTilesToCacheDebugOnly;
@property(nonatomic) int maxUseTrafficInSavedDirectionsSeconds; // @dynamic maxUseTrafficInSavedDirectionsSeconds;
@property(nonatomic) int minSecondsBetweenRerouteChimes; // @dynamic minSecondsBetweenRerouteChimes;
@property(retain, nonatomic) GMSx_GMMNavigationParametersProto_NavigationMediaConfig *navMediaConfig; // @dynamic navMediaConfig;
@property(nonatomic) unsigned int navOnRouteConfidenceThreshold; // @dynamic navOnRouteConfidenceThreshold;
@property(nonatomic) unsigned int navSuboptimalRouteCoefficientMillionths; // @dynamic navSuboptimalRouteCoefficientMillionths;
@property(nonatomic) int navTactileFirstTripUpdateIntervalSeconds; // @dynamic navTactileFirstTripUpdateIntervalSeconds;
@property(nonatomic) int navTactileTripUpdateIntervalSeconds; // @dynamic navTactileTripUpdateIntervalSeconds;
@property(nonatomic) int navTrafficStatusDistanceKm; // @dynamic navTrafficStatusDistanceKm;
@property(nonatomic) int navTrafficUpdateIntervalSeconds; // @dynamic navTrafficUpdateIntervalSeconds;
@property(nonatomic) int navTrafficValidityPeriodSeconds; // @dynamic navTrafficValidityPeriodSeconds;
@property(nonatomic) int navigationRmiPromoTriggerRerouteCount; // @dynamic navigationRmiPromoTriggerRerouteCount;
@property(nonatomic) float noOnRouteLocationsRerouteThresholdSeconds; // @dynamic noOnRouteLocationsRerouteThresholdSeconds;
@property(nonatomic) int offlineReroutingEnablePercent; // @dynamic offlineReroutingEnablePercent;
@property(nonatomic) int polylineSnappingRerouteBaseMeters; // @dynamic polylineSnappingRerouteBaseMeters;
@property(nonatomic) int powerSavingsPromptTimeoutSeconds; // @dynamic powerSavingsPromptTimeoutSeconds;
@property(nonatomic) int predictedBatteryDrainPercentToTriggerPowerSavings; // @dynamic predictedBatteryDrainPercentToTriggerPowerSavings;
@property(nonatomic) int prefetcherCacheProcessingDelayMs; // @dynamic prefetcherCacheProcessingDelayMs;
@property(nonatomic) int prefetcherFetchProcessingDelayMs; // @dynamic prefetcherFetchProcessingDelayMs;
@property(nonatomic) int prefetcherMaxKm; // @dynamic prefetcherMaxKm;
@property(nonatomic) int prefetcherMaxTilesPerRequest; // @dynamic prefetcherMaxTilesPerRequest;
@property(nonatomic) _Bool rasterMaps; // @dynamic rasterMaps;
@property(nonatomic) _Bool rejectBetterRouteByDefaultDebugOnly; // @dynamic rejectBetterRouteByDefaultDebugOnly;
@property(nonatomic) _Bool renderVisible3DBuildingsIgnoringTileClipping; // @dynamic renderVisible3DBuildingsIgnoringTileClipping;
@property(nonatomic) int rerouteCountExclusionMetersFromEndpoints; // @dynamic rerouteCountExclusionMetersFromEndpoints;
@property(nonatomic) _Bool saveParkingAfterNavExit; // @dynamic saveParkingAfterNavExit;
@property(nonatomic) int saveParkingAfterNavExitDelaySec; // @dynamic saveParkingAfterNavExitDelaySec;
@property(nonatomic) _Bool settingsRefreshWithInlineButtons; // @dynamic settingsRefreshWithInlineButtons;
@property(nonatomic) float snappingTraceSpontaneousRate; // @dynamic snappingTraceSpontaneousRate;
@property(nonatomic) float snappingTraceTriggeredRate; // @dynamic snappingTraceTriggeredRate;
@property(nonatomic) _Bool useGoAsStartNavigationButtonLabel; // @dynamic useGoAsStartNavigationButtonLabel;
@property(nonatomic) _Bool useRoadSpeedsInSnapping; // @dynamic useRoadSpeedsInSnapping;
@property(nonatomic) int vectorMinIconHeightForScalingPx; // @dynamic vectorMinIconHeightForScalingPx;
@property(nonatomic) int voiceRmiEnablePercent; // @dynamic voiceRmiEnablePercent;
@property(nonatomic) _Bool wazeTunnelBeacons; // @dynamic wazeTunnelBeacons;

@end

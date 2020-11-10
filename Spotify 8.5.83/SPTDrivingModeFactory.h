//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingModeViewControllerFactory-Protocol.h"

@class NSString, SPTDrivingModeLogger;
@protocol SPTCarModeEngineService, SPTContainerService, SPTDrivingModeRemoteConfiguration, SPTExternalIntegrationContentService, SPTExternalIntegrationPlaybackService, SPTGLUEService, SPTNetworkService, SPTNowPlayingPlatformService, SPTNowPlayingService, SPTOnDemandService, SPTPlayer, SPTPlayerFeature, SPTPlaylistPlatformService, SPTRemoteConfigurationService, SPTService, SPTSessionService, SPTSettingsFeature, SPTUIPresentationService;

@interface SPTDrivingModeFactory : NSObject <SPTDrivingModeViewControllerFactory>
{
    id <SPTPlayer> _player;
    SPTDrivingModeLogger *_logger;
    id <SPTDrivingModeRemoteConfiguration> _remoteConfiguration;
    id <SPTCarModeEngineService> _carModeEngineService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTNowPlayingService> _nowPlayingService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTUIPresentationService> _UIPresentationService;
    id <SPTGLUEService> _glueService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTExternalIntegrationContentService> _externalIntegrationContentService;
    id <SPTContainerService> _containerService;
    id <SPTNetworkService> _networkService;
    id <SPTSessionService> _sessionService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTOnDemandService> _onDemandSetService;
    id <SPTService> _drivingModeService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(readonly, nonatomic) __weak id <SPTService> drivingModeService; // @synthesize drivingModeService=_drivingModeService;
@property(readonly, nonatomic) __weak id <SPTOnDemandService> onDemandSetService; // @synthesize onDemandSetService=_onDemandSetService;
@property(readonly, nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(readonly, nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTExternalIntegrationContentService> externalIntegrationContentService; // @synthesize externalIntegrationContentService=_externalIntegrationContentService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(readonly, nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(readonly, nonatomic) __weak id <SPTUIPresentationService> UIPresentationService; // @synthesize UIPresentationService=_UIPresentationService;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(readonly, nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTCarModeEngineService> carModeEngineService; // @synthesize carModeEngineService=_carModeEngineService;
- (id)createViewControllerForUnit:(unsigned long long)arg1 session:(id)arg2;
- (id)createFooterUnitViewControllerForSession:(id)arg1;
- (id)createAdsHeadUnitViewController;
- (id)createPodcastHeadUnitViewController;
- (id)createFeedbackHeadUnitViewController;
- (id)createDefaultHeadUnitViewController;
- (id)createDurationUnitViewController;
- (id)createInformationUnitViewController;
- (id)createEmptyUnitViewController;
- (id)createNavigationBarUnitViewControllerForSession:(id)arg1;
- (id)createPivotList;
- (id)createHomeFeedList;
- (id)createCarModePlayer;
- (id)createPivotPlayer;
- (id)createNowPlayingModesWithOptOutHandler:(id)arg1;
- (id)createSessionWithOptOutHandler:(id)arg1;
- (id)createDrivingModeController;
- (id)createTestManagerForService:(id)arg1;
@property(readonly, nonatomic) id <SPTDrivingModeRemoteConfiguration> remoteConfiguration; // @synthesize remoteConfiguration=_remoteConfiguration;
@property(readonly, nonatomic) SPTDrivingModeLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (id)initWithServiceProvider:(id)arg1 drivingModeService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


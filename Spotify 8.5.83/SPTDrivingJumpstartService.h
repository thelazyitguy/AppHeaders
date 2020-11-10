//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTDrivingJumpstartTestManager, SPTDrivingJumpstartTrigger;
@protocol GaiaFeature, SPTContainerService, SPTExternalIntegrationPlaybackService, SPTPlayerFeature, SPTRecentlyPlayedService, SPTRemoteConfigurationService, SPTUBIService, _TtP19CarDetectionFeature22SPTCarDetectionService_;

@interface SPTDrivingJumpstartService : NSObject <SPTService>
{
    _Bool _enabled;
    id <_TtP19CarDetectionFeature22SPTCarDetectionService_> _carDetectionService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <GaiaFeature> _gaiaFeature;
    id <SPTContainerService> _containerService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTUBIService> _ubiService;
    SPTDrivingJumpstartTestManager *_testManager;
    SPTDrivingJumpstartTrigger *_jumpstartTrigger;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTDrivingJumpstartTrigger *jumpstartTrigger; // @synthesize jumpstartTrigger=_jumpstartTrigger;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) SPTDrivingJumpstartTestManager *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <_TtP19CarDetectionFeature22SPTCarDetectionService_> carDetectionService; // @synthesize carDetectionService=_carDetectionService;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


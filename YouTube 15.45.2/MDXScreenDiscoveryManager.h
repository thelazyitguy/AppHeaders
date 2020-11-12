//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MDXScreenDiscoveryDelegate-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class MDXCTTRevocationController, MDXCastScreenDiscoveryManager, MDXDIALScreenDiscoveryManager, MDXPairedScreenDiscoveryManager, MDXPermissionsController, MDXRepeatingTimer, NSArray, NSDate, NSHashTable, NSString, YTTimedAction;
@protocol MDXScreen;

@interface MDXScreenDiscoveryManager : NSObject <MDXScreenDiscoveryDelegate, YTSystemNotificationsObserver>
{
    NSHashTable *_screenDiscoveryManagerObservers;
    MDXCTTRevocationController *_CTTController;
    _Bool _cloudScreenDiscoveryEnabled;
    _Bool _localNetworkScreenDiscoveryEnabled;
    _Bool _screenDiscoveryAutoSuspended;
    MDXRepeatingTimer *_pairedScreenAvailabilityPoller;
    MDXRepeatingTimer *_screenLoggingTimer;
    NSDate *_lastScreenLoggingDate;
    NSString *_lastScreenLoggingNetworkID;
    NSDate *_lastScreenLoggingNetworkIDCheckDate;
    MDXCastScreenDiscoveryManager *_castManager;
    MDXDIALScreenDiscoveryManager *_DIALManager;
    MDXPairedScreenDiscoveryManager *_pairedManager;
    MDXPermissionsController *_permissionsController;
    NSDate *_lastBackgroundScanDate;
    id <MDXScreen> _pollingScreen;
    CDUnknownBlockType _pollingScreenAvailabilityBlock;
    double _screenPollingInterval;
    MDXRepeatingTimer *_screenPollingTimer;
    _Bool _isPollingForConnectedScreen;
    _Bool _hasDiscoveryWarmUpCompleted;
    YTTimedAction *_onlineScreensDidChangeDelayTimer;
    YTTimedAction *_discoveryWarmUpTimer;
    long long _onlineScreensFirstLoadCounter;
    double _onlineScreensDidChangeDelay;
    NSArray *_whitelistedDeviceNames;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *whitelistedDeviceNames; // @synthesize whitelistedDeviceNames=_whitelistedDeviceNames;
- (id)MDXPairedScreenDiscoveryManager;
- (id)MDXCastScreenDiscoveryManager;
- (id)MDXDIALScreenDiscoveryManager;
- (void)logAvailableScreens;
- (void)logAvailableScreensAfterDelay;
- (void)waitForScreenDiscoveryWithCompletion:(CDUnknownBlockType)arg1;
- (id)onlineScreenWithScreenID:(id)arg1;
- (_Bool)backgroundScanBlackoutPeriodActive;
- (void)resumeCloudDiscovery;
- (void)increasePollingFrequencyWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeLocalNetworkDiscovery;
- (void)resumeScreenDiscovery;
- (void)suspendScreenDiscovery;
- (void)stopPairedScreenAvailabilityPoller;
- (void)startPairedScreenAvailabilityPoller;
- (void)stopDIALDiscovery;
- (void)startDIALDiscovery;
- (void)updatePairedScreenAvailabilityWithAvailabilityChangedBlock:(CDUnknownBlockType)arg1;
- (void)updatePairedScreenAvailability;
- (void)notifyRemoteScreenNameDidChange:(id)arg1;
- (void)notifyExistingSessionDiscoveredForScreen:(id)arg1;
- (void)triggerOnlineScreensDidChangeAfterDelay:(double)arg1;
- (void)triggerOnlineScreensDidChangeImmediately;
- (void)onlineScreensDidChange;
- (void)discoveryWarmUpDidComplete;
@property(readonly, nonatomic, getter=isScreenDiscoveryEnabled) _Bool screenDiscoveryEnabled;
- (void)appDidEnterBackground:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)screenDiscovery:(id)arg1 smartRemoteRequestedForScreen:(id)arg2;
- (void)screenDiscovery:(id)arg1 existingSessionDiscoveredForScreen:(id)arg2;
- (void)screenDiscovery:(id)arg1 screenDidDisappear:(id)arg2;
- (void)screenDiscovery:(id)arg1 screenDidAppear:(id)arg2;
- (void)screenDiscoveryDidUpdateScreens:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)onlinePairedScreens;
- (void)fetchOnlineScreensWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)onlineScreens;
- (void)refreshAppStatusForScreen:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)onlineScreenWithName:(id)arg1;
- (id)getCurrentMDXContext;
- (void)discoverScreensWithCompletion:(CDUnknownBlockType)arg1 force:(_Bool)arg2;
- (void)removeScreenDiscoveryManagerObserver:(id)arg1;
- (void)addScreenDiscoveryManagerObserver:(id)arg1;
- (void)fetchScreenWithPairingCode:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateScreen:(id)arg1 withName:(id)arg2;
- (void)removePairedScreen:(id)arg1;
- (void)addPairedScreen:(id)arg1 withName:(id)arg2;
- (unsigned long long)pairedScreenCount;
@property(readonly, nonatomic) _Bool hasAnyAvailableOnlineScreens;
@property(readonly, nonatomic, getter=hasScreenDiscoveryCompleted) _Bool screenDiscoveryCompleted;
@property(readonly, nonatomic) _Bool canSearchForOnlineScreens;
- (void)stopPollingForConnectedScreen;
- (void)startPollingForConnectedScreen:(id)arg1 withInterval:(double)arg2 availabilityBlock:(CDUnknownBlockType)arg3;
- (void)stopScreenDiscovery;
- (void)startLocalNetworkDiscovery;
- (void)startCloudDiscovery;
- (void)startLimitedDiscovery;
- (void)startFullDiscovery;
- (void)startScreenDiscoveryWithPermissionsGrantedBlock:(CDUnknownBlockType)arg1 withPermissionsCheckTimeout:(double)arg2;
- (void)startScreenDiscovery;
- (void)shutdown;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

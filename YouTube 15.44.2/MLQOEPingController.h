//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLAVPlayerDataTransferObserver-Protocol.h>
#import <Module_Framework/MLCacheFillTaskErrorObserver-Protocol.h>
#import <Module_Framework/MLCacheFillTaskStateObserver-Protocol.h>
#import <Module_Framework/MLHostFallbackObserver-Protocol.h>
#import <Module_Framework/MLNetworkRequestObserver-Protocol.h>
#import <Module_Framework/MLPlayerDroppedFrameCountObserver-Protocol.h>
#import <Module_Framework/MLPlayerItemCrossVideoTransitionObserver-Protocol.h>
#import <Module_Framework/MLPlayerItemFormatObserver-Protocol.h>
#import <Module_Framework/MLPlayerItemOfflineStatusObserver-Protocol.h>
#import <Module_Framework/MLPlayerItemQOEClientTemporaryValueObserver-Protocol.h>
#import <Module_Framework/MLPlayerItemQOEErrorObserver-Protocol.h>
#import <Module_Framework/MLPlayerItemVideoFormatConstraintObserver-Protocol.h>
#import <Module_Framework/MLPlayerRateObserver-Protocol.h>
#import <Module_Framework/MLPlayerStateObserver-Protocol.h>
#import <Module_Framework/MLPlayerViewportSizeObserver-Protocol.h>
#import <Module_Framework/YTAudioSessionRouteChangeObserver-Protocol.h>
#import <Module_Framework/YTReachabilityNetworkPropertiesObserver-Protocol.h>
#import <Module_Framework/YTReachabilityObserver-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class GIMMe, HAMTimer, MLCacheFillTaskEventCenter, MLPlayerEventCenter, MLPlayerItemEventCenter, MLPlayerItemFormatChangeEvent, MLQOEError, NSArray, NSMapTable, NSMutableArray, NSNumber, NSString, YTBasePingController, YTDeviceClassificationURLDecorator, YTIQoeHotConfig, YTIQoeStatsClientConfig;
@protocol HAMClock, MLClockOffsetEstimator, MLPlayerInternal, MLPlayerItemInternal, YTAudioSession, YTIdentityProvider, YTPingControllerConfig, YTReachabilityController;

@interface MLQOEPingController : NSObject <MLAVPlayerDataTransferObserver, MLCacheFillTaskErrorObserver, MLCacheFillTaskStateObserver, MLHostFallbackObserver, MLPlayerDroppedFrameCountObserver, MLPlayerItemCrossVideoTransitionObserver, MLPlayerItemFormatObserver, MLPlayerItemOfflineStatusObserver, MLPlayerItemQOEClientTemporaryValueObserver, MLPlayerItemQOEErrorObserver, MLPlayerItemVideoFormatConstraintObserver, MLPlayerRateObserver, MLPlayerStateObserver, MLPlayerViewportSizeObserver, YTAudioSessionRouteChangeObserver, YTReachabilityObserver, YTReachabilityNetworkPropertiesObserver, YTSystemNotificationsObserver, MLNetworkRequestObserver>
{
    YTBasePingController *_pingController;
    id <YTPingControllerConfig> _pingControllerConfig;
    YTIQoeHotConfig *_hotConfig;
    HAMTimer *_timer;
    int _droppedFrameCount;
    NSString *_CPN;
    NSString *_COTN;
    NSString *_videoID;
    _Bool _isPrefetch;
    _Bool _userIntentRecorded;
    _Bool _isSuspendedPendingUserIntent;
    double _initialAbsoluteTime;
    MLPlayerItemFormatChangeEvent *_lastFormatEvent;
    NSArray *_sortedSelectableFormats;
    int _sequenceNumber;
    YTDeviceClassificationURLDecorator *_deviceClassificationURLDecorator;
    id <HAMClock> _clock;
    id <MLClockOffsetEstimator> _clockOffsetEstimator;
    id <YTIdentityProvider> _identityProvider;
    id <MLPlayerInternal> _player;
    id <MLPlayerItemInternal> _playerItem;
    id <YTReachabilityController> _reachabilityController;
    int _connectionType;
    id <YTAudioSession> _audioSession;
    NSNumber *_audioRoute;
    int _visibility;
    NSString *_baseURL;
    _Bool _baseURLIsIncomplete;
    _Bool _stopped;
    double _flushInterval;
    double _lastFlushTime;
    NSMutableArray *_adPlaybackArguments;
    NSMutableArray *_audioFormatSelectionArguments;
    NSMutableArray *_audioRouteArguments;
    NSMutableArray *_bandwidthArguments;
    NSMutableArray *_bandwidthEstimateArguments;
    NSMutableArray *_batteryArguments;
    NSMutableArray *_bufferHealthArguments;
    NSMutableArray *_connectionArguments;
    NSMutableArray *_currentMediaTimeArguments;
    NSMutableArray *_droppedFramesArguments;
    NSMutableArray *_endToEndLiveLatencyArguments;
    NSMutableArray *_errorArguments;
    NSMutableArray *_otherBandwidthArguments;
    NSMutableArray *_rateArguments;
    NSMutableArray *_temporaryClientArguments;
    NSMutableArray *_videoFormatSelectionArguments;
    NSMutableArray *_videoStateArguments;
    NSMutableArray *_viewportSizeArguments;
    NSMutableArray *_visibilityArguments;
    NSMutableArray *_offlineStatusArguments;
    struct vector<std::__1::pair<NSString *, NSMutableArray *>, std::__1::allocator<std::__1::pair<NSString *, NSMutableArray *>>> _allArguments;
    NSMutableArray *_queryItems;
    NSString *_isOffline;
    _Bool _requestLoggingEnabled;
    _Bool _highResolutionRequestLoggingEnabled;
    double _lastReportedLatencyWallTime;
    double _lastStateAbsoluteTime;
    long long _bytesTransferred;
    double _transferTime;
    _Bool _networkResponseHasBeenReceived;
    int _networkRequestCount;
    double _networkRequestAbsoluteTime;
    long long _networkRequestBytesTransferred;
    NSMapTable *_requestStats;
    MLPlayerEventCenter *_playerEventCenter;
    MLPlayerItemEventCenter *_playerItemEventCenter;
    MLCacheFillTaskEventCenter *_cacheFillTaskEventCenter;
    long long _maxPacingRateKbps;
    _Bool _lowPowerModeActive;
    YTIQoeStatsClientConfig *_qoeStatsClientConfig;
    GIMMe *_gimme;
    MLQOEError *_fatalError;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) MLQOEError *fatalError; // @synthesize fatalError=_fatalError;
@property(readonly, nonatomic) NSString *CPN; // @synthesize CPN=_CPN;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)reportLowPowerMode;
- (void)powerStateDidChange:(id)arg1;
- (void)recordDataPlanIfNecessary;
- (void)setMaxPacingRateKbps:(long long)arg1;
- (void)flushAtWallTime:(double)arg1;
- (id)optimalFormatForViewportSize:(id)arg1;
- (void)syncRecordClientFieldWithKey:(id)arg1 value:(id)arg2;
- (_Bool)hasParametersToSend;
- (double)currentWallTime;
- (double)wallTimeForAbsoluteTime:(double)arg1;
- (void)clearArgumentsAndSendPing;
- (void)sendPingIfNecessary;
- (void)appendLatencyParameterWithMediaTime:(CDStruct_d60ef703)arg1;
- (void)appendStateChangeParameter:(id)arg1 wallTime:(double)arg2;
- (void)setConnectionType:(int)arg1;
- (void)setAudioRoutes:(id)arg1;
- (void)startTimer;
- (void)reportBatteryLevel;
- (void)reportLimitMobileDataUsage;
- (void)reportPreviousManualQualitySelection;
- (void)reportAudioFormatSelectionWithFormat:(id)arg1 lastFormat:(id)arg2 reason:(long long)arg3 wallTime:(double)arg4;
- (void)reportVideoFormatSelectionWithFormat:(id)arg1 formatSelectionTrigger:(id)arg2 viewportSize:(id)arg3 wallTime:(double)arg4;
- (void)reportRequestStats:(id)arg1 completionEvent:(id)arg2;
- (void)reportDroppedFramesWithWallTime:(double)arg1;
- (void)reportBandwidthEstimateWithWallTime:(double)arg1;
- (void)reportBandwidthWithWallTime:(double)arg1;
- (void)reportPlayerTimesWithWallTime:(double)arg1;
- (void)reportAccumulatedMeasurementsWithWallTime:(double)arg1;
- (void)onTimer;
- (void)recordPlayerState:(long long)arg1 wallTime:(double)arg2;
- (void)cacheFillTaskDidEmitError:(id)arg1;
- (void)cacheFillTaskDidComplete;
- (void)cacheFillTaskDidStart;
- (void)requestHostDidFallbackFrom:(id)arg1 to:(id)arg2 requestNumber:(long long)arg3;
- (void)batteryLevelDidChange;
- (void)batteryStateDidChange;
- (void)clearPlayerItem;
- (void)clearPlayer;
- (void)setCacheFillTask:(id)arg1 eventCenter:(id)arg2;
- (void)setPlayerItem:(id)arg1 eventCenter:(id)arg2;
- (void)setPlayer:(id)arg1 eventCenter:(id)arg2;
- (void)recordNonFatalQOEError:(id)arg1;
- (void)player:(id)arg1 didChangeViewportSize:(id)arg2;
- (void)player:(id)arg1 didChangeStateWithEvent:(id)arg2;
- (void)player:(id)arg1 didChangeRate:(float)arg2;
- (void)playerItem:(id)arg1 didChangeVideoFormatConstraint:(id)arg2;
- (void)playerItem:(id)arg1 didEmitQOEErrorEvent:(id)arg2;
- (void)playerItem:(id)arg1 determinedOfflineStatus:(_Bool)arg2;
- (void)playerItem:(id)arg1 didEmitQOEClientTemporaryValueEvent:(id)arg2;
- (void)playerItem:(id)arg1 didChangeFormatWithEvent:(id)arg2;
- (void)player:(id)arg1 didDropFramesWithCount:(int)arg2;
- (void)playerItem:(id)arg1 willTransitionWithEvent:(id)arg2;
- (void)networkRequestDidCompleteWithEvent:(id)arg1;
- (void)networkRequestDidTransferDataWithEvent:(id)arg1;
- (void)networkRequestDidReceiveResponseWithEvent:(id)arg1;
- (void)player:(id)arg1 AVPlayerDidTransferBytes:(long long)arg2 transferTime:(double)arg3;
- (void)reachabilityDidChange;
- (void)reachabilityNetworkPropertiesDidChange:(id)arg1;
- (void)outputRouteDidChange;
- (void)recordCarrierNetworkInfo;
- (void)recordCOTN:(id)arg1;
- (void)recordPlaybackPrebuffered;
- (void)recordUserIntentToPlayAtTime:(double)arg1;
- (void)recordQOEError:(id)arg1 fatal:(_Bool)arg2;
- (void)recordQOEAlert;
- (void)recordAdPlaybackWithCPN:(id)arg1 adFormat:(id)arg2 adBreakType:(long long)arg3;
- (void)recordLivePlaybackMediaTime:(CDStruct_d60ef703)arg1;
- (void)playerVisibilityDidChange:(int)arg1;
- (void)stop;
- (void)setPlayerStateSuspended;
- (void)appWillBeSuspended;
- (void)flush;
- (void)setTrackingURL:(id)arg1;
- (id)initWithCPN:(id)arg1 videoID:(id)arg2 isPrefetch:(_Bool)arg3;
- (id)initWithCOTN:(id)arg1 videoID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


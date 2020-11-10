//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/MLAVPlayerDataTransferObserver-Protocol.h>
#import <Module_Framework/MLNetworkRequestDataTransferObserver-Protocol.h>
#import <Module_Framework/MLPlayerDroppedFrameCountObserver-Protocol.h>
#import <Module_Framework/MLPlayerItemFormatObserver-Protocol.h>
#import <Module_Framework/MLPlayerItemQOEErrorObserver-Protocol.h>
#import <Module_Framework/MLPlayerStateObserver-Protocol.h>
#import <Module_Framework/MLPlayerViewportSizeObserver-Protocol.h>
#import <Module_Framework/MLPlayerVolumeObserver-Protocol.h>

@class HAMTimer, MLNerdStatsOverlayView, MLNerdStatsPlaybackData, MLSparklineViewController, NSString;
@protocol MLNerdStatsOverlayViewControllerDelegate, MLPlayerInternal, MLPlayerItemInternal;

@interface MLNerdStatsOverlayViewController : UIViewController <MLAVPlayerDataTransferObserver, MLNetworkRequestDataTransferObserver, MLPlayerDroppedFrameCountObserver, MLPlayerItemFormatObserver, MLPlayerItemQOEErrorObserver, MLPlayerStateObserver, MLPlayerViewportSizeObserver, MLPlayerVolumeObserver>
{
    id <MLPlayerInternal> _player;
    id <MLPlayerItemInternal> _playerItem;
    MLNerdStatsPlaybackData *_playbackData;
    HAMTimer *_poller;
    int _droppedFrameCount;
    long long _bytesTransferred;
    MLSparklineViewController *_audioFormatGraphController;
    MLSparklineViewController *_videoFormatGraphController;
    MLSparklineViewController *_readaheadGraphController;
    MLSparklineViewController *_connectionSpeedGraphController;
    MLSparklineViewController *_networkUsageGraphController;
    MLSparklineViewController *_framedropGraphController;
    MLSparklineViewController *_freshnessGraphController;
    MLSparklineViewController *_memoryUseGraphController;
    NSString *_videoID;
    long long _playerState;
    _Bool _formatsWereUpdated;
    double _lastAudioFormatBitrate;
    NSString *_lastAudioFormatLabel;
    double _lastVideoFormatResolution;
    NSString *_lastVideoFormatLabel;
    unsigned int _lastVideoCodec;
    long long _lastFormatSelectionReason;
    id <MLNerdStatsOverlayViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MLNerdStatsOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)showMemoryUsage;
- (void)setVideoFormat:(id)arg1;
- (void)setAudioFormat:(id)arg1;
- (_Bool)shouldPollInState:(long long)arg1;
- (void)updateVideoIDAndState;
- (id)createGraphControllerWithName:(id)arg1 unit:(id)arg2 precision:(int)arg3;
- (id)createGraphControllerWithName:(id)arg1;
- (void)setPlayerState:(long long)arg1;
- (void)setVideoID:(id)arg1;
- (void)resetAccumulatedMetrics;
- (id)mysteryText;
- (id)DRMInfo;
- (id)liveMode;
- (id)adCPN;
- (id)CPN;
- (id)adVideoID;
- (id)videoID;
- (_Bool)playbackIsAd;
- (void)doPeriodicUpdate;
- (void)stopPoller;
- (void)startPoller;
- (void)didTapCopyDebugInfo;
- (void)didTapClose;
- (void)viewDidLoad;
- (void)loadView;
- (void)player:(id)arg1 didChangeVolume:(float)arg2;
- (void)player:(id)arg1 didChangeViewportSize:(id)arg2;
- (void)player:(id)arg1 didChangeStateWithEvent:(id)arg2;
- (void)playerItem:(id)arg1 didEmitQOEErrorEvent:(id)arg2;
- (void)playerItem:(id)arg1 didChangeFormatWithEvent:(id)arg2;
- (void)player:(id)arg1 didDropFramesWithCount:(int)arg2;
- (void)networkRequestDidTransferDataWithEvent:(id)arg1;
- (void)player:(id)arg1 AVPlayerDidTransferBytes:(long long)arg2 transferTime:(double)arg3;
@property(readonly, nonatomic) MLNerdStatsOverlayView *nerdStatsOverlayView;
- (void)setPlaybackData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


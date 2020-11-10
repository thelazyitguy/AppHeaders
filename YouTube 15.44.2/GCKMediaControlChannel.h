//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GCKCastChannel.h>

#import <Module_Framework/GCKRequestTrackerDelegate-Protocol.h>

@class GCKMediaStatus, GCKRequestTracker, NSMutableArray, NSString;
@protocol GCKMediaControlChannelAdInfoParser, GCKMediaControlChannelDelegate;

@interface GCKMediaControlChannel : GCKCastChannel <GCKRequestTrackerDelegate>
{
    double _streamPositionUpdatedTime;
    long long _internalStatusRequestID;
    GCKRequestTracker *_loadRequestTracker;
    GCKRequestTracker *_pauseRequestTracker;
    GCKRequestTracker *_playRequestTracker;
    GCKRequestTracker *_stopRequestTracker;
    GCKRequestTracker *_statusRequestTracker;
    GCKRequestTracker *_volumeRequestTracker;
    GCKRequestTracker *_muteRequestTracker;
    GCKRequestTracker *_seekRequestTracker;
    GCKRequestTracker *_playbackRateRequestTracker;
    GCKRequestTracker *_trackStyleRequestTracker;
    GCKRequestTracker *_activeTracksRequestTracker;
    GCKRequestTracker *_queueInsertRequestTracker;
    GCKRequestTracker *_queueUpdateRequestTracker;
    GCKRequestTracker *_queueRemoveRequestTracker;
    GCKRequestTracker *_queueReorderRequestTracker;
    GCKRequestTracker *_precacheRequestTracker;
    GCKRequestTracker *_fetchItemIDsRequestTracker;
    GCKRequestTracker *_fetchItemsRequestTracker;
    GCKRequestTracker *_fetchItemRangeRequestTracker;
    NSMutableArray *_requestTrackers;
    double _pendingSeekPosition;
    _Bool _receivedFirstStatusUpdate;
    GCKMediaStatus *_mediaStatus;
    id <GCKMediaControlChannelDelegate> _delegate;
    id <GCKMediaControlChannelAdInfoParser> _adInfoParser;
    double _lastMediaStatusUpdateTime;
}

+ (id)constructPrecacheMessageWithData:(id)arg1 requestItems:(id)arg2 requestID:(long long)arg3;
+ (id)createErrorWithCode:(long long)arg1 JSONObject:(id)arg2 isTransient:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) double lastMediaStatusUpdateTime; // @synthesize lastMediaStatusUpdateTime=_lastMediaStatusUpdateTime;
@property(nonatomic) __weak id <GCKMediaControlChannelAdInfoParser> adInfoParser; // @synthesize adInfoParser=_adInfoParser;
@property(nonatomic) __weak id <GCKMediaControlChannelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GCKMediaStatus *mediaStatus; // @synthesize mediaStatus=_mediaStatus;
@property(readonly, copy) NSString *description;
- (void)requestTracker:(id)arg1 didCancel:(long long)arg2;
- (void)requestTracker:(id)arg1 didReplace:(long long)arg2;
- (void)requestTracker:(id)arg1 didTimeOut:(long long)arg2;
- (void)didDisconnect;
- (void)didConnect;
- (void)notifyDidReceiveQueueItems:(id)arg1;
- (void)notifyDidRemoveQueueItemsWithIDs:(id)arg1;
- (void)notifyDidUpdateQueueItemsWithIDs:(id)arg1;
- (void)notifyDidInsertQueueItemsWithIDs:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (void)notifyDidReceiveQueueItemIDs:(id)arg1;
- (void)notifyDidCancelRequestWithID:(long long)arg1;
- (void)notifyDidReplaceRequestWithID:(long long)arg1;
- (void)notifyRequestDidFailWithID:(long long)arg1 error:(id)arg2;
- (void)notifyRequestDidCompleteWithID:(long long)arg1;
- (void)notifyPreloadStatusUpdated;
- (void)notifyQueueUpdated;
- (void)notifyMetadataUpdated;
- (void)notifyStatusUpdated;
- (void)notifyMediaLoadFailedWithError:(id)arg1;
- (void)notifyMediaLoadCompletedWithSessionID:(long long)arg1;
- (id)mediaSessionID;
- (id)queueItemArrayToJSON:(id)arg1;
- (id)sanitizeIDArray:(id)arg1;
- (void)processMediaStatus:(id)arg1 requestID:(long long)arg2;
- (void)didReceiveTextMessage:(id)arg1;
- (_Bool)cancelRequestWithID:(long long)arg1;
- (long long)sendRequest:(id)arg1 withTracker:(id)arg2;
- (long long)queueUpdateItems:(id)arg1 itemID:(unsigned long long)arg2 playPosition:(double)arg3 jumpBy:(long long)arg4 repeatMode:(long long)arg5 customData:(id)arg6;
@property(readonly, nonatomic) double timeSinceLastMediaStatusUpdate;
- (double)approximateStreamTimeBasedOn:(double)arg1 possibleStartTime:(double)arg2 possibleEndTime:(double)arg3 playbackRate:(float)arg4;
- (double)approximateLiveSeekableRangeEnd;
- (double)approximateLiveSeekableRangeStart;
- (double)approximateStreamPosition;
- (long long)precacheData:(id)arg1 requestItems:(id)arg2;
- (long long)requestStatus;
- (long long)setStreamMuted:(_Bool)arg1 customData:(id)arg2;
- (long long)setStreamMuted:(_Bool)arg1;
- (long long)setStreamVolume:(float)arg1 customData:(id)arg2;
- (long long)setStreamVolume:(float)arg1;
- (long long)queueSetRepeatMode:(long long)arg1;
- (long long)queueJumpBy:(long long)arg1 customData:(id)arg2;
- (long long)queuePreviousItemWithCustomData:(id)arg1;
- (long long)queuePreviousItem;
- (long long)queueNextItemWithCustomData:(id)arg1;
- (long long)queueNextItem;
- (long long)queueJumpToItemWithID:(unsigned long long)arg1 playPosition:(double)arg2 customData:(id)arg3;
- (long long)queueJumpToItemWithID:(unsigned long long)arg1 customData:(id)arg2;
- (long long)queueJumpToItemWithID:(unsigned long long)arg1;
- (long long)queueMoveItemWithID:(unsigned long long)arg1 beforeItemWithID:(unsigned long long)arg2;
- (long long)queueReorderItemsWithIDs:(id)arg1 insertBeforeItemWithID:(unsigned long long)arg2 customData:(id)arg3;
- (long long)queueReorderItemsWithIDs:(id)arg1 insertBeforeItemWithID:(unsigned long long)arg2;
- (long long)queueRemoveItemWithID:(unsigned long long)arg1;
- (long long)queueRemoveItemsWithIDs:(id)arg1 customData:(id)arg2;
- (long long)queueRemoveItemsWithIDs:(id)arg1;
- (long long)queueUpdateItems:(id)arg1 customData:(id)arg2;
- (long long)queueUpdateItems:(id)arg1;
- (long long)queueInsertAndPlayItem:(id)arg1 beforeItemWithID:(unsigned long long)arg2 playPosition:(double)arg3 customData:(id)arg4;
- (long long)queueInsertAndPlayItem:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (long long)queueInsertItem:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (long long)queueInsertItems:(id)arg1 beforeItemWithID:(unsigned long long)arg2 withJump:(_Bool)arg3 playPosition:(double)arg4 customData:(id)arg5;
- (long long)queueInsertItems:(id)arg1 beforeItemWithID:(unsigned long long)arg2 customData:(id)arg3;
- (long long)queueInsertItems:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (long long)queueLoadItems:(id)arg1 withOptions:(id)arg2;
- (long long)queueFetchItemsForIDs:(id)arg1;
- (long long)queueFetchItemIDRangeRelativeToItemWithID:(unsigned long long)arg1 beforeCount:(unsigned long long)arg2 afterCount:(unsigned long long)arg3;
- (long long)queueFetchItemIDs;
- (long long)skipAd;
- (long long)seekWithOptions:(id)arg1;
- (long long)playWithCustomData:(id)arg1;
- (long long)play;
- (long long)stopWithCustomData:(id)arg1;
- (long long)stop;
- (long long)pauseWithCustomData:(id)arg1;
- (long long)pause;
- (long long)setTextTrackStyle:(id)arg1;
- (long long)setActiveTrackIDs:(id)arg1;
- (long long)setPlaybackRate:(float)arg1 customData:(id)arg2;
- (long long)loadMediaWithLoadRequestData:(id)arg1;
- (void)clearAllTrackers;
- (void)dealloc;
- (id)init;
- (id)initWithNamespace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


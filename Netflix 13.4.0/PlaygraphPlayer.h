//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NFPlaygraphPlayer-Protocol.h>
#import <Nbp/NFPlaygraphPlayerDataSourceChangeObserver-Protocol.h>
#import <Nbp/NFPlaygraphPlayerInternal-Protocol.h>
#import <Nbp/NFPlaygraphTimeConversionDelegate-Protocol.h>
#import <Nbp/PlaygraphLoaderDelegate-Protocol.h>
#import <Nbp/PlaygraphSegmentItemDelegate-Protocol.h>

@class AVPlayer, CADisplayLink, NSMutableDictionary, NSString, PlaybackAnnotationController, PlaygraphLoader, PlaygraphPlayerTransition, PlaygraphSegmentItem;
@protocol NFPlayerDelegate, NFPlayerFactory, NFPlayerInternal, NFPlaygraph, NFPlaygraphPlayerDataSource, NFPlaygraphPlayerDelegate, NFPlaygraphSegment, NFPlaygraphSegmentTransitionSelector, NFPlaygraphTimeConversionDelegate, NfPlaybackLoggingController, NfSubtitleAudioController, PlaygraphSegmentItemPreparationStrategy;

@interface PlaygraphPlayer : NSObject <NFPlaygraphTimeConversionDelegate, NFPlaygraphPlayerDataSourceChangeObserver, PlaygraphLoaderDelegate, PlaygraphSegmentItemDelegate, NFPlaygraphPlayerInternal, NFPlaygraphPlayer>
{
    _Bool _externalPlaybackAllowed;
    _Bool _playerReadyToPlayNotifiedToDelegate;
    _Bool _useAccurateTimingForBranchingPlayback;
    _Bool _delayPreviousSegmentItemCleanup;
    _Bool _segmentStartNotified;
    _Bool _playgraphPlayerSupportsMultiRate;
    _Bool _isInitialPlayer;
    _Bool _currentSegmentItemPresented;
    _Bool _usePlaygraphTransitionImprovements;
    _Bool _useNextSegmentReuseFix;
    _Bool _pipActive;
    _Bool _playbackStarted;
    _Bool _playbackClosed;
    _Bool _playbackCancelled;
    _Bool _useDualBoundaryObservation;
    _Bool _useAlwaysNewAVPlayerForBranching;
    float _persistentRate;
    id <NFPlaygraphPlayerDataSource> _dataSource;
    id <NFPlaygraphPlayerDelegate> _playgraphDelegate;
    id <NFPlaygraphTimeConversionDelegate> _timeConversionDelegate;
    id <NFPlayerFactory> _playerFactory;
    unsigned long long _fetchOptions;
    NSString *_uniqueRequestId;
    PlaygraphLoader *_playgraphLoader;
    CDUnknownBlockType _playgraphLoaderCompletionBlock;
    unsigned long long _repositionAttemptCount;
    id <NFPlaygraphSegmentTransitionSelector> _transitionsSelector;
    id <PlaygraphSegmentItemPreparationStrategy> _preparationStrategy;
    NSMutableDictionary *_playbackIdToSegmentIdMap;
    NSMutableDictionary *_playerByPlaybackId;
    NSMutableDictionary *_transitionUserInitiatedMarkers;
    PlaybackAnnotationController *_annotationController;
    PlaygraphPlayerTransition *_playerTransition;
    NSString *_pxid;
    NSMutableDictionary *_playgraphLoggingInfo;
    PlaygraphSegmentItem *_initialSegmentItem;
    double _learnedPlaybackStartLeadTimeMS;
    CADisplayLink *_displayLink;
    double _transitionFirstDisplayLinkTimestamp;
    PlaygraphSegmentItem *_currentSegmentItem;
    PlaygraphSegmentItem *_previousSegmentItem;
    id <NFPlayerDelegate> _delegate;
    id <NFPlayerInternal> _currentPlayer;
    id <NFPlaygraph> _currentPlaygraph;
    id <NFPlaygraphSegment> _currentSegment;
    NSMutableDictionary *_segmentItemMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *segmentItemMap; // @synthesize segmentItemMap=_segmentItemMap;
@property(nonatomic) _Bool useAlwaysNewAVPlayerForBranching; // @synthesize useAlwaysNewAVPlayerForBranching=_useAlwaysNewAVPlayerForBranching;
@property(nonatomic) _Bool useDualBoundaryObservation; // @synthesize useDualBoundaryObservation=_useDualBoundaryObservation;
@property(retain, nonatomic) id <NFPlaygraphSegment> currentSegment; // @synthesize currentSegment=_currentSegment;
@property(retain, nonatomic) id <NFPlaygraph> currentPlaygraph; // @synthesize currentPlaygraph=_currentPlaygraph;
@property(retain, nonatomic) id <NFPlayerInternal> currentPlayer; // @synthesize currentPlayer=_currentPlayer;
@property(nonatomic) __weak id <NFPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PlaygraphSegmentItem *previousSegmentItem; // @synthesize previousSegmentItem=_previousSegmentItem;
@property(retain, nonatomic) PlaygraphSegmentItem *currentSegmentItem; // @synthesize currentSegmentItem=_currentSegmentItem;
@property(nonatomic) _Bool playbackCancelled; // @synthesize playbackCancelled=_playbackCancelled;
@property(nonatomic) _Bool playbackClosed; // @synthesize playbackClosed=_playbackClosed;
@property(nonatomic) _Bool playbackStarted; // @synthesize playbackStarted=_playbackStarted;
@property(nonatomic) _Bool pipActive; // @synthesize pipActive=_pipActive;
@property(nonatomic) _Bool useNextSegmentReuseFix; // @synthesize useNextSegmentReuseFix=_useNextSegmentReuseFix;
@property(nonatomic) double transitionFirstDisplayLinkTimestamp; // @synthesize transitionFirstDisplayLinkTimestamp=_transitionFirstDisplayLinkTimestamp;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double learnedPlaybackStartLeadTimeMS; // @synthesize learnedPlaybackStartLeadTimeMS=_learnedPlaybackStartLeadTimeMS;
@property(nonatomic) _Bool usePlaygraphTransitionImprovements; // @synthesize usePlaygraphTransitionImprovements=_usePlaygraphTransitionImprovements;
@property(nonatomic) _Bool currentSegmentItemPresented; // @synthesize currentSegmentItemPresented=_currentSegmentItemPresented;
@property(retain, nonatomic) PlaygraphSegmentItem *initialSegmentItem; // @synthesize initialSegmentItem=_initialSegmentItem;
@property(nonatomic) _Bool isInitialPlayer; // @synthesize isInitialPlayer=_isInitialPlayer;
@property(retain, nonatomic) NSMutableDictionary *playgraphLoggingInfo; // @synthesize playgraphLoggingInfo=_playgraphLoggingInfo;
@property(copy, nonatomic) NSString *pxid; // @synthesize pxid=_pxid;
@property(retain, nonatomic) PlaygraphPlayerTransition *playerTransition; // @synthesize playerTransition=_playerTransition;
@property(nonatomic) _Bool playgraphPlayerSupportsMultiRate; // @synthesize playgraphPlayerSupportsMultiRate=_playgraphPlayerSupportsMultiRate;
@property(nonatomic) float persistentRate; // @synthesize persistentRate=_persistentRate;
@property(retain, nonatomic) PlaybackAnnotationController *annotationController; // @synthesize annotationController=_annotationController;
@property(nonatomic) _Bool segmentStartNotified; // @synthesize segmentStartNotified=_segmentStartNotified;
@property(nonatomic) _Bool delayPreviousSegmentItemCleanup; // @synthesize delayPreviousSegmentItemCleanup=_delayPreviousSegmentItemCleanup;
@property(retain, nonatomic) NSMutableDictionary *transitionUserInitiatedMarkers; // @synthesize transitionUserInitiatedMarkers=_transitionUserInitiatedMarkers;
@property(nonatomic) _Bool useAccurateTimingForBranchingPlayback; // @synthesize useAccurateTimingForBranchingPlayback=_useAccurateTimingForBranchingPlayback;
@property(retain, nonatomic) NSMutableDictionary *playerByPlaybackId; // @synthesize playerByPlaybackId=_playerByPlaybackId;
@property(retain, nonatomic) NSMutableDictionary *playbackIdToSegmentIdMap; // @synthesize playbackIdToSegmentIdMap=_playbackIdToSegmentIdMap;
@property(retain, nonatomic) id <PlaygraphSegmentItemPreparationStrategy> preparationStrategy; // @synthesize preparationStrategy=_preparationStrategy;
@property(retain, nonatomic) id <NFPlaygraphSegmentTransitionSelector> transitionsSelector; // @synthesize transitionsSelector=_transitionsSelector;
@property(nonatomic) unsigned long long repositionAttemptCount; // @synthesize repositionAttemptCount=_repositionAttemptCount;
@property(copy, nonatomic) CDUnknownBlockType playgraphLoaderCompletionBlock; // @synthesize playgraphLoaderCompletionBlock=_playgraphLoaderCompletionBlock;
@property(retain, nonatomic) PlaygraphLoader *playgraphLoader; // @synthesize playgraphLoader=_playgraphLoader;
@property(nonatomic) _Bool playerReadyToPlayNotifiedToDelegate; // @synthesize playerReadyToPlayNotifiedToDelegate=_playerReadyToPlayNotifiedToDelegate;
@property(retain, nonatomic) NSString *uniqueRequestId; // @synthesize uniqueRequestId=_uniqueRequestId;
@property(nonatomic) unsigned long long fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(nonatomic) _Bool externalPlaybackAllowed; // @synthesize externalPlaybackAllowed=_externalPlaybackAllowed;
@property(retain, nonatomic) id <NFPlayerFactory> playerFactory; // @synthesize playerFactory=_playerFactory;
@property(nonatomic) __weak id <NFPlaygraphTimeConversionDelegate> timeConversionDelegate; // @synthesize timeConversionDelegate=_timeConversionDelegate;
@property(nonatomic) __weak id <NFPlaygraphPlayerDelegate> playgraphDelegate; // @synthesize playgraphDelegate=_playgraphDelegate;
@property(retain, nonatomic) id <NFPlaygraphPlayerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)isRetinaScreen;
- (_Bool)isDeviceSlowForBranching;
- (void)captureSegmentInfoForLogging:(id)arg1;
- (void)captureSegmentInfoForLogging;
- (void)logTransitionCompletedIfNeeded;
- (id)createPlaybackStateSnapshot;
- (void)transitionToCurrentItemCompleted;
- (void)displayLinkTimerFired;
- (void)teardownDisplayLink;
- (void)setupDisplayLink;
- (void)updatePlaybackStartLeadTimeMS:(long long)arg1;
- (long long)playbackStartLeadTimeMS;
- (void)transitionInitiatedToSegmentItem:(id)arg1;
- (CDStruct_aa637a14)convertToPlaygraphPositionForPlayer:(id)arg1 playgraphOffset:(double)arg2;
- (double)convertToPresentableTimeForPlayer:(id)arg1 playgraphPosition:(CDStruct_aa637a14)arg2;
- (double)presentableDurationForPlayer:(id)arg1;
- (void)reconcileNextItemsAfterUpdateInDataSource:(id)arg1 forSegment:(id)arg2;
- (void)dataSource:(id)arg1 didUpdatePlaygraph:(id)arg2;
- (void)dataSource:(id)arg1 didChangeNextSegmentAfterSegment:(id)arg2;
- (id)player;
@property(nonatomic) float rate;
@property(nonatomic) float volume;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) _Bool currentItemPlaybackLikelyToKeepUp;
@property(readonly, nonatomic) _Bool externalPlaybackActive;
@property(readonly, nonatomic) _Bool allowsExternalPlayback;
- (void)startPlaybackWithTrackingInfo:(id)arg1;
- (void)percentSubtitleFontSize:(double)arg1;
- (void)positionSubtitleWithPercent:(double)arg1;
- (void)stop;
- (_Bool)seekFrom:(double)arg1 to:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginScrubbing;
- (void)pause;
- (void)play;
- (void)closePlayback;
- (void)startPlayback;
- (void)presentAVPlayer;
@property(readonly, nonatomic) NSString *xid;
@property double preferredVideoNominalBps;
@property(readonly, nonatomic) id <NfPlaybackLoggingController> loggingController;
@property(readonly, nonatomic) id <NfSubtitleAudioController> subtitleAudioController;
- (void)segmentItem:(id)arg1 didOpenMovieWithChoiceMap:(id)arg2 withExpiration:(id)arg3 andError:(id)arg4;
- (void)segmentItem:(id)arg1 shouldStartPreparingNextSegment:(id)arg2 withWeight:(id)arg3 allowSkip:(_Bool)arg4;
- (void)segmentItem:(id)arg1 playerEffectiveRateChangedFrom:(float)arg2 to:(float)arg3;
- (void)segmentItem:(id)arg1 playerRateChangedFrom:(float)arg2 to:(float)arg3;
- (id)sharedAVPlayerForSegmentItem:(id)arg1;
- (void)segmentItem:(id)arg1 updatedPts:(double)arg2;
- (void)notifySegmentItemStarted:(id)arg1;
- (void)notifySegmentItemPreparationEnded:(id)arg1;
- (void)segmentItemStateChanged:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (void)segmentItemReachedEnd:(id)arg1 withError:(id)arg2;
- (void)presentPlayer:(id)arg1;
- (void)notifyStartOfSegment:(id)arg1 startTime:(double)arg2;
- (void)playCurrentSegmentItemIfNeededAndLogTransition;
- (void)handleCurrentSegmentItemReadyToPlayAtTargetPosition:(double)arg1;
- (void)repositionCurrentSegmentItemIfNeededAndPlayAtTargetPosition:(double)arg1;
- (void)handleCurrentSegmentItemPendingLoading;
- (_Bool)shouldPausePreviousItem:(double)arg1;
- (void)pausePreviousItemIfNeeded:(double)arg1;
- (void)notifyDelegateOfChangesIfNeeded;
- (void)fixPlaygraphMovieDurationIfNeededForSegmentItem:(id)arg1;
- (_Bool)repositionSegmentItemIfNeeded:(id)arg1 targetPosition:(double)arg2;
- (void)playSegmentItem:(id)arg1 targetPosition:(double)arg2;
- (void)cleanupPreviousItemIfNeeded;
- (void)startPlaybackForItem:(id)arg1;
- (void)markAndSweepSegmentItemsReachableFromItem:(id)arg1 maxDepth:(unsigned long long)arg2;
- (void)markAndSweepSegmentItemsNotReachableFromItem:(id)arg1 maxDepth:(unsigned long long)arg2;
- (void)cleanupItem:(id)arg1;
- (void)cleanupItem:(id)arg1 force:(_Bool)arg2;
- (void)mapSegmentItem:(id)arg1;
- (unsigned long long)numberOfPlayersOpen;
- (unsigned long long)numberOfSegmentItemsOpen;
- (unsigned long long)numberOfSegmentItemsBeingLoaded;
- (id)lookupSegmentItemForSegment:(id)arg1;
- (id)setupSegmentItemWithPlayer:(id)arg1 forSegment:(id)arg2;
- (id)playerWithRequest:(id)arg1 delegate:(id)arg2;
- (_Bool)playerNotAssignedToAnySegment:(id)arg1;
- (id)setupSegmentItemWithRequest:(id)arg1 forSegmentId:(id)arg2 inPlaygraph:(id)arg3;
- (void)prepareLookAheadItemsAfterItem:(id)arg1;
- (id)prepareItemForNextSegment:(id)arg1 afterItem:(id)arg2 forSkip:(_Bool)arg3 lookAhead:(_Bool)arg4;
- (id)prepareItemWithNewPlayerForNextSegment:(id)arg1;
- (void)prepareItemForNextSegmentAfterItem:(id)arg1 forSkip:(_Bool)arg2 lookAhead:(_Bool)arg3;
- (_Bool)shouldPerformSpeculativePreparationForNextSegmentsAfterSegment:(id)arg1;
- (id)prepareForPlaybackSegment:(id)arg1 startTime:(double)arg2;
- (double)lookupViewableDurationForSegment:(id)arg1;
- (double)lookupCreditsStartSecondsForSegment:(id)arg1;
- (void)startSegment:(id)arg1 atStartTime:(double)arg2;
- (void)playgraphLoader:(id)arg1 didLoadPlaygraph:(id)arg2 withExpiration:(id)arg3 andError:(id)arg4;
- (void)releasePlayerFromSegmentItem:(id)arg1;
- (void)assignPlayer:(id)arg1 toSegmentItem:(id)arg2;
- (void)removePlayer:(id)arg1;
- (void)addPlayer:(id)arg1 forVideoId:(id)arg2;
- (id)anyPlayerForByMovieId:(id)arg1;
- (id)nextItemAfterItem:(id)arg1;
- (void)loadPlaygraphWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updatePlaygraph:(id)arg1 trackingInfo:(id)arg2 startPosition:(CDStruct_aa637a14)arg3;
- (void)updateNextSegmentWeightsForSegmentId:(id)arg1 nextSegmentWeights:(id)arg2;
- (void)gotoNextSegment;
- (void)gotoSegmentId:(id)arg1 time:(double)arg2 userInitiated:(_Bool)arg3;
- (void)gotoSegmentId:(id)arg1 time:(double)arg2;
- (void)gotoNextSegmentFromCurrentSegmentId:(id)arg1 nextSegmentId:(id)arg2 userInitiated:(_Bool)arg3;
- (void)gotoNextSegmentFromCurrentSegmentId:(id)arg1 nextSegmentId:(id)arg2;
- (void)setNextSegmentAfterSegmentId:(id)arg1 nextSegmentId:(id)arg2 userInitiated:(_Bool)arg3;
- (void)setNextSegmentAfterSegmentId:(id)arg1 nextSegmentId:(id)arg2;
- (void)markTransitionFromSegmentId:(id)arg1 toSegmentId:(id)arg2 userInitiated:(_Bool)arg3;
- (_Bool)isTransitionUserInitiatedFromSegmentId:(id)arg1 toSegmentId:(id)arg2;
- (void)pipDidStop;
- (void)pipDidStart;
- (id)aspectDetails;
@property(readonly, nonatomic) AVPlayer *avPlayer;
@property(readonly, nonatomic) CDStruct_aa637a14 currentPosition;
@property(readonly, nonatomic) NSString *movieId;
@property(readonly, nonatomic) NSString *playbackId;
- (void)prepareForPlayback;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


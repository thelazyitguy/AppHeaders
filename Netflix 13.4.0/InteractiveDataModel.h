//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTTPBatchRequestTaskDelegateProtocol-Protocol.h"

@class NFIFeaturesEntity, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface InteractiveDataModel : NSObject <HTTPBatchRequestTaskDelegateProtocol>
{
    NSDictionary *_interactiveData;
    unsigned long long _type;
    NFIFeaturesEntity *_interactiveFeatures;
    NSString *_audioLocale;
    NSDictionary *_interactivePostPlayData;
    NSDictionary *_episodeTheme;
    NSDictionary *_postPlayData;
    NSDictionary *_replayBattleData;
    NSString *_videoId;
    NSDictionary *_playbackGraph;
    NSDictionary *_momentsData;
    NSMutableDictionary *_segments;
    NSMutableArray *_moments;
    NSNumber *_userStateLogger;
}

+ (id)restartDefaultState;
+ (void)setRestartDefaultState:(id)arg1;
+ (_Bool)restartEnabled;
+ (void)setRestartEnabled:(_Bool)arg1;
+ (id)interactiveFeaturesForPlaybackRequest:(id)arg1 objectContext:(id)arg2;
+ (Class)interactivePlayerWithFeatures:(id)arg1 request:(id)arg2;
+ (id)modelFromClientModel:(id)arg1;
+ (void)removeContext;
+ (void)addContext;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *userStateLogger; // @synthesize userStateLogger=_userStateLogger;
@property(readonly, nonatomic) NSMutableArray *moments; // @synthesize moments=_moments;
@property(readonly, nonatomic) NSMutableDictionary *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic) NSDictionary *momentsData; // @synthesize momentsData=_momentsData;
@property(retain, nonatomic) NSDictionary *playbackGraph; // @synthesize playbackGraph=_playbackGraph;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(readonly, nonatomic) NSDictionary *replayBattleData; // @synthesize replayBattleData=_replayBattleData;
@property(retain, nonatomic) NSDictionary *postPlayData; // @synthesize postPlayData=_postPlayData;
@property(retain, nonatomic) NSDictionary *episodeTheme; // @synthesize episodeTheme=_episodeTheme;
@property(retain, nonatomic) NSDictionary *interactivePostPlayData; // @synthesize interactivePostPlayData=_interactivePostPlayData;
@property(retain, nonatomic) NSString *audioLocale; // @synthesize audioLocale=_audioLocale;
@property(readonly, nonatomic) NFIFeaturesEntity *interactiveFeatures; // @synthesize interactiveFeatures=_interactiveFeatures;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *interactiveData; // @synthesize interactiveData=_interactiveData;
- (void)dealloc;
- (void)batchRequest:(id)arg1 taskDidFinish:(id)arg2;
- (void)batchRequestAllTasksDidFinish:(id)arg1;
- (void)cachePostPlayAssets;
- (void)fetchPostPlayData;
- (void)removeUserStateContext;
- (void)logUserStateContext:(id)arg1;
- (id)postPlayContentURLs;
- (long long)continuousEpisodeLimit;
- (_Bool)hasMoments;
- (void)parseMomentsBySegments:(id)arg1;
- (void)parseVideoMoments:(id)arg1;
- (void)parseMomentsData:(id)arg1;
- (id)experienceType;
- (id)initWithSegments:(id)arg1 clientModel:(id)arg2;
- (id)initWithVideoIdString:(id)arg1 withDictionary:(id)arg2;
- (id)initWithPostplayData:(id)arg1;
- (double)imageBasedSubDisplayRatio;
- (id)commonMetaDataAssetsAwaitingLoad;
- (id)playerControlsAssetsAwaitingLoad;
- (id)assetsAwaitingLoad;
- (id)choiceAssetsForSegmentId:(id)arg1;
- (long long)playerControlsBottomMarginForState:(id)arg1;
- (long long)playerControlsHeightForState:(id)arg1;
- (double)playerControlsItemSpacingForState:(id)arg1;
- (struct UIEdgeInsets)playerControlsEdgeInsetsForState:(id)arg1;
- (id)unseenSegments:(long long)arg1;
- (id)findNavigationSegmentId:(id)arg1;
- (_Bool)choicePointChoicesPlayed:(id)arg1;
- (_Bool)allSegmentsViewed;
- (_Bool)segmentPlayed:(id)arg1;
- (_Bool)playbackHistoryContainsSegmentId:(id)arg1;
- (void)addPlaybackHistory:(id)arg1;
- (void)resetPlaybackHistory;
- (id)playbackHistory;
- (id)segmentHistory;
- (_Bool)hasAnyIPPBeenViewed;
- (id)descriptionForSegment:(id)arg1;
- (id)choicePointForSegment:(id)arg1;
- (id)choicePointAssetIdsFromSegmentId:(id)arg1;
- (id)choiceAssetIdsFromSegmentId:(id)arg1;
- (id)choiceDescription:(id)arg1;
- (_Bool)choicePointViewed:(id)arg1;
- (struct CGSize)navigatorEndingCellSize;
- (struct CGSize)navigatorBeginningCellSize;
- (struct CGSize)navigatorCellSize;
- (id)navigatorEndingCellViewModel;
- (id)navigatorBeginningCellViewModel;
- (id)navigatorCellViewModel;
- (id)playerControlsSnapshots;
- (id)playerControlsChoicePoints;
- (id)playerControlsItems;
- (id)choicePoints;
- (long long)playerNavigatorType;
- (id)headerText;
- (id)playerControlsStrings;
- (id)choicePointsMetadata;
- (long long)playerControlsSelectionType;
- (long long)playerControlsMaxNumUnlockedFutureItems;
- (_Bool)chapterLocked:(long long)arg1;
- (long long)chapterIndexForSegmentId:(id)arg1;
- (id)recency:(id)arg1;
- (id)chapterNavList;
- (id)choiceNavList;
- (id)navList;
- (id)storyLines;
- (id)choiceMapOverrides;
- (id)parsePostPlayModel:(id)arg1 segmentId:(id)arg2;
- (void)moments:(id)arg1 forSegment:(id)arg2 segmentId:(id)arg3;
- (void)localizeSegments;
- (void)hydrateSegments;
- (id)findSegmentWithBookmarkPosition:(double)arg1;
- (id)segmentForId:(id)arg1;
- (id)endSegment;
- (id)initialSegment;
- (long long)playerNavigatorTypeMap:(id)arg1;
- (long long)playerControlsSelectionMap:(id)arg1;
- (id)config;
- (_Bool)disableToggleOfDefault;
- (_Bool)allChoicesSeen;
- (_Bool)randomizeDefault;
- (id)settings;
- (long long)subTypeConversion:(id)arg1;
- (long long)momentTypeConversion:(id)arg1;
- (long long)lockStrategyConversion:(id)arg1;
- (id)fetchPreconditionResult:(id)arg1;
- (id)nextSegmentId:(id)arg1;
- (long long)numChoicesSeen;
- (id)sumValue:(id)arg1;
- (id)comparePrecondition:(id)arg1;
- (id)preconditionValue:(id)arg1;
- (_Bool)hasSeenSegmentsValue:(id)arg1;
- (id)iterateStateValue:(id)arg1 stateType:(id)arg2;
- (id)globalStateValue:(id)arg1;
- (id)persistentStateValue:(id)arg1;
- (id)sessionStateValue:(id)arg1;
- (_Bool)eql:(id)arg1;
- (_Bool)gte:(id)arg1;
- (_Bool)gt:(id)arg1;
- (_Bool)lt:(id)arg1;
- (_Bool)iterateStateItems:(id)arg1 stateType:(id)arg2;
- (_Bool)globalState:(id)arg1;
- (_Bool)persistentState:(id)arg1;
- (_Bool)sessionState:(id)arg1;
- (_Bool)precondition:(id)arg1;
- (_Bool)hasSeenSegments:(id)arg1;
- (_Bool)or:(id)arg1;
- (_Bool)and:(id)arg1;
- (_Bool)not:(id)arg1;
- (id)comparableInvocation:(id)arg1 withArray:(id)arg2;
- (_Bool)invocation:(id)arg1 withArray:(id)arg2;
- (_Bool)parsePrecondition:(id)arg1;
- (id)fetchPreconditionId:(id)arg1;
- (_Bool)evalPreconditionId:(id)arg1;
- (id)choicePointPrecondition:(id)arg1;
- (id)segmentGroups;
- (id)preconditions;
- (id)stateHistoryDict;
- (id)stateHistory;
- (void)resetStateHistory;
- (void)restoreFromSnapshot:(id)arg1;
- (id)cl_userState;
- (id)userState;
- (id)stateValue:(id)arg1 stateType:(id)arg2;
- (_Bool)hasState:(id)arg1 stateType:(id)arg2;
- (void)addStateHistory:(id)arg1 stateType:(id)arg2;
- (void)cloneSegmentHistory;
- (void)appendImpressionData:(id)arg1;
- (void)logUserStateImpression:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)logUserStateImpression:(id)arg1;
- (void)resetSnapshots;
- (void)clearSnapshots:(id)arg1;
- (long long)maxSnapshotsToDisplay;
- (_Bool)playerControlsSnapshotsEnabled;
- (void)moveToFront:(id)arg1;
- (void)applySnapshot:(id)arg1 index:(unsigned long long)arg2;
- (void)addSnapshot:(id)arg1 withSegmentId:(id)arg2;
- (void)addSnapshotForSegmentId:(id)arg1;
- (id)snapshotChoicePointIds;
- (void)cloneSnapshots;
- (id)truncatedSnapshots;
- (id)snapshotsList;
- (id)snapshotOrder;
- (id)snapshots;
- (id)intervalBoldFont;
- (id)intervalFont;
- (id)badgeFont;
- (_Bool)autoPlay;
- (double)autoPlayInterval;
- (id)urlsRemainingToSave;
- (id)parseNotificationModel:(id)arg1;
- (id)parseChoicePointModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


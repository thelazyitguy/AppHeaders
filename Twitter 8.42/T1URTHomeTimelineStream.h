//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterStream.h>

@protocol T1URTItemVisibilityMonitor, TFNTwitterHomeTimelineConfiguration, TFNTwitterSuggestsModuleWhoToFollowBlender;

@interface T1URTHomeTimelineStream : TFNTwitterStream
{
    // Error parsing type: , name: viewModelImpressionMonitor
    // Error parsing type: , name: account
    // Error parsing type: , name: timelineConfiguration
    // Error parsing type: , name: whoToFollowBlender
    // Error parsing type: , name: scribeImpressionCache
    // Error parsing type: , name: timelineInjectionListeners
    // Error parsing type: , name: feedbackPresenter
    // Error parsing type: , name: menuSheetFeedbackPresenter
    // Error parsing type: , name: feedbackExecutor
    // Error parsing type: , name: feedbackConfirmationSink
    // Error parsing type: , name: $__lazy_storage_$_assimilationOptionsBuilder
    // Error parsing type: , name: needsSerialization
    // Error parsing type: , name: urtTimelineUID
    // Error parsing type: , name: urtViewModelTranslator
    // Error parsing type: , name: modelContext
    // Error parsing type: , name: timelineUpdater
    // Error parsing type: , name: tweetCompositionUpdateListener
    // Error parsing type: , name: bottomCursorBackoffManager
    // Error parsing type: , name: firstTweetLikedUpdateListener
    // Error parsing type: , name: userFollowUpdateListener
    // Error parsing type: , name: translatedViewModels
    // Error parsing type: , name: cachedStreamObjects
    // Error parsing type: , name: isWipingDeserializedTimeline
    // Error parsing type: , name: hasApplicationLaunchLoadTopRequestCompleted
    // Error parsing type: , name: latestDataSourceUpdateActionUserInfo
    // Error parsing type: , name: scrollStateStore
    // Error parsing type: , name: timelineCacheStateRecorder
    // Error parsing type: , name: viewedObjectFilter
    // Error parsing type: , name: homeActionScriber
    // Error parsing type: , name: itemsHydrationScriber
    // Error parsing type: , name: userFollowNotificationHandler
    // Error parsing type: , name: userUnfollowNotificationHandler
    // Error parsing type: , name: commandWillCompleteNotificationHandler
    // Error parsing type: , name: lastLoadingNetworkTransactionMetricsOperationId
    // Error parsing type: , name: streamAPIUpdatePipeline
    // Error parsing type: , name: itemVisibilityMonitor
    // Error parsing type: , name: streamPerformanceMonitor
    // Error parsing type: , name: topCursorPrefetching
    // Error parsing type: , name: hoistEventScriber
    // Error parsing type: , name: hasRecordedCachedTweetsRenderedEvent
}

- (void).cxx_destruct;
- (id)init;
- (void)performTimelineItemTruncationIfneeded;
- (_Bool)loadGap:(id)arg1 withSource:(long long)arg2;
- (_Bool)loadBottomWithSource:(long long)arg1;
- (_Bool)loadTopWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isEmpty;
- (id)streamObjects;
- (void)processImmediateDismissForStatus:(id)arg1;
- (id)feedbackActionsViewControllerForLegacyStatus:(id)arg1 sourceInfo:(id)arg2 additionalActionItems:(id)arg3;
- (id)scrollStateIdentifierForTimelineItem:(id)arg1;
- (void)registerCommonURTComponentsOnItemsDataViewController:(id)arg1 sectionTransformer:(id)arg2 scribeContext:(id)arg3 statusRowAdapter:(id)arg4;
- (void)tableDidDisappear;
- (void)reloadForCursorError:(id)arg1;
- (void)attachFollowTimelineListenerIfNeededTo:(id)arg1;
- (void)attachLikeTimelineListenerIfNeededTo:(id)arg1;
- (void)attachScrollingMonitorTo:(id)arg1;
- (void)didRenderInterfaceForOpaqueContextIdentities:(id)arg1;
- (void)dealloc;
@property(nonatomic) _Bool needsSerialization; // @synthesize needsSerialization;
@property(nonatomic, readonly) id <T1URTItemVisibilityMonitor> streamItemVisibilityMonitor;
@property(nonatomic, retain) id <TFNTwitterSuggestsModuleWhoToFollowBlender> whoToFollowBlender; // @synthesize whoToFollowBlender;
@property(nonatomic, retain) id <TFNTwitterHomeTimelineConfiguration> timelineConfiguration; // @synthesize timelineConfiguration;
@property(nonatomic, readonly) _Bool hasRestoredCachedTimelineContent;

@end

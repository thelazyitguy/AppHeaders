//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

#import <T1Twitter/T1StatusExternalUpdateObserver-Protocol.h>
#import <T1Twitter/T1StatusViewEventScribeHandler-Protocol.h>
#import <T1Twitter/TFNCellVisibilityBroadcasterDelegate-Protocol.h>
#import <T1Twitter/TNLCommunicationAgentObserver-Protocol.h>

@class NSMutableSet, NSString, T1CameraAnimatedPresenter, T1StatusLiveEngagementManager, T1StatusMediaHandler, T1StatusMediaTimelineObserver, T1StatusPromotedImpressionHandler, T1StatusTableSlideshowManager, TFNCellPreparationTimePerformanceMetric, TFNDataViewController, TFNTwitterAccount, TFNTwitterDisplaySessionManager;
@protocol TFNTwitterScribeImpressionCache;

@interface T1StatusTableRowAdapter : TFNItemsTableRowAdapter <T1StatusExternalUpdateObserver, T1StatusViewEventScribeHandler, TFNCellVisibilityBroadcasterDelegate, TNLCommunicationAgentObserver>
{
    T1CameraAnimatedPresenter *_newsCameraPresenter;
    _Bool _mediaForwardEnabled;
    _Bool _supportsConversationModules;
    _Bool _supportsCellLayoutOperations;
    _Bool _supportsSwipingBetweenStatusesInSlideshow;
    _Bool _forceMediaForward;
    TFNDataViewController *_tableViewController;
    TFNTwitterAccount *_account;
    CDUnknownBlockType _statusOptionsBlock;
    CDUnknownBlockType _statusCellSeparatorTypeBlock;
    CDUnknownBlockType _statusEventHandlerProviderBlock;
    T1StatusLiveEngagementManager *_livePipelineTweetManager;
    T1StatusTableSlideshowManager *_slideshowManager;
    T1StatusMediaTimelineObserver *_dynamicAdsPrefetcher;
    T1StatusMediaTimelineObserver *_videoPrefetcher;
    T1StatusPromotedImpressionHandler *_statusPromotedImpressionHandler;
    TFNTwitterDisplaySessionManager *_displaySessionManager;
    T1StatusMediaHandler *_statusMediaHandler;
    TFNCellPreparationTimePerformanceMetric *_averageCellPreparationTimeMetric;
    NSMutableSet *_platformForwardCardImpressionCache;
    NSMutableSet *_forwardPivotImpressionCache;
    NSMutableSet *_autoTranslateTweetImpressionCache;
    id <TFNTwitterScribeImpressionCache> _scribeImpressionCache;
}

+ (Class)statusCellClass;
- (void).cxx_destruct;
@property(retain, nonatomic) id <TFNTwitterScribeImpressionCache> scribeImpressionCache; // @synthesize scribeImpressionCache=_scribeImpressionCache;
@property(retain, nonatomic) NSMutableSet *autoTranslateTweetImpressionCache; // @synthesize autoTranslateTweetImpressionCache=_autoTranslateTweetImpressionCache;
@property(retain, nonatomic) NSMutableSet *forwardPivotImpressionCache; // @synthesize forwardPivotImpressionCache=_forwardPivotImpressionCache;
@property(retain, nonatomic) NSMutableSet *platformForwardCardImpressionCache; // @synthesize platformForwardCardImpressionCache=_platformForwardCardImpressionCache;
@property(retain, nonatomic) TFNCellPreparationTimePerformanceMetric *averageCellPreparationTimeMetric; // @synthesize averageCellPreparationTimeMetric=_averageCellPreparationTimeMetric;
@property(retain, nonatomic) T1StatusMediaHandler *statusMediaHandler; // @synthesize statusMediaHandler=_statusMediaHandler;
@property(retain, nonatomic) TFNTwitterDisplaySessionManager *displaySessionManager; // @synthesize displaySessionManager=_displaySessionManager;
@property(readonly, nonatomic) T1StatusPromotedImpressionHandler *statusPromotedImpressionHandler; // @synthesize statusPromotedImpressionHandler=_statusPromotedImpressionHandler;
@property(readonly, nonatomic) T1StatusMediaTimelineObserver *videoPrefetcher; // @synthesize videoPrefetcher=_videoPrefetcher;
@property(readonly, nonatomic) T1StatusMediaTimelineObserver *dynamicAdsPrefetcher; // @synthesize dynamicAdsPrefetcher=_dynamicAdsPrefetcher;
@property(retain, nonatomic) T1StatusTableSlideshowManager *slideshowManager; // @synthesize slideshowManager=_slideshowManager;
@property(retain, nonatomic) T1StatusLiveEngagementManager *livePipelineTweetManager; // @synthesize livePipelineTweetManager=_livePipelineTweetManager;
@property(copy, nonatomic) CDUnknownBlockType statusEventHandlerProviderBlock; // @synthesize statusEventHandlerProviderBlock=_statusEventHandlerProviderBlock;
@property(copy, nonatomic) CDUnknownBlockType statusCellSeparatorTypeBlock; // @synthesize statusCellSeparatorTypeBlock=_statusCellSeparatorTypeBlock;
@property(copy, nonatomic) CDUnknownBlockType statusOptionsBlock; // @synthesize statusOptionsBlock=_statusOptionsBlock;
@property(nonatomic) _Bool forceMediaForward; // @synthesize forceMediaForward=_forceMediaForward;
@property(nonatomic) _Bool supportsSwipingBetweenStatusesInSlideshow; // @synthesize supportsSwipingBetweenStatusesInSlideshow=_supportsSwipingBetweenStatusesInSlideshow;
@property(nonatomic) _Bool supportsCellLayoutOperations; // @synthesize supportsCellLayoutOperations=_supportsCellLayoutOperations;
@property(nonatomic) _Bool supportsConversationModules; // @synthesize supportsConversationModules=_supportsConversationModules;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) __weak TFNDataViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (_Bool)_t1_needsPositionAddedToScribeParameters:(id)arg1;
- (_Bool)dataViewController:(id)arg1 dismissItem:(id)arg2 withInfo:(id)arg3 options:(id)arg4 atIndexPath:(id)arg5;
- (id)scribeParametersForObject:(id)arg1 controller:(id)arg2 indexPath:(id)arg3;
- (id)scribeElementForObject:(id)arg1 controller:(id)arg2 indexPath:(id)arg3;
- (id)scribeComponentForObject:(id)arg1 controller:(id)arg2;
- (id)scribeSectionForObject:(id)arg1 controller:(id)arg2 indexPath:(id)arg3;
- (id)_setupCellVisibilityBroadcasterForDataViewController:(id)arg1 account:(id)arg2 cell:(id)arg3 indexPath:(id)arg4 viewModel:(id)arg5 eventHandler:(id)arg6 scribeSection:(id)arg7 parameters:(id)arg8;
- (id)_statusMediaHandlerForTableViewController:(id)arg1 account:(id)arg2;
- (id)_slideshowManagerForTableViewController:(id)arg1 account:(id)arg2;
- (id)tableViewController:(id)arg1 didSelectViewModel:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 scribeSection:(id)arg5 scribeComponent:(id)arg6 impressionParameters:(id)arg7;
- (_Bool)_t1_areStatusOptions:(unsigned long long)arg1 validForViewModel:(id)arg2;
- (void)_t1_updateStatusCellsIfLayoutIsInvalidForViewModel:(id)arg1;
- (void)_statusDidUpdate:(id)arg1;
- (void)_reachabilityChanged:(long long)arg1;
- (void)tnl_communicationAgent:(id)arg1 didUpdateReachabilityFromPreviousFlags:(unsigned int)arg2 previousStatus:(long long)arg3 toCurrentFlags:(unsigned int)arg4 currentStatus:(long long)arg5;
- (void)_t1_setNeedsReloadAndInvalidateCellLayoutsPassingTest:(CDUnknownBlockType)arg1;
- (void)_t1_reloadDataDroppingCellLayouts;
- (void)didReceiveStatusExternalUpdateNotification:(id)arg1 ofType:(long long)arg2;
- (id)broadcaster:(id)arg1 focalViewForCell:(id)arg2;
- (id)dataViewController:(id)arg1 dragItemForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 previewConfigurationForItem:(id)arg2 withOptions:(id)arg3 location:(struct CGPoint)arg4 inCell:(id)arg5 atIndexPath:(id)arg6;
- (unsigned long long)dataViewController:(id)arg1 sectionBreaksForIndexPath:(id)arg2;
- (long long)_tableViewController:(id)arg1 defaultSeparatorTypeForViewModel:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (unsigned long long)tableViewController:(id)arg1 statusOptionsForViewModel:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)tableViewCellReuseIdentifierForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (_Bool)tableViewControllerShouldAllowLivePipelineToTriggerCellUpdate:(id)arg1;
- (unsigned long long)tableViewController:(id)arg1 defaultOptionsForViewModel:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)dataViewController:(id)arg1 shouldHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 cellLayoutObjectIdentifierForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 cellLayoutForItem:(id)arg2 withObjectIdentifier:(id)arg3 options:(id)arg4 previousLayout:(id)arg5 atIndexPath:(id)arg6;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 estimatedTableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 willDisplayCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (void)dealloc;
- (id)init;
- (id)initWithAccount:(id)arg1 scribeImpressionCache:(id)arg2 forAllInstancesInTableViewController:(id)arg3;
- (id)initWithAccount:(id)arg1 scribeImpressionCache:(id)arg2;
- (void)_t1_configureForConversationDetailsController:(id)arg1 account:(id)arg2;
- (void)_t1_configureForTweetDetailsController:(id)arg1 account:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


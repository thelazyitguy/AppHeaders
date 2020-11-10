//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTServices-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSString, UIViewController, YTActivityWaitViewController, YTBackgroundURLSessionNotifications, YTCSIYouTubeActionsController, YTEntitlementRefreshController, YTFeedbackStateController, YTInnerTubeUIServiceMapper, YTOfflinePlaylistActionController, YTOfflineRefreshWorker, YTOfflineVideoActionController, YTScrollsToTopCoordinator, YTSettings, YTSignedOutLocalSearchHistory, YTStoreKitPurchaseController, YTTimingResponderEventProcessor;
@protocol YTPlaybackController;

@interface YTLiveServices : NSObject <YTUserChangedObserver, YTServices>
{
    YTSettings *_settings;
    YTCSIYouTubeActionsController *_CSIActionsController;
    YTTimingResponderEventProcessor *_timingResponderEventProcessor;
    YTActivityWaitViewController *_activityWaitController;
    YTFeedbackStateController *_feedbackStateController;
    YTScrollsToTopCoordinator *_scrollsToTopCoordinator;
    YTOfflineRefreshWorker *_offlineRefreshWorker;
    UIViewController<YTPlaybackController> *_playerViewController;
    YTInnerTubeUIServiceMapper *_innerTubeUIServiceMapper;
    YTSignedOutLocalSearchHistory *_searchHistory;
    YTBackgroundURLSessionNotifications *_backgroundURLSessionNotifications;
    YTEntitlementRefreshController *_entitlementRefreshController;
    YTOfflineVideoActionController *_offlineVideoActionController;
    YTOfflinePlaylistActionController *_offlinePlaylistActionController;
    YTStoreKitPurchaseController *_storeKitPurchaseController;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)nullablePlayerViewController;
- (id)entitlementRefreshController;
- (id)systemNotifications;
- (id)menuItemVisibilityController;
- (id)innerTubeControllerFactory;
- (id)innerTubeUIServiceMapper;
- (id)innerTubeCellFactory;
- (id)identityProvider;
- (void)userDidChange;
- (id)sharerClasses;
- (id)playerViewController;
- (id)pushNotificationController;
- (id)settings;
- (id)searchHistory;
- (id)scrollsToTopCoordinator;
- (id)backgroundURLSessionNotifications;
- (id)feedbackStateController;
- (id)activityWaitController;
- (id)transactionQueueController;
- (id)interstitialPromoController;
- (id)flexibleScrollPromoController;
- (id)storeKitPurchaseController;
- (id)CSIActionsController;
- (id)timingResponderEventProcessor;
- (void)prepareForBackgroundFetch;
- (id)serviceEndpointController;
- (id)identityController;
- (void)setServerEnvironment:(long long)arg1;
- (void)shutdown;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


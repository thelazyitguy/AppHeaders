//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTEditGlobals-Protocol.h"
#import "YTInnerTubeUIGlobals-Protocol.h"

@class NSArray, UIViewController, YTActivityWaitViewController, YTBackgroundURLSessionNotifications, YTCSIYouTubeActionsController, YTCommandRegistrar, YTFeedbackStateController, YTFlexibleScrollPromoViewController, YTIdentityController, YTInterstitialPromoViewController, YTPushNotificationController, YTSettings, YTSignedOutLocalSearchHistory, YTStoreKitPurchaseController, YTTimingResponderEventProcessor, YTTransactionQueueController;
@protocol YTPlaybackController;

@protocol YTServices <YTInnerTubeUIGlobals, YTEditGlobals>
- (void)prepareForBackgroundFetch;
- (void)setServerEnvironment:(long long)arg1;
- (void)shutdown;
- (void)start;
- (YTPushNotificationController *)pushNotificationController;
- (UIViewController<YTPlaybackController> *)nullablePlayerViewController;
- (YTBackgroundURLSessionNotifications *)backgroundURLSessionNotifications;
- (YTTimingResponderEventProcessor *)timingResponderEventProcessor;
- (YTCSIYouTubeActionsController *)CSIActionsController;
- (NSArray *)sharerClasses;
- (YTIdentityController *)identityController;
- (YTTransactionQueueController *)transactionQueueController;
- (YTStoreKitPurchaseController *)storeKitPurchaseController;
- (YTFeedbackStateController *)feedbackStateController;
- (YTSettings *)settings;
- (YTSignedOutLocalSearchHistory *)searchHistory;
- (YTCommandRegistrar *)serviceEndpointController;
- (YTInterstitialPromoViewController *)interstitialPromoController;
- (YTActivityWaitViewController *)activityWaitController;
- (YTFlexibleScrollPromoViewController *)flexibleScrollPromoController;
@end

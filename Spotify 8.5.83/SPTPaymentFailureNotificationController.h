//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPaymentStateControllerObserver-Protocol.h"

@class NSNotificationCenter, NSString, SPTPaymentFailureNotificationCopyManager, SPTPaymentFailureNotificationEventLogger, SPTPaymentFailureNotificationOfflineInfoManager, SPTPaymentFailureNotificationRetryManager;
@protocol SPTAccountProductInformationController, SPTBannerPresentationManager, SPTBannerPresentationManagerTicket, SPTPaymentStateController;

@interface SPTPaymentFailureNotificationController : NSObject <SPTPaymentStateControllerObserver>
{
    id <SPTPaymentStateController> _paymentStateController;
    id <SPTAccountProductInformationController> _productInformationController;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    SPTPaymentFailureNotificationEventLogger *_eventLogger;
    SPTPaymentFailureNotificationRetryManager *_retryManager;
    SPTPaymentFailureNotificationCopyManager *_textManager;
    NSNotificationCenter *_notificationCenter;
    SPTPaymentFailureNotificationOfflineInfoManager *_offlineInfoManager;
    id <SPTBannerPresentationManagerTicket> _bannerTicket;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTBannerPresentationManagerTicket> bannerTicket; // @synthesize bannerTicket=_bannerTicket;
@property(readonly, nonatomic) SPTPaymentFailureNotificationOfflineInfoManager *offlineInfoManager; // @synthesize offlineInfoManager=_offlineInfoManager;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTPaymentFailureNotificationCopyManager *textManager; // @synthesize textManager=_textManager;
@property(readonly, nonatomic) SPTPaymentFailureNotificationRetryManager *retryManager; // @synthesize retryManager=_retryManager;
@property(readonly, nonatomic) SPTPaymentFailureNotificationEventLogger *eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(readonly, nonatomic) id <SPTAccountProductInformationController> productInformationController; // @synthesize productInformationController=_productInformationController;
@property(readonly, nonatomic) id <SPTPaymentStateController> paymentStateController; // @synthesize paymentStateController=_paymentStateController;
- (void)dealloc;
- (void)paymentStateControllerDidUpdatePaymentState:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)cleanUp;
- (void)dismissBanner;
- (id)bannerWithCopy:(id)arg1;
- (void)handlePaymentNotificationTicket:(id)arg1 statusChangeFromOldStatus:(long long)arg2;
- (_Bool)paymentStateIssueIsFailure:(long long)arg1;
- (_Bool)shouldPresentPaymentFailureNotification:(id)arg1;
- (void)presentPaymentFailureNotification:(long long)arg1;
- (void)presentPaymentFailureNotificationIfNeeded;
- (void)removeObservers;
- (void)addObservers;
- (void)stop;
- (void)start;
- (id)initWithPaymentStateController:(id)arg1 productInformationController:(id)arg2 bannerPresentationManager:(id)arg3 eventLogger:(id)arg4 retryManager:(id)arg5 textManager:(id)arg6 notificationCenter:(id)arg7 offlineInfoManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


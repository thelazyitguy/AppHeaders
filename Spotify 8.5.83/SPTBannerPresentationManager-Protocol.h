//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIColor, UIImage;
@protocol SPTBannerItem, SPTBannerPresentationManagerTicket, SPTBannerPresentationObserver;

@protocol SPTBannerPresentationManager <NSObject>
- (id <SPTBannerItem>)bannerItemWithLocalizedTitle:(NSString *)arg1 localizedMessage:(NSString *)arg2 localizedActionButtonTitle:(NSString *)arg3 image:(UIImage *)arg4 style:(long long)arg5 priority:(unsigned long long)arg6 presentationDuration:(double)arg7 customBackgroundColor:(UIColor *)arg8 shownOnTopOfModals:(_Bool)arg9;
- (void)removeObserver:(id <SPTBannerPresentationObserver>)arg1;
- (void)addObserver:(id <SPTBannerPresentationObserver>)arg1;
@property(nonatomic, readonly) _Bool hasQueuedBanner;
- (_Bool)isPresentingBanner;
- (void)resume;
- (void)suspend;
- (void)suspendAndHideCurrentlyPresentedBanner:(_Bool)arg1;
- (_Bool)isSuspended;
- (void)dismissOrUnqueueBannerItemForTicket:(id <SPTBannerPresentationManagerTicket>)arg1 animated:(_Bool)arg2;
- (void)dismissOrUnqueueBannerItemForTicket:(id <SPTBannerPresentationManagerTicket>)arg1;
- (id <SPTBannerPresentationManagerTicket>)queueBannerItemForPresentation:(id <SPTBannerItem>)arg1 statusChangeBlock:(void (^)(id <SPTBannerPresentationManagerTicket>, long long))arg2;

// Remaining properties
@property(nonatomic, readonly) _Bool presentingBanner;
@property(nonatomic, readonly) _Bool suspended;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/ASMediationCallbackHandler-Protocol.h>

@class UIView, UIViewController;

@protocol ASBannerMediationCallbackHandler <ASMediationCallbackHandler>
- (struct CGSize)requestedSizeForMediatedBannerAd;
- (void)mediatedBannerAdWillShowAd:(UIView *)arg1;
- (UIViewController *)viewControllerForMediatedBannerAd;
- (UIView *)viewForMediatedBannerAd;
- (void)mediatedBannerAdWillScheduleRefresh;
- (void)mediatedBannerAdDidDismissModal;
- (void)mediatedBannerAdWillDismissModal;
- (void)mediatedBannerAdDidPresentModal;
- (void)mediatedBannerAdWillPresentModal;

@optional
- (void)mediatedBannerAdWillChangeFrameTo:(struct CGRect)arg1;
- (void)mediatedBannerAdChangedSize;
@end

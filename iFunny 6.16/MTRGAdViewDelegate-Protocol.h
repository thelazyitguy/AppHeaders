//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class MTRGAdView, NSString;

@protocol MTRGAdViewDelegate <NSObject>
- (void)onNoAdWithReason:(NSString *)arg1 adView:(MTRGAdView *)arg2;
- (void)onLoadWithAdView:(MTRGAdView *)arg1;

@optional
- (void)onLeaveApplicationWithAdView:(MTRGAdView *)arg1;
- (void)onDismissModalWithAdView:(MTRGAdView *)arg1;
- (void)onShowModalWithAdView:(MTRGAdView *)arg1;
- (void)onAdClickWithAdView:(MTRGAdView *)arg1;
@end

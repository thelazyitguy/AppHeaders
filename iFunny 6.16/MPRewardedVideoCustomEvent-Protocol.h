//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSDictionary, NSString, UIViewController;
@protocol MPRewardedVideoCustomEventDelegate;

@protocol MPRewardedVideoCustomEvent <NSObject>
@property(nonatomic) __weak id <MPRewardedVideoCustomEventDelegate> delegate;
@property(copy, nonatomic) NSDictionary *localExtras;
- (void)handleCustomEventInvalidated;
- (void)handleAdPlayedForCustomEventNetwork;
- (_Bool)enableAutomaticImpressionAndClickTracking;
- (void)presentRewardedVideoFromViewController:(UIViewController *)arg1;
- (_Bool)hasAdAvailable;
- (void)requestRewardedVideoWithCustomEventInfo:(NSDictionary *)arg1 adMarkup:(NSString *)arg2;
@end

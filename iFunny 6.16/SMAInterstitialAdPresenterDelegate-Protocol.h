//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/SMAAdPresentingDelegate-Protocol.h>

@class UIColor;
@protocol SMAInterstitialAdPresenting;

@protocol SMAInterstitialAdPresenterDelegate <SMAAdPresentingDelegate>
@property(copy, nonatomic) UIColor *backgroundColor;
- (void)interstitialAdPresenterDidDisappear:(id <SMAInterstitialAdPresenting>)arg1;
- (void)interstitialAdPresenterWillDisappear:(id <SMAInterstitialAdPresenting>)arg1;
- (void)interstitialAdPresenterDidAppear:(id <SMAInterstitialAdPresenting>)arg1;
- (void)interstitialAdPresenterWillAppear:(id <SMAInterstitialAdPresenting>)arg1;
@end

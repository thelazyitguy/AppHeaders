//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/SMAAdPresenting-Protocol.h>

@class SMAInterstitialAdCustomSettings, UIViewController;
@protocol SMAInterstitialAdPresenterDelegate;

@protocol SMAInterstitialAdPresenting <SMAAdPresenting>
@property(nonatomic) _Bool shouldShowCloseButton;
@property(nonatomic) __weak id <SMAInterstitialAdPresenterDelegate> delegate;
- (void)applyCustomInterstitialSettings:(SMAInterstitialAdCustomSettings *)arg1;
- (void)showFromViewController:(UIViewController *)arg1;
@end

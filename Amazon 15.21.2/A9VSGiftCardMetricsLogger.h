//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface A9VSGiftCardMetricsLogger : NSObject
{
}

+ (id)sharedLogger;
- (void)logGiftCardScanSessionEndedInterrupt;
- (void)logGiftCardScanSessionEndedFailure;
- (void)logGiftCardScanSessionEndedSuccess;
- (void)logGiftCardScanSessionEndedWithScanEndStatus:(id)arg1;
- (void)logGiftCardScanSessionStarted;
- (void)logGiftCardCloseSelected;
- (void)logGiftCardHelpSelected;
- (void)logGiftCardOnboardingHelpSelected;
- (void)logGiftCardOnboardingClosed;
- (void)logGiftCardOnboardingGotItSelected;
- (void)logGiftCardOnboardingDisplayed;
- (void)logGiftCardRescanSelected;
- (void)logGiftCardTypeSelected;
- (void)logGiftCardScanFailed;
- (void)logGiftCardScanSuccess;
- (void)logGiftCardSessionStarted;

@end

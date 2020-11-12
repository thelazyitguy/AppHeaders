//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol A9VSSNPScannerManagerInterface <NSObject>
- (double)recentPaymentsHeight;
- (void)hadleTapGesture;
- (void)viewDidLoad;
- (void)handleSwipeDownGesture;
- (void)handleSwipeUpGesture;
- (void)didFinishPullDownRecentPayments;
- (void)didInteractWithRecentPaymentsViews;
- (void)didSelectMerchantWithURL:(NSString *)arg1;
- (void)shouldGetRecentPaymentsFor:(NSString *)arg1;
- (void)didTouchShowMyBracode;
- (void)didDetectedUnknownCode;
- (void)didTouchRescan;
- (void)didTouchGotIt;
- (void)didTimeoutScanning;
- (void)viewDidBecomeInActive;
- (void)viewDidBecomeActive;
- (void)didScanSucceedForPost:(NSString *)arg1 withCode:(NSString *)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIViewController;

@protocol ScanRouterProtocol <NSObject>
- (void)showTokenView;
- (void)dismissScanView;
- (void)configureMessageToShow:(NSString *)arg1 hint:(NSString *)arg2;
- (void)configureTokenToSelect:(long long)arg1;
- (void)presentRestoreVerification;
- (void)presentGAAccountScannedDetails:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)presentBackupPasswordViewController:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)presentScanFromViewController:(UIViewController *)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LPLockScreenViewController;

@protocol LPLockScreenViewControllerDelegate <NSObject>

@optional
- (void)lockScreenViewControllerCancel:(LPLockScreenViewController *)arg1;
- (void)lockScreenViewControllerLogoutPressed:(LPLockScreenViewController *)arg1;
- (void)lockScreenViewController:(LPLockScreenViewController *)arg1 passwordEntered:(_Bool)arg2;
- (void)lockScreenViewController:(LPLockScreenViewController *)arg1 fingerprintScan:(_Bool)arg2;
- (void)lockScreenViewController:(LPLockScreenViewController *)arg1 pinCodeEntered:(_Bool)arg2;
- (void)lockScreenViewController:(LPLockScreenViewController *)arg1 setPinCode:(_Bool)arg2;
@end


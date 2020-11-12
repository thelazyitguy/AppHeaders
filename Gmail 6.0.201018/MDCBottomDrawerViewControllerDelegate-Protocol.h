//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MDCBottomDrawerViewController;
@protocol UIViewControllerTransitionCoordinator;

@protocol MDCBottomDrawerViewControllerDelegate <NSObject>

@optional
- (void)bottomDrawerControllerDidTapScrim:(MDCBottomDrawerViewController *)arg1;
- (void)bottomDrawerControllerDidEndCloseTransition:(MDCBottomDrawerViewController *)arg1;
- (void)bottomDrawerControllerWillTransitionClosed:(MDCBottomDrawerViewController *)arg1 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2 targetYOffset:(double)arg3;
- (void)bottomDrawerControllerDidEndOpenTransition:(MDCBottomDrawerViewController *)arg1;
- (void)bottomDrawerControllerWillTransitionOpen:(MDCBottomDrawerViewController *)arg1 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2 targetYOffset:(double)arg3;
- (void)bottomDrawerControllerDidChangeTopYOffset:(MDCBottomDrawerViewController *)arg1 yOffset:(double)arg2;
- (void)bottomDrawerControllerDidChangeTopInset:(MDCBottomDrawerViewController *)arg1 topInset:(double)arg2;
@end

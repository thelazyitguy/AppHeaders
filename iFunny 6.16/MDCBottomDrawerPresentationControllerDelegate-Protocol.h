//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class MDCBottomDrawerPresentationController;
@protocol UIViewControllerTransitionCoordinator;

@protocol MDCBottomDrawerPresentationControllerDelegate <UIAdaptivePresentationControllerDelegate>
- (void)bottomDrawerDismissTransitionDidEnd:(MDCBottomDrawerPresentationController *)arg1;
- (void)bottomDrawerDismissTransitionWillBegin:(MDCBottomDrawerPresentationController *)arg1 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2 targetYOffset:(double)arg3;
- (void)bottomDrawerPresentTransitionDidEnd:(MDCBottomDrawerPresentationController *)arg1;
- (void)bottomDrawerPresentTransitionWillBegin:(MDCBottomDrawerPresentationController *)arg1 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2 targetYOffset:(double)arg3;
- (void)bottomDrawerTopDidChangeYOffset:(MDCBottomDrawerPresentationController *)arg1 yOffset:(double)arg2;
- (void)bottomDrawerTopTransitionRatio:(MDCBottomDrawerPresentationController *)arg1 transitionRatio:(double)arg2;
- (void)bottomDrawerWillChangeState:(MDCBottomDrawerPresentationController *)arg1 drawerState:(unsigned long long)arg2;
@end

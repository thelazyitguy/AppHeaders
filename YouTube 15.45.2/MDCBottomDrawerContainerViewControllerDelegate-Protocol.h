//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class MDCBottomDrawerContainerViewController;

@protocol MDCBottomDrawerContainerViewControllerDelegate <NSObject>
- (void)bottomDrawerContainerViewControllerTopTransitionRatio:(MDCBottomDrawerContainerViewController *)arg1 transitionRatio:(double)arg2;
- (void)bottomDrawerContainerViewControllerDidChangeYOffset:(MDCBottomDrawerContainerViewController *)arg1 yOffset:(double)arg2;
- (void)bottomDrawerContainerViewControllerWillChangeState:(MDCBottomDrawerContainerViewController *)arg1 drawerState:(unsigned long long)arg2;
- (void)bottomDrawerContainerViewControllerNeedsScrimAppearanceUpdate:(MDCBottomDrawerContainerViewController *)arg1 scrimShouldAdoptTrackingScrollViewBackgroundColor:(_Bool)arg2;
@end

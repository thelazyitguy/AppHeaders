//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/UIBarPositioningDelegate-Protocol.h>

@class MDCTabBar, UITabBarItem;

@protocol MDCTabBarDelegate <UIBarPositioningDelegate>

@optional
- (void)tabBar:(MDCTabBar *)arg1 didSelectItem:(UITabBarItem *)arg2;
- (void)tabBar:(MDCTabBar *)arg1 willSelectItem:(UITabBarItem *)arg2;
- (_Bool)tabBar:(MDCTabBar *)arg1 shouldSelectItem:(UITabBarItem *)arg2;
@end


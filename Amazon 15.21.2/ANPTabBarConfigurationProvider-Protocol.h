//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIColor, UIViewController;
@protocol ANPTabBarEventDelegate;

@protocol ANPTabBarConfigurationProvider <NSObject>
@property(readonly, nonatomic) NSArray *tabBarItems;
- (long long)topNavConfigForHomeViewController:(unsigned long long)arg1;
- (long long)homeViewControllerScreenType:(unsigned long long)arg1;
- (UIViewController *)homeViewControllerForTab:(unsigned long long)arg1;
- (_Bool)useGlobalNavigationStack;

@optional
- (id <ANPTabBarEventDelegate>)tabBarEventDelegate;
- (UIColor *)tabBarTintColor;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NFUIARONavigationItemConfigurator, NFUINavigationTransitioningDelegate, UINavigationItem, UIView;

@interface UIViewController (NFLX)
- (_Bool)isRightToLeft;
- (void)addViewController:(id)arg1 toBounds:(struct CGRect)arg2;
- (void)registerForNetflixNavigationBarAppearanceForSignup;
- (void)registerForNetflixNavigationBarAppearance;
@property(retain, nonatomic) NFUINavigationTransitioningDelegate *navigationDelegate;
@property(retain, nonatomic) NFUIARONavigationItemConfigurator *navigationItemConfigurator;
@property(retain, nonatomic) UINavigationItem *navigationItem;
@property(nonatomic) unsigned long long navigationItemType;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
@property(nonatomic, readonly) UIView *subnavigationBarView;
@end


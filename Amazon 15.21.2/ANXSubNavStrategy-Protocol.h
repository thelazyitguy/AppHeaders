//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ANXBarComponentState, UIViewController;
@protocol ANXAppearanceContext, ANXSubNavTabMenuUpdater;

@protocol ANXSubNavStrategy <NSObject>
@property(nonatomic) __weak id <ANXSubNavTabMenuUpdater> tabMenuUpdater;
@property(readonly, nonatomic) long long subNavTabMenuType;
- (ANXBarComponentState *)willShowViewController:(UIViewController *)arg1 context:(id <ANXAppearanceContext>)arg2 previousViewController:(UIViewController *)arg3 animationDuration:(double)arg4;
- (ANXBarComponentState *)barRegistered:(id <ANXSubNavTabMenuUpdater>)arg1 currentViewController:(UIViewController *)arg2;

@optional
- (void)barStateUpdated:(ANXBarComponentState *)arg1 forViewController:(UIViewController *)arg2;
- (ANXBarComponentState *)barComponentStateForMenuContext:(unsigned long long)arg1 forCurrentViewController:(UIViewController *)arg2;
- (void)strategyDeregistered;
- (void)strategyRegistered;
@end

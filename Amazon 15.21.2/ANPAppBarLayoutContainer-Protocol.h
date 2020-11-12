//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIScrollView, UIView, UIViewController;
@protocol ANPBarContainerEventDelegate, ANXAppearanceContext;

@protocol ANPAppBarLayoutContainer <NSObject>
@property(readonly, nonatomic) double animationDuration;
@property(readonly, nonatomic) double maxHeight;
@property(readonly, nonatomic) double currentHeight;
- (void)contentScrollViewDidScroll:(UIScrollView *)arg1;
- (void)updateBarStatesForViewController:(UIViewController *)arg1 previousViewController:(UIViewController *)arg2 context:(id <ANXAppearanceContext>)arg3;
- (void)invalidate;
- (void)removeBarView:(UIView *)arg1;
- (void)addBarView:(UIView *)arg1;
- (void)setBars:(NSArray *)arg1;
- (void)setDelegate:(id <ANPBarContainerEventDelegate>)arg1;
@end

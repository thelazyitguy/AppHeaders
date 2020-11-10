//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class CAMediaTimingFunction, UIView;

@protocol MDCOverlayTransitioning <NSObject>
@property(readonly, nonatomic) struct CGRect compositeFrame;
@property(readonly, nonatomic) long long animationCurve;
@property(readonly, nonatomic) CAMediaTimingFunction *customTimingFunction;
@property(readonly, nonatomic) double duration;
- (void)animateAlongsideTransitionWithOptions:(unsigned long long)arg1 animations:(void (^)(void))arg2 completion:(void (^)(_Bool))arg3;
- (void)animateAlongsideTransition:(void (^)(void))arg1;
- (void)enumerateOverlays:(void (^)(id <MDCOverlay>, unsigned long long, _Bool *))arg1;
- (struct CGRect)compositeFrameInView:(UIView *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (instrumentation)
+ (void)ADEumCommitAnimations;
+ (void)ADEumBeginAnimations:(id)arg1 context:(void *)arg2;
+ (void)ADEumSetAnimationDelay:(double)arg1;
+ (void)ADEumSetAnimationDuration:(double)arg1;
+ (void)ADEumAnimateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)ADEumAnimateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)ADEumAnimateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
+ (void)ADEumTransitionWithView:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)ADEumTransitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)ADEumInsertInstanceMethodHooks;
+ (void)ADEumInsertClassMethodHooks;
+ (void)ADEumInsertHooks;
- (id)ADEumHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)ADEumSetNeedsDisplayInRect:(struct CGRect)arg1;
- (void)ADEumSetNeedsDisplay;
@end

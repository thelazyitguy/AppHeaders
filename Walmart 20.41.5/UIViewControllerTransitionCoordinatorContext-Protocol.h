//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView, UIViewController;

@protocol UIViewControllerTransitionCoordinatorContext <NSObject>
@property(nonatomic, readonly) struct CGAffineTransform targetTransform;
@property(nonatomic, readonly) UIView *containerView;
- (UIView *)viewForKey:(NSString *)arg1;
- (UIViewController *)viewControllerForKey:(NSString *)arg1;
@property(nonatomic, readonly) long long completionCurve;
@property(nonatomic, readonly) double completionVelocity;
@property(nonatomic, readonly) double percentComplete;
@property(nonatomic, readonly) double transitionDuration;
- (_Bool)isCancelled;
- (_Bool)isInteractive;
@property(nonatomic, readonly) _Bool isInterruptible;
@property(nonatomic, readonly) _Bool initiallyInteractive;
@property(nonatomic, readonly) long long presentationStyle;
- (_Bool)isAnimated;

// Remaining properties
@property(nonatomic, readonly) _Bool animated;
@property(nonatomic, readonly) _Bool cancelled;
@property(nonatomic, readonly) _Bool interactive;
@end

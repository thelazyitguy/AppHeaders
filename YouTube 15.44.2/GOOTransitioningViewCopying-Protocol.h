//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class UIView;
@protocol GOOTransition, GOOTransitioningView;

@protocol GOOTransitioningViewCopying <NSObject>
- (UIView<GOOTransitioningView> *)transitioningCopy;

@optional
- (void)transition:(id <GOOTransition>)arg1 didComplete:(_Bool)arg2 forCopiedTransitioningView:(UIView<GOOTransitioningView> *)arg3;
- (void)transition:(id <GOOTransition>)arg1 didStartForCopiedTransitioningView:(UIView<GOOTransitioningView> *)arg2;
@end


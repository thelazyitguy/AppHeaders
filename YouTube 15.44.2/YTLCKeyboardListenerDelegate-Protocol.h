//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class UIView;

@protocol YTLCKeyboardListenerDelegate <NSObject>
@property(readonly, nonatomic) UIView *view;
- (void)keyboardWillHideWithAnimationDuration:(double)arg1 animationCurveOptions:(unsigned long long)arg2;
- (void)keyboardWillShowWithHeight:(double)arg1 animationDuration:(double)arg2 animationCurveOptions:(unsigned long long)arg3;
@end


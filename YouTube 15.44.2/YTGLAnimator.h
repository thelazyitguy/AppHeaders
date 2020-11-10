//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTGLAnimator : NSObject
{
    double _time;
    double _duration;
    double _value;
    long long _animationDirection;
}

@property(nonatomic) long long animationDirection; // @synthesize animationDirection=_animationDirection;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
- (void)animateWithFramePresentationTime:(double)arg1;
- (id)initWithAnimationDirection:(long long)arg1 duration:(double)arg2;

@end


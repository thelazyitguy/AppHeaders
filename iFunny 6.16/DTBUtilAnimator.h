//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface DTBUtilAnimator : NSObject
{
    unsigned long long _stepsSoFar;
    double _stepCount;
    NSTimer *_timer;
    unsigned long long _interpolationCount;
}

@property(nonatomic) unsigned long long interpolationCount; // @synthesize interpolationCount=_interpolationCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double stepCount; // @synthesize stepCount=_stepCount;
@property(nonatomic) unsigned long long stepsSoFar; // @synthesize stepsSoFar=_stepsSoFar;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)animationHelper:(CDUnknownBlockType)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 withTimer:(id)arg3;
- (void)animationHelperiOS9:(id)arg1;
- (void)animateWith:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithStepCount:(double)arg1 withMaxInterpolationCount:(unsigned long long)arg2;

@end

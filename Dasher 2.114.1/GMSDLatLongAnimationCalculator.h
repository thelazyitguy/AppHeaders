//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSLinearAnimationCalculator;

@interface GMSDLatLongAnimationCalculator : NSObject
{
    GMSLinearAnimationCalculator *_latitudeCalculator;
    GMSLinearAnimationCalculator *_longitudeCalculator;
}

- (void).cxx_destruct;
- (id)longitudeAnimation;
- (id)latitudeAnimation;
- (struct GMSVector2f)velocityAtTime:(double)arg1;
- (struct GMSPoint2D)pointAtTime:(double)arg1;
- (id)initWithStart:(struct GMSPoint2D)arg1 startVelocity:(struct GMSVector2f)arg2 end:(struct GMSPoint2D)arg3 endVelocity:(struct GMSVector2f)arg4 beginTime:(double)arg5 duration:(double)arg6;

@end


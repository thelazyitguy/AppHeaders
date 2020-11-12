//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/CameraPositioner-Protocol.h>

@class NSString;
@protocol CameraPositioner, GMSTimingClock;

@interface GMSx_ChevronFlybyCameraPositioner : NSObject <CameraPositioner>
{
    id <GMSTimingClock> _clock;
    long long _flybyStartTime;
    float _revolutionCount;
    long long _timePerRevolution;
    id <CameraPositioner> _postCompletionPositioner;
    _Bool _reverse;
}

- (void).cxx_destruct;
- (struct CameraPosition)updatePosition:(const struct CameraPosition *)arg1 forInspectStep:(id)arg2 inViewport:(struct CGRect)arg3 camera:(const reffed_ptr_329922e5 *)arg4 eyeLevel:(_Bool)arg5;
- (double)chevronBearingForLocation:(id)arg1 bearingOverride:(double)arg2 useHeading:(_Bool)arg3;
- (struct CameraPosition)updatePosition:(const struct CameraPosition *)arg1 forFollowLocation:(id)arg2 chevronLocation:(id)arg3 step:(id)arg4 zoomOverride:(float)arg5 bearingOverride:(double)arg6 useHeading:(_Bool)arg7 bottomMargin:(double)arg8 mapMode:(struct GMSMapCameraMode)arg9 navGuidanceState:(id)arg10 waypoints:(id)arg11 viewport:(struct CGRect)arg12 viewCamera:(const reffed_ptr_329922e5 *)arg13;
- (void)startFlybyWithPostCompletionPositioner:(id)arg1 reverse:(_Bool)arg2;
- (void)resetFlybyParameters;
@property(readonly, nonatomic) _Bool wantsCameraSmoothingAndZoomTransitions;
- (id)initWithClock:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

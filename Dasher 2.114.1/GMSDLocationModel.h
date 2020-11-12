//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSCoreClientParameters;

@interface GMSDLocationModel : NSObject
{
    GMSCoreClientParameters *_params;
    _Bool _hasBearing;
    _Bool _hasDistance;
    _Bool _isFromGPS;
    double _time;
    double _timeSinceLastUpdate;
    struct GMSPoint2D _positionMean;
    double _positionStdMeters;
    double _bearingMeanDeg;
    double _bearingStdDeg;
    double _distanceMeanMeters;
    double _distanceStdMeters;
    double _unitsPerMeter;
}

+ (double)estimateBearingStdUsingVelocity:(_Bool)arg1 velocity:(double)arg2 positionAccuracy:(double)arg3 bearingDelta:(double)arg4 errorDeg:(double)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) double unitsPerMeter; // @synthesize unitsPerMeter=_unitsPerMeter;
@property(readonly, nonatomic) _Bool isFromGPS; // @synthesize isFromGPS=_isFromGPS;
@property(readonly, nonatomic) double distanceStdMeters; // @synthesize distanceStdMeters=_distanceStdMeters;
@property(readonly, nonatomic) double distanceMeanMeters; // @synthesize distanceMeanMeters=_distanceMeanMeters;
@property(readonly, nonatomic) _Bool hasDistance; // @synthesize hasDistance=_hasDistance;
@property(readonly, nonatomic) double bearingStdDeg; // @synthesize bearingStdDeg=_bearingStdDeg;
@property(readonly, nonatomic) double bearingMeanDeg; // @synthesize bearingMeanDeg=_bearingMeanDeg;
@property(readonly, nonatomic) _Bool hasBearing; // @synthesize hasBearing=_hasBearing;
@property(readonly, nonatomic) double positionStdMeters; // @synthesize positionStdMeters=_positionStdMeters;
@property(readonly, nonatomic) struct GMSPoint2D positionMean; // @synthesize positionMean=_positionMean;
@property(readonly, nonatomic) double timeSinceLastUpdate; // @synthesize timeSinceLastUpdate=_timeSinceLastUpdate;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
- (id)mostLikelyProjectionForPoint:(struct GMSPoint2D)arg1 bearing:(double)arg2 interpolator:(id)arg3;
- (double)onRouteScaleFactorForLikelihood:(double)arg1;
- (double)transitionLikelihoodWithDistance:(double)arg1;
- (double)emissionLikelihoodWithPoint:(struct GMSPoint2D)arg1 bearing:(double)arg2 road:(id)arg3;
- (double)onRouteLikelihoodForProjection:(id)arg1 point:(struct GMSPoint2D)arg2 bearing:(double)arg3;
- (double)onRouteLogLikelihoodForProjection:(id)arg1 point:(struct GMSPoint2D)arg2 bearing:(double)arg3;
- (id)description;
- (id)initWithLocation:(id)arg1 previousModel:(id)arg2 params:(id)arg3;

@end

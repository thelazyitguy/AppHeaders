//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AtriusLocation/CLLocationManagerDelegate-Protocol.h>

@class ATRCoordinate, ATRMatrix, CLLocationManager, CMMotionManager, CircularQueue, DeadReckoningSensorEvent, NSString;

@interface ATRDeadReckoningProvider : NSObject <CLLocationManagerDelegate>
{
    _Bool _isStarted;
    _Bool _accelInit;
    _Bool _initial;
    float _azimuth;
    float _gtHeadingOffset;
    int _resetCounter;
    CMMotionManager *_motionManager;
    CLLocationManager *_locationManager;
    ATRCoordinate *_currentCoordinate;
    ATRCoordinate *_previousCoordinate;
    DeadReckoningSensorEvent *_lastAccelEvent;
    CircularQueue *_buffer;
    double _currentVelocity;
    ATRMatrix *_xk1;
    ATRMatrix *_Pk1;
    ATRMatrix *_A;
    ATRMatrix *_Qt;
    ATRMatrix *_R;
    ATRMatrix *_zt;
    long long _timeSinceLastKalmanMs;
}

@property long long timeSinceLastKalmanMs; // @synthesize timeSinceLastKalmanMs=_timeSinceLastKalmanMs;
@property(retain) ATRMatrix *zt; // @synthesize zt=_zt;
@property(retain) ATRMatrix *R; // @synthesize R=_R;
@property(retain) ATRMatrix *Qt; // @synthesize Qt=_Qt;
@property(retain) ATRMatrix *A; // @synthesize A=_A;
@property(retain) ATRMatrix *Pk1; // @synthesize Pk1=_Pk1;
@property(retain) ATRMatrix *xk1; // @synthesize xk1=_xk1;
@property _Bool initial; // @synthesize initial=_initial;
@property int resetCounter; // @synthesize resetCounter=_resetCounter;
@property double currentVelocity; // @synthesize currentVelocity=_currentVelocity;
@property _Bool accelInit; // @synthesize accelInit=_accelInit;
@property _Bool isStarted; // @synthesize isStarted=_isStarted;
@property float gtHeadingOffset; // @synthesize gtHeadingOffset=_gtHeadingOffset;
@property float azimuth; // @synthesize azimuth=_azimuth;
@property(retain) CircularQueue *buffer; // @synthesize buffer=_buffer;
@property(retain) DeadReckoningSensorEvent *lastAccelEvent; // @synthesize lastAccelEvent=_lastAccelEvent;
@property(retain) ATRCoordinate *previousCoordinate; // @synthesize previousCoordinate=_previousCoordinate;
@property(retain) ATRCoordinate *currentCoordinate; // @synthesize currentCoordinate=_currentCoordinate;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (id)getAverageVector;
- (void)processNextState;
- (void)calculateCurrentPosition:(double)arg1 andWithY:(double)arg2 andWithZ:(double)arg3 andWithTimeStamp:(double)arg4;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)readDeviceMotionData:(id)arg1;
- (void)setGTHeadingOffset:(float)arg1;
- (void)stop;
- (void)start;
- (void)reset;
- (id)getEstimatedAngle;
- (id)getCurrentVector;
- (void)resetKalman;
- (void)update;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


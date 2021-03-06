//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AtriusLocation/ATRAngleEstimatorDelegate-Protocol.h>
#import <AtriusLocation/ATRISmoothingStrategyV2-Protocol.h>

@class ATRAngleEstimator, ATRDeadReckoningProvider, ATRLocation, Floorspace, LocationConfigurationManager, NSString, NSTimer;

@interface ATRDeadReckoningStrategy : NSObject <ATRISmoothingStrategyV2, ATRAngleEstimatorDelegate>
{
    unsigned char _isCalibrating;
    unsigned char _isInit;
    unsigned char _shouldStopEstimation;
    unsigned char _useServerConfig;
    unsigned char _shouldAttemptHeadingOffsetCorrection;
    int _angleCalculationCounter;
    int _distanceDeviationCounter;
    int _angleCalcLimit;
    ATRDeadReckoningProvider *_pdrProvider;
    LocationConfigurationManager *_configManager;
    ATRAngleEstimator *_angleEstimator;
    ATRLocation *_lastProvidedCoordinate;
    ATRLocation *_currentEstimate;
    ATRLocation *_estimateForAngle;
    ATRLocation *_lastInput;
    Floorspace *_currentFloorspace;
    double _tolerance;
    NSTimer *_timer;
    double _startTime;
}

@property double startTime; // @synthesize startTime=_startTime;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property unsigned char shouldAttemptHeadingOffsetCorrection; // @synthesize shouldAttemptHeadingOffsetCorrection=_shouldAttemptHeadingOffsetCorrection;
@property unsigned char useServerConfig; // @synthesize useServerConfig=_useServerConfig;
@property int angleCalcLimit; // @synthesize angleCalcLimit=_angleCalcLimit;
@property double tolerance; // @synthesize tolerance=_tolerance;
@property int distanceDeviationCounter; // @synthesize distanceDeviationCounter=_distanceDeviationCounter;
@property unsigned char shouldStopEstimation; // @synthesize shouldStopEstimation=_shouldStopEstimation;
@property unsigned char isInit; // @synthesize isInit=_isInit;
@property unsigned char isCalibrating; // @synthesize isCalibrating=_isCalibrating;
@property int angleCalculationCounter; // @synthesize angleCalculationCounter=_angleCalculationCounter;
@property(retain) Floorspace *currentFloorspace; // @synthesize currentFloorspace=_currentFloorspace;
@property(retain) ATRLocation *lastInput; // @synthesize lastInput=_lastInput;
@property(retain) ATRLocation *estimateForAngle; // @synthesize estimateForAngle=_estimateForAngle;
@property(retain) ATRLocation *currentEstimate; // @synthesize currentEstimate=_currentEstimate;
@property(retain) ATRLocation *lastProvidedCoordinate; // @synthesize lastProvidedCoordinate=_lastProvidedCoordinate;
@property(retain) ATRAngleEstimator *angleEstimator; // @synthesize angleEstimator=_angleEstimator;
@property(retain) LocationConfigurationManager *configManager; // @synthesize configManager=_configManager;
@property(retain) ATRDeadReckoningProvider *pdrProvider; // @synthesize pdrProvider=_pdrProvider;
- (void).cxx_destruct;
- (void)onThetaUpdate:(float)arg1;
- (void)performLocationUpdate:(id)arg1;
- (id)update:(id)arg1;
- (void)reset;
- (void)stopSensorCapture;
- (id)init:(double)arg1 angleCalculationLimit:(int)arg2 useServerDefinedHeadingOffset:(unsigned char)arg3 AndShouldAttemptHeadingOffsetCorrection:(unsigned char)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


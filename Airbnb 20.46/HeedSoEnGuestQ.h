//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALBIActionResult, ALBICoreResult, ALBICoreStrategy;

@interface HeedSoEnGuestQ : NSObject
{
    _Bool _shouldAdjustSteps;
    _Bool _isRecognizing;
    _Bool _isLastEyeOpen;
    long long _phase;
    ALBICoreStrategy *_strategy;
    long long _previousPhase;
    ALBICoreResult *_currentResult;
    long long _currentDetectType;
    ALBIActionResult *_currentAction;
    long long _currentActionIndex;
    long long _actionCount;
    long long _totalFrames;
    long long _skipFrames;
    long long _detectedFrames;
    long long _failCount;
    long long _qualityImageCount;
    double _firstQualityImageTime;
    double _beginTime;
    double _recognizeBeginTime;
    double _lastFaceSpeed;
    double _isTooFar;
}

@property(nonatomic) double isTooFar; // @synthesize isTooFar=_isTooFar;
@property(nonatomic) double lastFaceSpeed; // @synthesize lastFaceSpeed=_lastFaceSpeed;
@property(nonatomic) _Bool isLastEyeOpen; // @synthesize isLastEyeOpen=_isLastEyeOpen;
@property(nonatomic) _Bool isRecognizing; // @synthesize isRecognizing=_isRecognizing;
@property(nonatomic) double recognizeBeginTime; // @synthesize recognizeBeginTime=_recognizeBeginTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) double firstQualityImageTime; // @synthesize firstQualityImageTime=_firstQualityImageTime;
@property(nonatomic) long long qualityImageCount; // @synthesize qualityImageCount=_qualityImageCount;
@property(nonatomic) long long failCount; // @synthesize failCount=_failCount;
@property(nonatomic) long long detectedFrames; // @synthesize detectedFrames=_detectedFrames;
@property(nonatomic) long long skipFrames; // @synthesize skipFrames=_skipFrames;
@property(nonatomic) long long totalFrames; // @synthesize totalFrames=_totalFrames;
@property(nonatomic) long long actionCount; // @synthesize actionCount=_actionCount;
@property(nonatomic) _Bool shouldAdjustSteps; // @synthesize shouldAdjustSteps=_shouldAdjustSteps;
@property(nonatomic) long long currentActionIndex; // @synthesize currentActionIndex=_currentActionIndex;
@property(retain, nonatomic) ALBIActionResult *currentAction; // @synthesize currentAction=_currentAction;
@property(nonatomic) long long currentDetectType; // @synthesize currentDetectType=_currentDetectType;
@property(retain, nonatomic) ALBICoreResult *currentResult; // @synthesize currentResult=_currentResult;
@property(nonatomic) long long previousPhase; // @synthesize previousPhase=_previousPhase;
@property(retain, nonatomic) ALBICoreStrategy *strategy; // @synthesize strategy=_strategy;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
- (void).cxx_destruct;
- (void)OfEdY;

@end

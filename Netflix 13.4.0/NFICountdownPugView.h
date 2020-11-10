//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFICountdownView.h"

@class CADisplayLink, CAShapeLayer, NFICuepoint, NFITimerModel, UIImageView;

@interface NFICountdownPugView : NFICountdownView
{
    NFITimerModel *_model;
    NFICuepoint *_timerCuepoint;
    CADisplayLink *_displayLink;
    CAShapeLayer *_progressShape;
    CAShapeLayer *_baseShape;
    UIImageView *_iconImageView;
    UIImageView *_backgroundImageView;
    double _durationMS;
    double _angleStart;
    double _angleEnd;
    double _angleDiff;
    double _radius;
    double _startTimeMS;
    double _timeOffsetMS;
    double _timeRemainingMS;
    double _playerTime;
    struct CGPoint _centerPoint;
}

- (void).cxx_destruct;
@property double playerTime; // @synthesize playerTime=_playerTime;
@property double timeRemainingMS; // @synthesize timeRemainingMS=_timeRemainingMS;
@property double timeOffsetMS; // @synthesize timeOffsetMS=_timeOffsetMS;
@property double startTimeMS; // @synthesize startTimeMS=_startTimeMS;
@property struct CGPoint centerPoint; // @synthesize centerPoint=_centerPoint;
@property double radius; // @synthesize radius=_radius;
@property double angleDiff; // @synthesize angleDiff=_angleDiff;
@property double angleEnd; // @synthesize angleEnd=_angleEnd;
@property double angleStart; // @synthesize angleStart=_angleStart;
@property double durationMS; // @synthesize durationMS=_durationMS;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) CAShapeLayer *baseShape; // @synthesize baseShape=_baseShape;
@property(retain, nonatomic) CAShapeLayer *progressShape; // @synthesize progressShape=_progressShape;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NFICuepoint *timerCuepoint; // @synthesize timerCuepoint=_timerCuepoint;
@property(retain, nonatomic) NFITimerModel *model; // @synthesize model=_model;
- (void)dismissNotification:(CDUnknownBlockType)arg1;
- (void)displayNotification;
- (void)bounceIn;
- (void)stopPulsing;
- (void)touchAnimation;
- (void)pulse;
- (void)render;
- (void)resumeProgress;
- (void)pauseProgress;
- (void)startAnimating;
- (void)layoutTimer;
- (void)updateTime:(double)arg1;
- (void)configureWithTime:(double)arg1;
- (_Bool)configureWithTime;
- (void)configureWithTimerModel:(id)arg1 timerCuepoint:(id)arg2;

@end


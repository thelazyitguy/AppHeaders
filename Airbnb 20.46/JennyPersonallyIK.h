//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALBIEdgeResult, UIImage;

@interface JennyPersonallyIK : NSObject
{
    _Bool _eyeOpen;
    _Bool _pitch3d;
    UIImage *_image;
    long long _faceCount;
    double _gaussianBlur;
    double _brightness;
    double _quality;
    double _staticQuality;
    double _pitchScore;
    double _yawScore;
    double _mouthScore;
    double _blinkScore;
    double _landmarkScore;
    double _brightDiff;
    double _backHightlight;
    double _faceSpeed;
    double _gestureProgress;
    long long _actionRange;
    long long _actionPosition;
    double _iso;
    long long _checkResult;
    ALBIEdgeResult *_edgeResult;
    struct CGRect _faceSize;
    struct CGRect _position;
}

@property(retain, nonatomic) ALBIEdgeResult *edgeResult; // @synthesize edgeResult=_edgeResult;
@property(nonatomic) long long checkResult; // @synthesize checkResult=_checkResult;
@property(nonatomic) double iso; // @synthesize iso=_iso;
@property(nonatomic) long long actionPosition; // @synthesize actionPosition=_actionPosition;
@property(nonatomic) long long actionRange; // @synthesize actionRange=_actionRange;
@property(nonatomic) double gestureProgress; // @synthesize gestureProgress=_gestureProgress;
@property(nonatomic) double faceSpeed; // @synthesize faceSpeed=_faceSpeed;
@property(nonatomic) double backHightlight; // @synthesize backHightlight=_backHightlight;
@property(nonatomic) double brightDiff; // @synthesize brightDiff=_brightDiff;
@property(nonatomic) double landmarkScore; // @synthesize landmarkScore=_landmarkScore;
@property(nonatomic) double blinkScore; // @synthesize blinkScore=_blinkScore;
@property(nonatomic) double mouthScore; // @synthesize mouthScore=_mouthScore;
@property(nonatomic) double yawScore; // @synthesize yawScore=_yawScore;
@property(nonatomic) double pitchScore; // @synthesize pitchScore=_pitchScore;
@property(nonatomic) double staticQuality; // @synthesize staticQuality=_staticQuality;
@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(nonatomic) _Bool pitch3d; // @synthesize pitch3d=_pitch3d;
@property(nonatomic) _Bool eyeOpen; // @synthesize eyeOpen=_eyeOpen;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(nonatomic) double gaussianBlur; // @synthesize gaussianBlur=_gaussianBlur;
@property(nonatomic) long long faceCount; // @synthesize faceCount=_faceCount;
@property(nonatomic) struct CGRect position; // @synthesize position=_position;
@property(nonatomic) struct CGRect faceSize; // @synthesize faceSize=_faceSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SharingLbYSocalledMJanADe : NSObject
{
    double _actionWaitTime;
    double _validFaceRegionLeft;
    double _validFaceRegionTop;
    double _validFaceRegionRight;
    double _validFaceRegionBottom;
    double _minimumEyeDistance;
    double _minimumFaceDetectSize;
    double _countToFailWhenDisappear;
    double _thresholdPitchAmplitude;
    double _thresholdYawAmplitude;
    double _thresholdMouthAmplitude;
    double _thresholdActionMove;
    double _thresholdAction;
    double _thresholdPitchVSpeedLowerLimit;
    double _thresholdYawHSpeedLowerLimit;
    double _thresholdMouthSpeedUpperLimit;
    double _thresholdYawValueOfFrontal;
    double _thresholdPitchValueOfFrontal;
    double _thresholdMouthValueOfNeutral;
    double _mouthShielfOffset;
    double _mouthDiffOffset;
    double _faceChangeOffset;
    double _thresholdSDM;
    double _thresholdBrightness;
    double _thresholdMotion;
    double _actionImageSize;
    double _bigImageSize;
    double _losslessImageSize;
    double _threshold3DYaw;
    double _threshold3DPitch;
    double _maximumEyeDistance;
    double _thresholdBlinkAmplitude;
    double _thresholdBlinkValueOfNeutral;
    double _glassesOffset;
    double _eyeShieldOffset;
    double _glassesShieldOffset;
    double _thresholdBrightUneven;
    double _detectErrorAction;
    double _useEyeOcclusion;
    long long _imageWidth;
    long long _imageHeight;
    long long _imageAngle;
    NSString *_modelDirectoryPath;
}

+ (id)configuration;
@property(copy, nonatomic) NSString *modelDirectoryPath; // @synthesize modelDirectoryPath=_modelDirectoryPath;
@property(nonatomic) long long imageAngle; // @synthesize imageAngle=_imageAngle;
@property(nonatomic) long long imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) long long imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) double useEyeOcclusion; // @synthesize useEyeOcclusion=_useEyeOcclusion;
@property(nonatomic) double detectErrorAction; // @synthesize detectErrorAction=_detectErrorAction;
@property(nonatomic) double thresholdBrightUneven; // @synthesize thresholdBrightUneven=_thresholdBrightUneven;
@property(nonatomic) double glassesShieldOffset; // @synthesize glassesShieldOffset=_glassesShieldOffset;
@property(nonatomic) double eyeShieldOffset; // @synthesize eyeShieldOffset=_eyeShieldOffset;
@property(nonatomic) double glassesOffset; // @synthesize glassesOffset=_glassesOffset;
@property(nonatomic) double thresholdBlinkValueOfNeutral; // @synthesize thresholdBlinkValueOfNeutral=_thresholdBlinkValueOfNeutral;
@property(nonatomic) double thresholdBlinkAmplitude; // @synthesize thresholdBlinkAmplitude=_thresholdBlinkAmplitude;
@property(nonatomic) double maximumEyeDistance; // @synthesize maximumEyeDistance=_maximumEyeDistance;
@property(nonatomic) double threshold3DPitch; // @synthesize threshold3DPitch=_threshold3DPitch;
@property(nonatomic) double threshold3DYaw; // @synthesize threshold3DYaw=_threshold3DYaw;
@property(nonatomic) double losslessImageSize; // @synthesize losslessImageSize=_losslessImageSize;
@property(nonatomic) double bigImageSize; // @synthesize bigImageSize=_bigImageSize;
@property(nonatomic) double actionImageSize; // @synthesize actionImageSize=_actionImageSize;
@property(nonatomic) double thresholdMotion; // @synthesize thresholdMotion=_thresholdMotion;
@property(nonatomic) double thresholdBrightness; // @synthesize thresholdBrightness=_thresholdBrightness;
@property(nonatomic) double thresholdSDM; // @synthesize thresholdSDM=_thresholdSDM;
@property(nonatomic) double faceChangeOffset; // @synthesize faceChangeOffset=_faceChangeOffset;
@property(nonatomic) double mouthDiffOffset; // @synthesize mouthDiffOffset=_mouthDiffOffset;
@property(nonatomic) double mouthShielfOffset; // @synthesize mouthShielfOffset=_mouthShielfOffset;
@property(nonatomic) double thresholdMouthValueOfNeutral; // @synthesize thresholdMouthValueOfNeutral=_thresholdMouthValueOfNeutral;
@property(nonatomic) double thresholdPitchValueOfFrontal; // @synthesize thresholdPitchValueOfFrontal=_thresholdPitchValueOfFrontal;
@property(nonatomic) double thresholdYawValueOfFrontal; // @synthesize thresholdYawValueOfFrontal=_thresholdYawValueOfFrontal;
@property(nonatomic) double thresholdMouthSpeedUpperLimit; // @synthesize thresholdMouthSpeedUpperLimit=_thresholdMouthSpeedUpperLimit;
@property(nonatomic) double thresholdYawHSpeedLowerLimit; // @synthesize thresholdYawHSpeedLowerLimit=_thresholdYawHSpeedLowerLimit;
@property(nonatomic) double thresholdPitchVSpeedLowerLimit; // @synthesize thresholdPitchVSpeedLowerLimit=_thresholdPitchVSpeedLowerLimit;
@property(nonatomic) double thresholdAction; // @synthesize thresholdAction=_thresholdAction;
@property(nonatomic) double thresholdActionMove; // @synthesize thresholdActionMove=_thresholdActionMove;
@property(nonatomic) double thresholdMouthAmplitude; // @synthesize thresholdMouthAmplitude=_thresholdMouthAmplitude;
@property(nonatomic) double thresholdYawAmplitude; // @synthesize thresholdYawAmplitude=_thresholdYawAmplitude;
@property(nonatomic) double thresholdPitchAmplitude; // @synthesize thresholdPitchAmplitude=_thresholdPitchAmplitude;
@property(nonatomic) double countToFailWhenDisappear; // @synthesize countToFailWhenDisappear=_countToFailWhenDisappear;
@property(nonatomic) double minimumFaceDetectSize; // @synthesize minimumFaceDetectSize=_minimumFaceDetectSize;
@property(nonatomic) double minimumEyeDistance; // @synthesize minimumEyeDistance=_minimumEyeDistance;
@property(nonatomic) double validFaceRegionBottom; // @synthesize validFaceRegionBottom=_validFaceRegionBottom;
@property(nonatomic) double validFaceRegionRight; // @synthesize validFaceRegionRight=_validFaceRegionRight;
@property(nonatomic) double validFaceRegionTop; // @synthesize validFaceRegionTop=_validFaceRegionTop;
@property(nonatomic) double validFaceRegionLeft; // @synthesize validFaceRegionLeft=_validFaceRegionLeft;
@property(nonatomic) double actionWaitTime; // @synthesize actionWaitTime=_actionWaitTime;
- (void).cxx_destruct;
- (_Bool)BSupplementGroupsMr;

@end


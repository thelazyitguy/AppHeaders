//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMRLocalizedStringDescriptor, CMRStatusContentDescriptor, NSString;

@interface CMRRobotStatusViewState : NSObject
{
    _Bool _accessMapEditorIsHidden;
    _Bool _isBatteryCharging;
    _Bool _isPauseActionEnabled;
    _Bool _isResumeActionEnabled;
    _Bool _isSendHomeActionEnabled;
    _Bool _isLocateActionEnabled;
    _Bool _isEmptyBinActionEnabled;
    _Bool _isEndNowActionEnabled;
    short _batteryGaugeLevel;
    NSString *_configuration;
    CMRStatusContentDescriptor *_statusContent;
    NSString *_batteryChargePercentage;
    NSString *_robotName;
    CMRLocalizedStringDescriptor *_accessInstructionDetailsTitle;
    CMRLocalizedStringDescriptor *_pauseActionTitle;
    CMRLocalizedStringDescriptor *_pauseActionDetailText;
    CMRLocalizedStringDescriptor *_resumeActionTitle;
    CMRLocalizedStringDescriptor *_resumeActionDetailText;
    CMRLocalizedStringDescriptor *_sendHomeActionTitle;
    CMRLocalizedStringDescriptor *_locateActionTitle;
    CMRLocalizedStringDescriptor *_emptyBinActionTitle;
    CMRLocalizedStringDescriptor *_endNowActionTitle;
    NSString *_batteryGaugeLevelAccessibilityText;
}

+ (id)RobotStatusViewStateWithConfiguration:(id)arg1 statusContent:(id)arg2 accessMapEditorIsHidden:(_Bool)arg3 batteryChargePercentage:(id)arg4 batteryGaugeLevel:(short)arg5 isBatteryCharging:(_Bool)arg6 robotName:(id)arg7 accessInstructionDetailsTitle:(id)arg8 pauseActionTitle:(id)arg9 pauseActionDetailText:(id)arg10 isPauseActionEnabled:(_Bool)arg11 resumeActionTitle:(id)arg12 resumeActionDetailText:(id)arg13 isResumeActionEnabled:(_Bool)arg14 sendHomeActionTitle:(id)arg15 isSendHomeActionEnabled:(_Bool)arg16 locateActionTitle:(id)arg17 isLocateActionEnabled:(_Bool)arg18 emptyBinActionTitle:(id)arg19 isEmptyBinActionEnabled:(_Bool)arg20 endNowActionTitle:(id)arg21 isEndNowActionEnabled:(_Bool)arg22 batteryGaugeLevelAccessibilityText:(id)arg23;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *batteryGaugeLevelAccessibilityText; // @synthesize batteryGaugeLevelAccessibilityText=_batteryGaugeLevelAccessibilityText;
@property(readonly, nonatomic) _Bool isEndNowActionEnabled; // @synthesize isEndNowActionEnabled=_isEndNowActionEnabled;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *endNowActionTitle; // @synthesize endNowActionTitle=_endNowActionTitle;
@property(readonly, nonatomic) _Bool isEmptyBinActionEnabled; // @synthesize isEmptyBinActionEnabled=_isEmptyBinActionEnabled;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *emptyBinActionTitle; // @synthesize emptyBinActionTitle=_emptyBinActionTitle;
@property(readonly, nonatomic) _Bool isLocateActionEnabled; // @synthesize isLocateActionEnabled=_isLocateActionEnabled;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *locateActionTitle; // @synthesize locateActionTitle=_locateActionTitle;
@property(readonly, nonatomic) _Bool isSendHomeActionEnabled; // @synthesize isSendHomeActionEnabled=_isSendHomeActionEnabled;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *sendHomeActionTitle; // @synthesize sendHomeActionTitle=_sendHomeActionTitle;
@property(readonly, nonatomic) _Bool isResumeActionEnabled; // @synthesize isResumeActionEnabled=_isResumeActionEnabled;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *resumeActionDetailText; // @synthesize resumeActionDetailText=_resumeActionDetailText;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *resumeActionTitle; // @synthesize resumeActionTitle=_resumeActionTitle;
@property(readonly, nonatomic) _Bool isPauseActionEnabled; // @synthesize isPauseActionEnabled=_isPauseActionEnabled;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *pauseActionDetailText; // @synthesize pauseActionDetailText=_pauseActionDetailText;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *pauseActionTitle; // @synthesize pauseActionTitle=_pauseActionTitle;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *accessInstructionDetailsTitle; // @synthesize accessInstructionDetailsTitle=_accessInstructionDetailsTitle;
@property(readonly, nonatomic) NSString *robotName; // @synthesize robotName=_robotName;
@property(readonly, nonatomic) _Bool isBatteryCharging; // @synthesize isBatteryCharging=_isBatteryCharging;
@property(readonly, nonatomic) short batteryGaugeLevel; // @synthesize batteryGaugeLevel=_batteryGaugeLevel;
@property(readonly, nonatomic) NSString *batteryChargePercentage; // @synthesize batteryChargePercentage=_batteryChargePercentage;
@property(readonly, nonatomic) _Bool accessMapEditorIsHidden; // @synthesize accessMapEditorIsHidden=_accessMapEditorIsHidden;
@property(readonly, nonatomic) CMRStatusContentDescriptor *statusContent; // @synthesize statusContent=_statusContent;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfiguration:(id)arg1 statusContent:(id)arg2 accessMapEditorIsHidden:(_Bool)arg3 batteryChargePercentage:(id)arg4 batteryGaugeLevel:(short)arg5 isBatteryCharging:(_Bool)arg6 robotName:(id)arg7 accessInstructionDetailsTitle:(id)arg8 pauseActionTitle:(id)arg9 pauseActionDetailText:(id)arg10 isPauseActionEnabled:(_Bool)arg11 resumeActionTitle:(id)arg12 resumeActionDetailText:(id)arg13 isResumeActionEnabled:(_Bool)arg14 sendHomeActionTitle:(id)arg15 isSendHomeActionEnabled:(_Bool)arg16 locateActionTitle:(id)arg17 isLocateActionEnabled:(_Bool)arg18 emptyBinActionTitle:(id)arg19 isEmptyBinActionEnabled:(_Bool)arg20 endNowActionTitle:(id)arg21 isEndNowActionEnabled:(_Bool)arg22 batteryGaugeLevelAccessibilityText:(id)arg23;

@end

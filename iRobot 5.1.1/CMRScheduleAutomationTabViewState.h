//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMRAlertDialogViewState, CMRDayPickerViewState, CMRLocalizedStringDescriptor, CMRTimePickerViewState, CMRTimeWindowViewState, NSArray, NSString;

@interface CMRScheduleAutomationTabViewState : NSObject
{
    _Bool _canSave;
    _Bool _isDeleteVisible;
    NSString *_configuration;
    CMRLocalizedStringDescriptor *_automationTitle;
    CMRLocalizedStringDescriptor *_automationDescription;
    CMRLocalizedStringDescriptor *_timeWindowText;
    NSString *_enableAutomationTextId;
    NSArray *_contextMenuItems;
    NSString *_contextMenuCancelTextId;
    CMRTimeWindowViewState *_timeWindowViewState;
    CMRTimePickerViewState *_timePickerViewState;
    NSString *_repeatTextId;
    NSString *_repeatPatternText;
    CMRDayPickerViewState *_dayPickerViewState;
    NSString *_initialCommandDefs;
    NSString *_saveButtonDetailEstimatedTime;
    CMRAlertDialogViewState *_errorDialog;
}

+ (id)ScheduleAutomationTabViewStateWithConfiguration:(id)arg1 automationTitle:(id)arg2 automationDescription:(id)arg3 timeWindowText:(id)arg4 enableAutomationTextId:(id)arg5 contextMenuItems:(id)arg6 contextMenuCancelTextId:(id)arg7 timeWindowViewState:(id)arg8 timePickerViewState:(id)arg9 repeatTextId:(id)arg10 repeatPatternText:(id)arg11 dayPickerViewState:(id)arg12 initialCommandDefs:(id)arg13 canSave:(_Bool)arg14 isDeleteVisible:(_Bool)arg15 saveButtonDetailEstimatedTime:(id)arg16 errorDialog:(id)arg17;
- (void).cxx_destruct;
@property(readonly, nonatomic) CMRAlertDialogViewState *errorDialog; // @synthesize errorDialog=_errorDialog;
@property(readonly, nonatomic) NSString *saveButtonDetailEstimatedTime; // @synthesize saveButtonDetailEstimatedTime=_saveButtonDetailEstimatedTime;
@property(readonly, nonatomic) _Bool isDeleteVisible; // @synthesize isDeleteVisible=_isDeleteVisible;
@property(readonly, nonatomic) _Bool canSave; // @synthesize canSave=_canSave;
@property(readonly, nonatomic) NSString *initialCommandDefs; // @synthesize initialCommandDefs=_initialCommandDefs;
@property(readonly, nonatomic) CMRDayPickerViewState *dayPickerViewState; // @synthesize dayPickerViewState=_dayPickerViewState;
@property(readonly, nonatomic) NSString *repeatPatternText; // @synthesize repeatPatternText=_repeatPatternText;
@property(readonly, nonatomic) NSString *repeatTextId; // @synthesize repeatTextId=_repeatTextId;
@property(readonly, nonatomic) CMRTimePickerViewState *timePickerViewState; // @synthesize timePickerViewState=_timePickerViewState;
@property(readonly, nonatomic) CMRTimeWindowViewState *timeWindowViewState; // @synthesize timeWindowViewState=_timeWindowViewState;
@property(readonly, nonatomic) NSString *contextMenuCancelTextId; // @synthesize contextMenuCancelTextId=_contextMenuCancelTextId;
@property(readonly, nonatomic) NSArray *contextMenuItems; // @synthesize contextMenuItems=_contextMenuItems;
@property(readonly, nonatomic) NSString *enableAutomationTextId; // @synthesize enableAutomationTextId=_enableAutomationTextId;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *timeWindowText; // @synthesize timeWindowText=_timeWindowText;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *automationDescription; // @synthesize automationDescription=_automationDescription;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *automationTitle; // @synthesize automationTitle=_automationTitle;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfiguration:(id)arg1 automationTitle:(id)arg2 automationDescription:(id)arg3 timeWindowText:(id)arg4 enableAutomationTextId:(id)arg5 contextMenuItems:(id)arg6 contextMenuCancelTextId:(id)arg7 timeWindowViewState:(id)arg8 timePickerViewState:(id)arg9 repeatTextId:(id)arg10 repeatPatternText:(id)arg11 dayPickerViewState:(id)arg12 initialCommandDefs:(id)arg13 canSave:(_Bool)arg14 isDeleteVisible:(_Bool)arg15 saveButtonDetailEstimatedTime:(id)arg16 errorDialog:(id)arg17;

@end


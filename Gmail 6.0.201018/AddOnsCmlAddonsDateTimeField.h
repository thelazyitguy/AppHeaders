//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AddOnsCmlAddonsField.h"

#import "JavaIoSerializable-Protocol.h"

@class AddOnsCmlListenableMutableValue, ComGoogleCommonBaseOptional, JAddOnsWidget_DateTimePicker_DateTimePickerType, NSString;
@protocol AddOnsCmlAddonsDateTimeFormatter, CMLLDateTimePickerService;

@interface AddOnsCmlAddonsDateTimeField : AddOnsCmlAddonsField <JavaIoSerializable>
{
    AddOnsCmlListenableMutableValue *dateMutable_;
    AddOnsCmlListenableMutableValue *timeMutable_;
    JAddOnsWidget_DateTimePicker_DateTimePickerType *dateTimePickerType_;
    ComGoogleCommonBaseOptional *timezoneOffsetMins_;
    id <CMLLDateTimePickerService> dateTimePickerService_;
    id <AddOnsCmlAddonsDateTimeFormatter> dateTimeFormatter_;
    int timeZoneOffsetMinutes_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getTimeMutableValue;
- (id)getDateMutableValue;
- (_Bool)hasTime;
- (_Bool)hasDate;
- (void)clearTimeWithComGoogleTemplateJslayoutCommonRenderreplayRenderReplayer:(id)arg1;
- (void)clearDateWithComGoogleTemplateJslayoutCommonRenderreplayRenderReplayer:(id)arg1;
- (void)showTimePickerWithComGoogleTemplateJslayoutCommonRenderreplayRenderReplayer:(id)arg1 withCMLLPColor:(id)arg2;
- (void)showDatePickerWithComGoogleTemplateJslayoutCommonRenderreplayRenderReplayer:(id)arg1 withCMLLPColor:(id)arg2;
- (_Bool)isValid;
- (id)getTimeString;
- (id)getDateString;
- (id)getFormInputValue;
- (id)getFormInputName;
- (void)restoreStateWithCMLLDateTimePickerService:(id)arg1 withAddOnsCmlAddonsDateTimeFormatter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

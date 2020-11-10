//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWATextFieldView.h>

#import <Module_Framework/GOODatePickerViewControllerDelegate-Protocol.h>
#import <Module_Framework/UITextFieldDelegate-Protocol.h>

@class GOODatePickerViewController, GWADateFormat, NSDate, NSString, UIView;
@protocol UITextFieldDelegate;

@interface GWADateTextFieldView : GWATextFieldView <GOODatePickerViewControllerDelegate, UITextFieldDelegate>
{
    UIView *_blockingView;
    GOODatePickerViewController *_picker;
    GWADateFormat *_dateFormat;
    id <UITextFieldDelegate> _textFieldDelegate;
    _Bool _showDatePicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GWADateFormat *dateFormat; // @synthesize dateFormat=_dateFormat;
@property(nonatomic) _Bool showDatePicker; // @synthesize showDatePicker=_showDatePicker;
- (id)datePicker;
- (void)datePickerViewControllerDidCancel:(id)arg1;
- (void)datePickerViewController:(id)arg1 didSelectDate:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setTextFieldDelegate:(id)arg1;
@property(retain, nonatomic) NSDate *maximumDate;
@property(retain, nonatomic) NSDate *minimumDate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, T1AccordionButton, T1DurationPickerView, TFNLegacyButton, TFNPaddedButton, UILabel;

@interface T1ComposePollingCardPreviewView : UIView
{
    _Bool _durationPickerVisible;
    NSArray *_textFields;
    TFNPaddedButton *_removeButton;
    TFNLegacyButton *_addChoiceButton;
    T1AccordionButton *_durationButton;
    T1DurationPickerView *_durationPicker;
    unsigned long long _numberOfVisibleChoices;
    UIView *_durationContainer;
    UILabel *_durationLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UIView *durationContainer; // @synthesize durationContainer=_durationContainer;
@property(nonatomic) _Bool durationPickerVisible; // @synthesize durationPickerVisible=_durationPickerVisible;
@property(nonatomic) unsigned long long numberOfVisibleChoices; // @synthesize numberOfVisibleChoices=_numberOfVisibleChoices;
@property(retain, nonatomic) T1DurationPickerView *durationPicker; // @synthesize durationPicker=_durationPicker;
@property(readonly, nonatomic) T1AccordionButton *durationButton; // @synthesize durationButton=_durationButton;
@property(readonly, nonatomic) TFNLegacyButton *addChoiceButton; // @synthesize addChoiceButton=_addChoiceButton;
@property(readonly, nonatomic) TFNPaddedButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)setDurationPickerVisible:(_Bool)arg1 animated:(_Bool)arg2 animations:(CDUnknownBlockType)arg3;
- (void)_endingAlphaStateForChoices:(unsigned long long)arg1;
- (void)_endingHiddenStateForChoices:(unsigned long long)arg1;
- (void)setNumberOfVisibleChoices:(unsigned long long)arg1 animated:(_Bool)arg2;
- (double)_heightForNumberOfVisibleChoices:(unsigned long long)arg1;
- (double)_textFieldsHeightForNumberOfChoices:(unsigned long long)arg1;
- (void)_updateAddChoiceButtonForNumberOfChoices:(long long)arg1;
- (void)_updateTextFieldsPositionsForNumberOfChoices:(long long)arg1;
- (void)layoutSubviews;
- (id)_choiceFieldForIndex:(long long)arg1;
@property(readonly, nonatomic) _Bool canAddAnotherChoice;
- (id)choiceTextFields;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 minInterval:(double)arg2 maxInterval:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

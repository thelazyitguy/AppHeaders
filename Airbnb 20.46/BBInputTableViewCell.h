//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBGroupedTableViewCell.h"

#import "BBInputCellPickerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class BBInputCellButtonView, BBInputCellPickerView, BBInputCellSegmentedControl, BBInputTableViewCellAttributes, NSIndexPath, NSString, UILabel, UISwitch, UITextField;

@interface BBInputTableViewCell : BBGroupedTableViewCell <BBInputCellPickerViewDelegate, UITextFieldDelegate>
{
    _Bool _disableTextFieldEditing;
    BBInputTableViewCellAttributes *_attributes;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextField *_textField;
    BBInputCellButtonView *_buttonView;
    UISwitch *_switchControl;
    NSIndexPath *_indexPath;
    BBInputCellPickerView *_pickerView;
    BBInputCellSegmentedControl *_segmentedControl;
}

+ (double)heightForCellWithAttributes:(id)arg1;
+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) BBInputCellSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) BBInputCellPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic, getter=shouldDisableTextFieldEditing) _Bool disableTextFieldEditing; // @synthesize disableTextFieldEditing=_disableTextFieldEditing;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switchControl;
@property(retain, nonatomic) BBInputCellButtonView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) BBInputTableViewCellAttributes *attributes; // @synthesize attributes=_attributes;
- (void)dealloc;
- (void)switchValueChanged:(id)arg1;
- (void)segmentedControlValueChanged:(id)arg1;
- (void)pickerViewDidChangeValue:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)submitTextField;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)buttonWasPressed:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isFirstResponder;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


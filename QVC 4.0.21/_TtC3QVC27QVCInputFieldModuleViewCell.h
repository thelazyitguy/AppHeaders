//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC3QVC28CheckoutBaseMarginModuleCell.h"

@class UILabel, UIView;

@interface _TtC3QVC27QVCInputFieldModuleViewCell : _TtC3QVC28CheckoutBaseMarginModuleCell
{
    // Error parsing type: , name: text
    // Error parsing type: , name: placeholder
    // Error parsing type: , name: errorLabel
    // Error parsing type: , name: border
    // Error parsing type: , name: keyboardToolbarCode
    // Error parsing type: , name: didTextDidChangeEvent
    // Error parsing type: , name: didTextFieldChangeStateEvent
    // Error parsing type: , name: didTapNextTextModuleEvent
    // Error parsing type: , name: didTapPreviousModuleEvent
    // Error parsing type: , name: didTapDoneModuleEvent
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUserTapRightButton:(id)arg1;
- (void)didUserTapLeftButton:(id)arg1;
- (void)didTextFieldExit:(id)arg1;
- (void)didTextFieldEndEditing:(id)arg1;
- (void)didTextFieldBeginEditing:(id)arg1;
- (void)didTextFieldEditingChanged:(id)arg1;
- (void)didTapDoneModuleAction:(id)arg1;
- (void)didTapPreviousModuleAction:(id)arg1;
- (void)didTapNextTextModuleAction:(id)arg1;
@property(nonatomic) __weak UIView *border; // @synthesize border;
@property(nonatomic) __weak UILabel *errorLabel; // @synthesize errorLabel;
@property(nonatomic) __weak UILabel *placeholder; // @synthesize placeholder;
@property(nonatomic) __weak UIView *text; // @synthesize text;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSString, SPTPhoneNumberSignupPhoneNumberEntryTableViewCellStyle, UITextField, UIView;

@interface SPTPhoneNumberSignupPhoneNumberEntryTableViewCell : UITableViewCell <GLUEStyleable>
{
    GLUELabel *_callingCodeLabel;
    UITextField *_phoneNumberTextField;
    UIView *_verticalSeparator;
    SPTPhoneNumberSignupPhoneNumberEntryTableViewCellStyle *_style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTPhoneNumberSignupPhoneNumberEntryTableViewCellStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *verticalSeparator; // @synthesize verticalSeparator=_verticalSeparator;
@property(retain, nonatomic) UITextField *phoneNumberTextField; // @synthesize phoneNumberTextField=_phoneNumberTextField;
@property(retain, nonatomic) GLUELabel *callingCodeLabel; // @synthesize callingCodeLabel=_callingCodeLabel;
- (void)setPhoneNumberTextFieldAccessibilityLabel:(id)arg1;
- (void)setPhoneNumberTextFieldAccessibilityIdentifier:(id)arg1;
- (void)setCallingCodeAccessibilityIdentifier:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)setPhoneNumberTextFieldPlaceholder:(id)arg1;
- (void)setCallingCodeText:(id)arg1;
- (void)setupConstraints;
- (void)setupVerticalSeparator;
- (void)setupPhoneNumberTextField;
- (void)setupCallingCodeLabel;
- (id)initWithStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

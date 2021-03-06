//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Stripe/STPFormTextFieldContainer-Protocol.h>
#import <Stripe/STPFormTextFieldDelegate-Protocol.h>
#import <Stripe/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString, UIColor, UIFont;
@protocol STPMultiFormFieldDelegate;

@interface STPMultiFormTextField : UIView <UITextFieldDelegate, STPFormTextFieldDelegate, STPFormTextFieldContainer>
{
    UIFont *_formFont;
    long long _formKeyboardAppearance;
    UIColor *_formPlaceholderColor;
    UIColor *_formTextColor;
    UIColor *_formTextErrorColor;
    NSArray *_formTextFields;
    id <STPMultiFormFieldDelegate> _multiFormFieldDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <STPMultiFormFieldDelegate> multiFormFieldDelegate; // @synthesize multiFormFieldDelegate=_multiFormFieldDelegate;
@property(retain, nonatomic) NSArray *formTextFields; // @synthesize formTextFields=_formTextFields;
@property(nonatomic) long long formKeyboardAppearance; // @synthesize formKeyboardAppearance=_formKeyboardAppearance;
@property(copy, nonatomic) UIColor *formCursorColor;
@property(copy, nonatomic) UIColor *formPlaceholderColor; // @synthesize formPlaceholderColor=_formPlaceholderColor;
@property(copy, nonatomic) UIColor *formTextErrorColor; // @synthesize formTextErrorColor=_formTextErrorColor;
@property(copy, nonatomic) UIColor *formTextColor; // @synthesize formTextColor=_formTextColor;
@property(copy, nonatomic) UIFont *formFont; // @synthesize formFont=_formFont;
- (id)_lastSubField;
- (id)_firstInvalidSubField;
- (id)_nextInSequenceFirstResponderField;
- (id)_nextFirstResponderField;
- (id)_previousField;
- (id)_currentFirstResponderField;
- (void)formTextFieldTextDidChange:(id)arg1;
- (id)formTextField:(id)arg1 modifyIncomingTextChange:(id)arg2;
- (void)formTextFieldDidBackspaceOnEmpty:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (void)focusNextFormField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


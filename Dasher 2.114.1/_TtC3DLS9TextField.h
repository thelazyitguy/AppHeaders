//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface _TtC3DLS9TextField : UIView
{
    // Error parsing type: , name: isLabelHidden
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: placeholder
    // Error parsing type: , name: hint
    // Error parsing type: , name: error
    // Error parsing type: , name: size
    // Error parsing type: , name: leadingIcon
    // Error parsing type: , name: trailingIcon
    // Error parsing type: , name: leadingViewDisplayMode
    // Error parsing type: , name: trailingViewDisplayMode
    // Error parsing type: , name: leadingView
    // Error parsing type: , name: trailingView
    // Error parsing type: , name: leadingIconAction
    // Error parsing type: , name: trailingIconAction
    // Error parsing type: , name: didChange
    // Error parsing type: , name: didBeginEditing
    // Error parsing type: , name: didEndEditing
    // Error parsing type: , name: didReturn
    // Error parsing type: , name: isEnabled
    // Error parsing type: , name: delegate
    // Error parsing type: , name: state
    // Error parsing type: , name: focusedState
    // Error parsing type: , name: containerView
    // Error parsing type: , name: $__lazy_storage_$_titleLabelView
    // Error parsing type: , name: textFieldContainerView
    // Error parsing type: , name: textFieldView
    // Error parsing type: , name: $__lazy_storage_$_leadingIconView
    // Error parsing type: , name: $__lazy_storage_$_trailingIconView
    // Error parsing type: , name: $__lazy_storage_$_hintView
    // Error parsing type: , name: $__lazy_storage_$_errorView
    // Error parsing type: , name: $__lazy_storage_$_errorIconAttachment
    // Error parsing type: , name: textFieldContainerHeight
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)handleOnChange;
- (void)handleTapTrailingView;
- (void)handleTapLeadingView;
- (id)initWithCoder:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidChangeSelection:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) _Bool secureTextEntry;
- (_Bool)isSecureTextEntry;
@property(nonatomic, copy) NSString *textContentType;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;

@end

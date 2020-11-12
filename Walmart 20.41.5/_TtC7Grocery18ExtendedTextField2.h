//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSAttributedString, NSLayoutConstraint, NSString, UIColor, UILabel, UIView;
@protocol UITextFieldDelegate;

@interface _TtC7Grocery18ExtendedTextField2 : UITextField
{
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: errorLabel
    // Error parsing type: , name: errorSpaceConstraint
    // Error parsing type: , name: defaultErrorSpacing
    // Error parsing type: , name: adjustedValidFieldSpacing
    // Error parsing type: , name: borderView
    // Error parsing type: , name: borderWidth
    // Error parsing type: , name: normalTextColor
    // Error parsing type: , name: dynamicValidation
    // Error parsing type: , name: titleColor
    // Error parsing type: , name: borderColor
    // Error parsing type: , name: disabledTextColor
    // Error parsing type: , name: disabledTitleColor
    // Error parsing type: , name: disabledBorderColor
    // Error parsing type: , name: editingTitleColor
    // Error parsing type: , name: editingBorderColor
    // Error parsing type: , name: invalidTitleColor
    // Error parsing type: , name: invalidBorderColor
    // Error parsing type: , name: errorMessageColor
    // Error parsing type: , name: placeholderTextColor
    // Error parsing type: , name: validator
    // Error parsing type: , name: isValid
    // Error parsing type: , name: textChanged
    // Error parsing type: , name: changeObserver
    // Error parsing type: , name: shouldReadPlaceholders
    // Error parsing type: , name: forceTextForAccessibilityValue
    // Error parsing type: , name: preventMenuActions
    // Error parsing type: , name: allowedCharacters
    // Error parsing type: , name: maxLength
    // Error parsing type: , name: trimsWhitespace
    // Error parsing type: , name: canCopyPaste
    // Error parsing type: , name: allowEmojis
    // Error parsing type: , name: textPattern
    // Error parsing type: , name: textFieldHandler
    // Error parsing type: , name: recentChanges
    // Error parsing type: , name: toggleSecureEntryButton
    // Error parsing type: , name: togglesSecureTextEntry
}

- (void).cxx_destruct;
@property(nonatomic) long long rightViewMode;
@property(nonatomic, retain) UIView *rightView;
@property(nonatomic) _Bool secureTextEntry;
- (_Bool)isSecureTextEntry;
- (void)toggleSecureTextEntry;
@property(nonatomic) _Bool togglesSecureTextEntry; // @synthesize togglesSecureTextEntry;
@property(nonatomic, retain) id <UITextFieldDelegate> delegate;
@property(nonatomic, copy) NSString *textPattern;
@property(nonatomic) long long ibMaxLength;
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) _Bool allowEmojis; // @synthesize allowEmojis;
@property(nonatomic) _Bool canCopyPaste; // @synthesize canCopyPaste;
@property(nonatomic) _Bool trimsWhitespace; // @synthesize trimsWhitespace;
@property(nonatomic, copy) NSString *allowedCharacters;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
@property(nonatomic) _Bool preventMenuActions; // @synthesize preventMenuActions;
@property(nonatomic, copy) NSString *accessibilityValue;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
@property(nonatomic) _Bool enabled;
- (_Bool)isEnabled;
@property(nonatomic, copy) NSString *text;
@property(nonatomic, retain) NSAttributedString *attributedPlaceholder;
@property(nonatomic, copy) NSString *placeholder;
@property(nonatomic, retain) UIColor *placeholderTextColor; // @synthesize placeholderTextColor;
@property(nonatomic, retain) UIColor *errorMessageColor; // @synthesize errorMessageColor;
@property(nonatomic, retain) UIColor *invalidBorderColor; // @synthesize invalidBorderColor;
@property(nonatomic, retain) UIColor *invalidTitleColor; // @synthesize invalidTitleColor;
@property(nonatomic, retain) UIColor *editingBorderColor; // @synthesize editingBorderColor;
@property(nonatomic, retain) UIColor *editingTitleColor; // @synthesize editingTitleColor;
@property(nonatomic, retain) UIColor *disabledBorderColor; // @synthesize disabledBorderColor;
@property(nonatomic, retain) UIColor *disabledTitleColor; // @synthesize disabledTitleColor;
@property(nonatomic, retain) UIColor *disabledTextColor; // @synthesize disabledTextColor;
@property(nonatomic, retain) UIColor *borderColor; // @synthesize borderColor;
@property(nonatomic, retain) UIColor *titleColor; // @synthesize titleColor;
@property(nonatomic) _Bool dynamicValidation; // @synthesize dynamicValidation;
@property(nonatomic, retain) UIColor *textColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double adjustedValidFieldSpacing; // @synthesize adjustedValidFieldSpacing;
@property(nonatomic) __weak NSLayoutConstraint *errorSpaceConstraint; // @synthesize errorSpaceConstraint;
@property(nonatomic) __weak UILabel *errorLabel; // @synthesize errorLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;

@end

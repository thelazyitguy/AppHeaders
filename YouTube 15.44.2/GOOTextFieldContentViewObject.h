//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOTextContentViewObject.h>

#import <Module_Framework/GOOTextFieldTraits-Protocol.h>
#import <Module_Framework/UITextInputTraits-Protocol.h>

@class NSString, UIColor, UIFont, UITextInputPasswordRules;
@protocol GOOTextFieldCharacterCounter, GOOTextFieldValidator, UITextFieldDelegate;

@interface GOOTextFieldContentViewObject : GOOTextContentViewObject <GOOTextFieldTraits, UITextInputTraits>
{
    _Bool enablesReturnKeyAutomatically;
    _Bool secureTextEntry;
    _Bool _textFieldEnabled;
    NSString *_text;
    NSString *_placeholder;
    NSString *_helperText;
    UIColor *_helperTextColor;
    long long _presentationStyle;
    UIColor *_tintColor;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    UIColor *_placeholderColor;
    UIColor *_errorColor;
    UIColor *_borderColor;
    unsigned long long _characterLimit;
    id <GOOTextFieldCharacterCounter> _characterCounter;
    long long _underlineViewMode;
    long long autocapitalizationType;
    long long autocorrectionType;
    long long spellCheckingType;
    long long keyboardType;
    long long keyboardAppearance;
    long long returnKeyType;
    UIFont *_textFieldFont;
    long long _clearButtonMode;
    UIColor *_clearButtonColor;
    long long _elementID;
    id <UITextFieldDelegate> _textFieldDelegate;
    id <GOOTextFieldValidator> _validator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GOOTextFieldValidator> validator; // @synthesize validator=_validator;
@property(nonatomic) __weak id <UITextFieldDelegate> textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;
@property(nonatomic) long long elementID; // @synthesize elementID=_elementID;
@property(retain, nonatomic) UIColor *clearButtonColor; // @synthesize clearButtonColor=_clearButtonColor;
@property(nonatomic) long long clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property(retain, nonatomic) UIFont *textFieldFont; // @synthesize textFieldFont=_textFieldFont;
@property(nonatomic, getter=isTextFieldEnabled) _Bool textFieldEnabled; // @synthesize textFieldEnabled=_textFieldEnabled;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType;
@property(nonatomic) long long spellCheckingType; // @synthesize spellCheckingType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType;
@property(nonatomic) long long underlineViewMode; // @synthesize underlineViewMode=_underlineViewMode;
@property(nonatomic) __weak id <GOOTextFieldCharacterCounter> characterCounter; // @synthesize characterCounter=_characterCounter;
@property(nonatomic) unsigned long long characterLimit; // @synthesize characterLimit=_characterLimit;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *errorColor; // @synthesize errorColor=_errorColor;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) UIColor *helperTextColor; // @synthesize helperTextColor=_helperTextColor;
@property(copy, nonatomic) NSString *helperText; // @synthesize helperText=_helperText;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end


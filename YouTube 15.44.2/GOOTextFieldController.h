//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GOOTextFieldTraits-Protocol.h>

@class GOOTextFieldTitleView, GOOUnderlineView, NSString, UIColor, UILabel, UIView;
@protocol GOOControlledTextField><GOOTextFieldTraits, GOOTextFieldCharacterCounter, GOOTextFieldValidator;

@interface GOOTextFieldController : NSObject <GOOTextFieldTraits>
{
    _Bool _enabled;
    _Bool _shouldLayoutForRTL;
    _Bool _isMultiline;
    _Bool _shouldHideHelperText;
    _Bool _needsPlaceholderHeightRecalculation;
    NSString *_do_not_use_text;
    long long _presentationStyle;
    UIColor *_tintColor;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    UIColor *_placeholderColor;
    UIColor *_errorColor;
    UIColor *_borderColor;
    UIColor *_helperTextColor;
    unsigned long long _characterLimit;
    id <GOOTextFieldCharacterCounter> _characterCounter;
    long long _underlineViewMode;
    id <GOOTextFieldValidator> _validator;
    NSString *_titleTruncationMode;
    UIView<GOOControlledTextField><GOOTextFieldTraits> *_textField;
    NSString *_errorAnnouncedDuringLastValidation;
    GOOTextFieldTitleView *_titleView;
    GOOUnderlineView *_borderView;
    UILabel *_characterLimitView;
    UILabel *_errorTextView;
    UILabel *_helperTextView;
    double _calculatedPlaceholderHeight;
    double _widthToCalculatePlaceholderHeight;
    struct CGAffineTransform _floatingTitleScale;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsPlaceholderHeightRecalculation; // @synthesize needsPlaceholderHeightRecalculation=_needsPlaceholderHeightRecalculation;
@property(nonatomic) double widthToCalculatePlaceholderHeight; // @synthesize widthToCalculatePlaceholderHeight=_widthToCalculatePlaceholderHeight;
@property(nonatomic) double calculatedPlaceholderHeight; // @synthesize calculatedPlaceholderHeight=_calculatedPlaceholderHeight;
@property(nonatomic) _Bool shouldHideHelperText; // @synthesize shouldHideHelperText=_shouldHideHelperText;
@property(retain, nonatomic) UILabel *helperTextView; // @synthesize helperTextView=_helperTextView;
@property(retain, nonatomic) UILabel *errorTextView; // @synthesize errorTextView=_errorTextView;
@property(retain, nonatomic) UILabel *characterLimitView; // @synthesize characterLimitView=_characterLimitView;
@property(retain, nonatomic) GOOUnderlineView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) struct CGAffineTransform floatingTitleScale; // @synthesize floatingTitleScale=_floatingTitleScale;
@property(retain, nonatomic) GOOTextFieldTitleView *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) _Bool isMultiline; // @synthesize isMultiline=_isMultiline;
@property(copy, nonatomic) NSString *errorAnnouncedDuringLastValidation; // @synthesize errorAnnouncedDuringLastValidation=_errorAnnouncedDuringLastValidation;
@property(nonatomic) __weak UIView<GOOControlledTextField><GOOTextFieldTraits> *textField; // @synthesize textField=_textField;
@property(nonatomic) _Bool shouldLayoutForRTL; // @synthesize shouldLayoutForRTL=_shouldLayoutForRTL;
@property(retain, nonatomic) NSString *titleTruncationMode; // @synthesize titleTruncationMode=_titleTruncationMode;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <GOOTextFieldValidator> validator; // @synthesize validator=_validator;
@property(nonatomic) long long underlineViewMode; // @synthesize underlineViewMode=_underlineViewMode;
@property(nonatomic) __weak id <GOOTextFieldCharacterCounter> characterCounter; // @synthesize characterCounter=_characterCounter;
@property(nonatomic) unsigned long long characterLimit; // @synthesize characterLimit=_characterLimit;
@property(retain, nonatomic) UIColor *helperTextColor; // @synthesize helperTextColor=_helperTextColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *errorColor; // @synthesize errorColor=_errorColor;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) NSString *text; // @synthesize text=_do_not_use_text;
- (unsigned long long)characterCount;
@property(readonly, nonatomic) double fontHeight;
- (id)textFieldLabel;
- (void)updateColors;
- (struct CGRect)frameForTextViewBelowFrame:(id)arg1;
- (void)performValidation;
- (_Bool)shouldValidateEvents:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool canValidate;
- (void)validateEvents:(unsigned long long)arg1;
- (void)animatePlaceholderDown;
- (void)animatePlaceholderUp;
- (double)placeHolderRequiredWidth;
- (struct CGRect)placeholderFloatingPositionFrame;
- (struct CGRect)placeholderDefaultPositionFrame;
- (double)placeholderHeightForWidth:(double)arg1;
- (void)updatePlaceholderTransformAndPosition;
- (void)updatePlaceholderAlpha;
- (void)updateCharacterCountLimit;
- (void)removeCharacterCountLimit;
- (struct CGRect)characterLimitFrame;
@property(readonly, nonatomic) struct CGSize characterLimitViewSize;
@property(copy, nonatomic) NSString *helperText;
@property(copy, nonatomic) NSString *placeholder;
- (struct CGRect)borderViewFrame;
- (_Bool)goo_ShouldLayoutForRTL;
- (void)validate;
- (void)didChange;
- (void)didEndEditing;
- (void)didBeginEditing;
@property(readonly, nonatomic) struct UIEdgeInsets textContainerInset;
- (void)layoutSubviewsWithAnimationsDisabled;
- (void)didSetFont;
- (void)didSetText;
- (id)initWithTextField:(id)arg1 isMultiline:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


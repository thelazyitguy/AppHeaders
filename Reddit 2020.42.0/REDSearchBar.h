//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseControl.h>

#import "REDInputTextDelegate-Protocol.h"

@class BaseButton, BaseLabel, NSString, REDInputTextField, UIActivityIndicatorView, UIColor, UIImageView, UIView;
@protocol REDSearchBarDelegate;

@interface REDSearchBar : BaseControl <REDInputTextDelegate>
{
    _Bool _showsSettingsButton;
    _Bool _showsCancelButton;
    _Bool _showsClearButton;
    _Bool _isEditing;
    UIColor *_borderColor;
    NSString *_placeholder;
    id <REDSearchBarDelegate> _delegate;
    REDInputTextField *_inputView;
    UIColor *_primaryColor;
    unsigned long long _backgroundStyle;
    UIView *_textContainerView;
    UIImageView *_searchIconView;
    UIActivityIndicatorView *_searchIndicatorView;
    BaseButton *_clearButton;
    BaseButton *_settingsButton;
    UIImageView *_resultsIconView;
    BaseButton *_cancelButton;
    BaseLabel *_placeholderLabel;
}

+ (id)titleViewWithSearchBar:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BaseLabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) BaseButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *resultsIconView; // @synthesize resultsIconView=_resultsIconView;
@property(retain, nonatomic) BaseButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) BaseButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) UIActivityIndicatorView *searchIndicatorView; // @synthesize searchIndicatorView=_searchIndicatorView;
@property(retain, nonatomic) UIImageView *searchIconView; // @synthesize searchIconView=_searchIconView;
@property(retain, nonatomic) UIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(retain, nonatomic) REDInputTextField *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) __weak id <REDSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) _Bool showsClearButton; // @synthesize showsClearButton=_showsClearButton;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool showsSettingsButton; // @synthesize showsSettingsButton=_showsSettingsButton;
- (void)stopLoadingIndication:(id)arg1;
- (void)startLoadingIndication:(id)arg1;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)didTapSettingsButton:(id)arg1;
- (void)didTapClearButton:(id)arg1;
- (void)didTapCancelButton:(id)arg1;
- (void)setIsEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateEditingChange;
- (void)setTintColor:(id)arg1;
@property(retain, nonatomic) UIColor *inputBackgroundColor;
- (void)themeDidChange:(id)arg1;
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;
@property(copy, nonatomic) NSString *text;
- (void)updateInputViewViews;
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)defaultInputView;
- (id)init;
- (id)initWithSearchBarInput:(id)arg1;
- (_Bool)textInputShouldReturn:(id)arg1;
- (_Bool)textInputShouldBeginEditing:(id)arg1;
- (void)textInputDidTapKeyboardEnter:(id)arg1;
- (void)textInputDidChange:(id)arg1;
- (_Bool)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (long long)keyboardAppearance;
- (void)applyThemeColors;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


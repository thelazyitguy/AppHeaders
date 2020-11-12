//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTSettingsTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class GBTIconButton, GBTTextField, NSArray, NSString, UIColor, UIFont, UIView;
@protocol GBTEditableCellDelegate, HUBColorScheme;

@interface GBTEditableCell : GBTSettingsTableViewCell <UITextFieldDelegate>
{
    GBTIconButton *_clearInputButton;
    _Bool _isClearInputButtonInHiddenState;
    UIView *_separatorView;
    GBTTextField *_textField;
    id <HUBColorScheme> _colorScheme;
    _Bool _canShowClearInputButton;
    id <GBTEditableCellDelegate> _delegate;
    double _textFieldHorizontalPadding;
    double _textFieldWidth;
    double _textFieldHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double textFieldHeight; // @synthesize textFieldHeight=_textFieldHeight;
@property(nonatomic) double textFieldWidth; // @synthesize textFieldWidth=_textFieldWidth;
@property(nonatomic) double textFieldHorizontalPadding; // @synthesize textFieldHorizontalPadding=_textFieldHorizontalPadding;
@property(nonatomic) _Bool canShowClearInputButton; // @synthesize canShowClearInputButton=_canShowClearInputButton;
@property(nonatomic) __weak id <GBTEditableCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)textFieldAccessibilityIdentifier;
- (id)textFieldAccessibilityLabel;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)setClearInputButtonHidden:(_Bool)arg1;
- (void)clearInputButtonTapped:(id)arg1;
@property(nonatomic) double minimumLeftViewWidth;
@property(nonatomic) long long leftViewMode;
@property(retain, nonatomic) UIView *leftView;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *textPrompt;
- (void)createCellSeparatorWithColor:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 colorScheme:(id)arg3;
@property(readonly, nonatomic) NSArray *accessibilityViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JumioCore/JMBaseTableViewCell.h>

#import <BAMCheckout/UITextFieldDelegate-Protocol.h>

@class BAMInputField, BAMSecureTextField, NSLayoutConstraint, NSString, UIImageView, UIView;
@protocol BAMInputTableViewCellDelegate;

@interface BAMInputTableViewCell : JMBaseTableViewCell <UITextFieldDelegate>
{
    BAMSecureTextField *_textField;
    UIImageView *_iconImageView;
    unsigned long long _cellStyle;
    BAMInputField *_inputField;
    UIView *_additionalBackgroundView;
    id <BAMInputTableViewCellDelegate> _delegate;
    NSString *_inputValidationRegex;
    NSLayoutConstraint *_additionalBackgroundBottomConstraint;
    struct UIEdgeInsets _contentInset;
}

+ (struct CGSize)prefferedIconImageViewSize;
+ (id)reuseIdentifier;
@property(retain, nonatomic) NSLayoutConstraint *additionalBackgroundBottomConstraint; // @synthesize additionalBackgroundBottomConstraint=_additionalBackgroundBottomConstraint;
@property(retain, nonatomic) NSString *inputValidationRegex; // @synthesize inputValidationRegex=_inputValidationRegex;
@property(nonatomic) __weak id <BAMInputTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *additionalBackgroundView; // @synthesize additionalBackgroundView=_additionalBackgroundView;
@property(retain, nonatomic) BAMInputField *inputField; // @synthesize inputField=_inputField;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) BAMSecureTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)delgateInputTableViewCellInputDidChange;
- (void)delgatePerformInputTableViewCellWillReturn;
- (void)delegatePerformInputTableViewCellDidFinishEditing;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)isStringAllowed:(id)arg1;
- (void)updateFromField:(id)arg1 creditCardType:(unsigned long long)arg2;
- (void)updateBackgroundFromField:(id)arg1;
- (void)updateFromField:(id)arg1;
- (id)createViewsDictionary;
- (void)setupContentViewInternal;
- (void)setupContentInternal;
- (void)setupContentView;
- (void)setupContent;
- (id)initWithCellStyle:(unsigned long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

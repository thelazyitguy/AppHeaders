//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/OAStackView.h>

#import <Module_Framework/GWAFocusable-Protocol.h>
#import <Module_Framework/GWAImageWithCaptionViewDelgate-Protocol.h>
#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>
#import <Module_Framework/GWAStringValuedFormField-Protocol.h>

@class GIPNetworkImageView, GWAFormattableTextField, GWAImageWithCaptionView, GWALabel, GWAMegalogsContext, GWATextFieldFormatter, GWATintedImageView, NSArray, NSLayoutConstraint, NSNumber, NSString, OrchImageWithCaption, OrchTooltip, QTMColorGroup, UIImage, UILabel, UIView;
@protocol GOOModalPresentation, GOOTextFieldValidator, GWAFocusDelegate, NSCopying, UITextFieldDelegate;

@interface GWATextFieldView : OAStackView <GWAImageWithCaptionViewDelgate, GWAStringValuedFormField, GWAFocusable, GWAMegalogsSupportingComponent>
{
    GWAFormattableTextField *_textField;
    GWALabel *_readOnlyLabel;
    GWATintedImageView *_tintedImageView;
    GIPNetworkImageView *_rightImageView;
    OAStackView *_textFieldView;
    UILabel *_textFieldDescription;
    struct CGSize _rightImageSize;
    GWAImageWithCaptionView *_tooltipImageView;
    id <GOOModalPresentation> _tooltipAlertView;
    UIView *_placeholderView;
    NSLayoutConstraint *_textFieldFullWidthConstraint;
    QTMColorGroup *_colorGroup;
    _Bool _shouldHideImageOnUnFocus;
    id <GWAFocusDelegate> focusDelegate;
    long long elementID;
    GWAMegalogsContext *megalogsParentContext;
    GWAMegalogsContext *megalogsContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
    UIImage *_image;
    NSString *_placeholder;
    unsigned long long _displayType;
    OrchImageWithCaption *_rightImage;
    OrchTooltip *_tooltip;
    unsigned long long _widgetStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long widgetStyle; // @synthesize widgetStyle=_widgetStyle;
@property(retain, nonatomic) OrchTooltip *tooltip; // @synthesize tooltip=_tooltip;
@property(retain, nonatomic) OrchImageWithCaption *rightImage; // @synthesize rightImage=_rightImage;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool shouldHideImageOnUnFocus; // @synthesize shouldHideImageOnUnFocus=_shouldHideImageOnUnFocus;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(nonatomic) long long elementID; // @synthesize elementID;
@property(nonatomic) __weak id <GWAFocusDelegate> focusDelegate; // @synthesize focusDelegate;
- (void)prepareMegalogsContexts;
@property(retain, nonatomic) UIView *textFieldInputAccessoryView;
- (id)tooltipAlertView;
- (id)tooltipImageView;
- (struct CGSize)rightImageSize;
- (id)textFieldDescription;
- (id)textFieldView;
- (id)rightImageView;
- (id)tintedImageView;
- (id)readOnlyLabel;
- (id)textField;
- (id)toolTipViewWithStyleMaterial;
- (void)showTextFieldDescriptionWhileEditingTextField;
- (void)hideTextFieldDescriptionIfValidated;
- (void)setHidden:(_Bool)arg1;
- (id)alertViewSubTitle;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldFinished:(id)arg1;
- (void)onUnfocus:(id)arg1;
- (void)onFocus:(id)arg1;
@property(retain, nonatomic) NSString *text;
- (void)commonInit;
- (void)setErrorMessageWithExtraWidth:(double)arg1;
@property(readonly, nonatomic) NSString *stringValue;
- (void)constraintTextFieldToMaximumWidth:(double)arg1;
- (double)defaultMultiFieldFixedWidth;
- (void)setTextFieldTextAligment:(long long)arg1;
- (void)setTextFieldDescription:(id)arg1;
- (void)dealloc;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
@property(retain, nonatomic) id <NSCopying> parentID;
- (void)setTag:(long long)arg1;
- (void)setTextFieldAccessibilityIdentifier:(id)arg1;
- (void)setClearButtonMode:(long long)arg1;
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long presentationStyle;
@property(retain, nonatomic) QTMColorGroup *colorGroup;
- (void)setTextColor:(id)arg1 forSubViewsOf:(id)arg2;
- (void)applyUserInterfaceStyle:(unsigned long long)arg1;
@property(nonatomic) long long returnKeyType;
@property(retain, nonatomic) id <GOOTextFieldValidator> validator;
@property(retain, nonatomic) id <UITextFieldDelegate> textFieldDelegate;
@property(retain, nonatomic) GWATextFieldFormatter *formatter;
- (void)setKeyboardType:(long long)arg1;
- (void)imageTapped:(id)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
@property(copy, nonatomic) NSString *helperText;
- (void)validate;
- (_Bool)becomeFirstResponder;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

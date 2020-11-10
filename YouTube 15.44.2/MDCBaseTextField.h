//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

#import <Module_Framework/MDCTextControlTextField-Protocol.h>

@class MDCBaseTextFieldLayout, MDCTextControlAssistiveLabelView, NSMutableDictionary, NSNumber, NSString, UIFont, UILabel, UIView;
@protocol GWA2InputDataHandler, MDCBaseTextFieldDelegate, MDCTextControlStyle;

@interface MDCBaseTextField : UITextField <MDCTextControlTextField>
{
    id <MDCTextControlStyle> _containerStyle;
    unsigned long long _assistiveLabelDrawPriority;
    double _customAssistiveLabelDrawPriority;
    UILabel *_label;
    long long _labelBehavior;
    NSNumber *_leadingEdgePaddingOverride;
    NSNumber *_trailingEdgePaddingOverride;
    double _preferredContainerHeight;
    id <MDCBaseTextFieldDelegate> _baseTextFieldDelegate;
    double _containerRadius;
    MDCTextControlAssistiveLabelView *_assistiveLabelView;
    MDCBaseTextFieldLayout *_layout;
    long long _textControlState;
    unsigned long long _labelPosition;
    double _animationDuration;
    NSMutableDictionary *_colorViewModels;
    struct CGSize _cachedIntrinsicContentSize;
    struct CGRect _labelFrame;
}

+ (id)assistiveLabelKVOKeyPaths;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *colorViewModels; // @synthesize colorViewModels=_colorViewModels;
@property(nonatomic) struct CGSize cachedIntrinsicContentSize; // @synthesize cachedIntrinsicContentSize=_cachedIntrinsicContentSize;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) struct CGRect labelFrame; // @synthesize labelFrame=_labelFrame;
@property(nonatomic) unsigned long long labelPosition; // @synthesize labelPosition=_labelPosition;
@property(nonatomic) long long textControlState; // @synthesize textControlState=_textControlState;
@property(retain, nonatomic) MDCBaseTextFieldLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MDCTextControlAssistiveLabelView *assistiveLabelView; // @synthesize assistiveLabelView=_assistiveLabelView;
@property(nonatomic) double containerRadius; // @synthesize containerRadius=_containerRadius;
@property(nonatomic) __weak id <MDCBaseTextFieldDelegate> baseTextFieldDelegate; // @synthesize baseTextFieldDelegate=_baseTextFieldDelegate;
@property(nonatomic) double preferredContainerHeight; // @synthesize preferredContainerHeight=_preferredContainerHeight;
@property(retain, nonatomic) NSNumber *trailingEdgePaddingOverride; // @synthesize trailingEdgePaddingOverride=_trailingEdgePaddingOverride;
@property(retain, nonatomic) NSNumber *leadingEdgePaddingOverride; // @synthesize leadingEdgePaddingOverride=_leadingEdgePaddingOverride;
@property(nonatomic) long long labelBehavior; // @synthesize labelBehavior=_labelBehavior;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) double customAssistiveLabelDrawPriority; // @synthesize customAssistiveLabelDrawPriority=_customAssistiveLabelDrawPriority;
@property(nonatomic) unsigned long long assistiveLabelDrawPriority; // @synthesize assistiveLabelDrawPriority=_assistiveLabelDrawPriority;
@property(retain, nonatomic) id <MDCTextControlStyle> containerStyle; // @synthesize containerStyle=_containerStyle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservers;
- (void)observeAssistiveLabelKeyPaths;
- (void)deleteBackward;
- (id)trailingAssistiveLabelColorForState:(long long)arg1;
- (void)setTrailingAssistiveLabelColor:(id)arg1 forState:(long long)arg2;
- (id)leadingAssistiveLabelColorForState:(long long)arg1;
- (void)setLeadingAssistiveLabelColor:(id)arg1 forState:(long long)arg2;
- (id)textColorForState:(long long)arg1;
- (void)setTextColor:(id)arg1 forState:(long long)arg2;
- (id)floatingLabelColorForState:(long long)arg1;
- (void)setFloatingLabelColor:(id)arg1 forState:(long long)arg2;
- (id)normalLabelColorForState:(long long)arg1;
- (void)setNormalLabelColor:(id)arg1 forState:(long long)arg2;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityPath;
- (id)accessibilityLabel;
@property(readonly, nonatomic) unsigned long long sideViewAlignment;
- (id)textControlColorViewModelForState:(long long)arg1;
- (void)setTextControlColorViewModel:(id)arg1 forState:(long long)arg2;
- (void)applyColorViewModel:(id)arg1 withLabelPosition:(unsigned long long)arg2;
- (unsigned long long)determineCurrentLabelPosition;
- (_Bool)canLabelFloat;
- (void)animateLabel;
- (_Bool)shouldPlaceholderBeVisibleWithPlaceholder:(id)arg1 text:(id)arg2 labelPosition:(unsigned long long)arg3;
- (_Bool)shouldPlaceholderBeVisible;
- (long long)determineCurrentTextControlState;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)observeContentSizeCategoryNotifications;
- (void)setAdjustsFontForContentSizeCategory:(_Bool)arg1;
@property(readonly, nonatomic) UIFont *floatingFont;
@property(readonly, nonatomic) UIFont *normalFont;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)borderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) double numberOfLinesOfVisibleText;
@property(readonly, nonatomic) struct CGRect containerFrame;
- (void)mdc_setRightViewMode:(long long)arg1;
- (void)mdc_setLeftViewMode:(long long)arg1;
@property(nonatomic) long long leadingViewMode;
@property(nonatomic) long long trailingViewMode;
- (void)mdc_setRightView:(id)arg1;
- (void)mdc_setLeftView:(id)arg1;
@property(retain, nonatomic) UIView *leadingView;
@property(retain, nonatomic) UIView *trailingView;
@property(readonly, nonatomic) UILabel *trailingAssistiveLabel;
@property(readonly, nonatomic) UILabel *leadingAssistiveLabel;
- (void)setRightView:(id)arg1;
- (void)setLeftView:(id)arg1;
- (void)setRightViewMode:(long long)arg1;
- (void)setLeftViewMode:(long long)arg1;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)shouldLayoutForRTL;
- (_Bool)validateHeight;
- (_Bool)validateWidth;
- (struct CGSize)preferredSizeWithWidth:(double)arg1;
- (double)clearButtonSideLengthWithTextFieldSize:(struct CGSize)arg1;
- (double)clampedCustomAssistiveLabelDrawPriority:(double)arg1;
- (id)createVerticalPositioningReference;
- (id)createHorizontalPositioningReference;
- (id)calculateLayoutWithTextFieldSize:(struct CGSize)arg1;
- (struct CGRect)adjustTextAreaFrame:(struct CGRect)arg1 withParentClassTextAreaFrame:(struct CGRect)arg2;
- (struct CGRect)textRectFromLayout:(id)arg1 labelPosition:(unsigned long long)arg2;
- (void)postLayoutSubviews;
- (void)preLayoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setUpLabel;
- (void)setUpAssistiveLabels;
- (void)setUpColorViewModels;
- (void)initializeProperties;
- (void)dealloc;
- (void)commonMDCBaseTextFieldInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct _NSRange)rangeFromSelectedRange;
- (void)gwa_deleteBackward;
@property(retain, nonatomic, setter=gwa_setInputTransformationProvider:) id <GWA2InputDataHandler> gwa_inputTransformationProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


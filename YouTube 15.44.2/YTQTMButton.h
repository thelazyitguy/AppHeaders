//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTLightweightQTMButton.h>

#import <Module_Framework/YTCommonButton-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTRightNavigationButtonProtocol-Protocol.h>

@class NSArray, NSString, UIColor, UIView, YTIButtonRenderer;

@interface YTQTMButton : YTLightweightQTMButton <YTCommonButton, YTRightNavigationButtonProtocol, YTPageStyling>
{
    UIView *_hitTargetBorderView;
    _Bool _hasTypeStyle;
    long long _typeKind;
    long long _typeVariant;
    UIView *_progressView;
    UIColor *_desiredCustomTitleColor;
    double _maxLabelWidth;
    UIColor *_iconColor;
    _Bool _tintable;
    int _buttonStyle;
    _Bool _enablePageStyling;
    _Bool _refreshRendererAfterPageStyling;
    _Bool _buttonRaised;
    _Bool _sizeWithPaddingAndInsets;
    _Bool _enableCustomDisabledColors;
    double _buttonImageTitlePadding;
    long long _buttonLayoutStyle;
    double _horizontalContentPadding;
    double _maxButtonWidth;
    double _minHitTargetSize;
    double _verticalContentPadding;
    UIColor *_customTintColor;
    NSArray *_customTintableButtonStates;
    UIColor *_progressColor;
    double _progress;
    long long _pageStyle;
    YTIButtonRenderer *_buttonRenderer;
}

+ (id)disabledColorForButtonStyle:(int)arg1;
+ (id)textColorForButtonStyle:(int)arg1 pageStyle:(long long)arg2;
+ (id)backgroundColorForButtonStyle:(int)arg1 pageStyle:(long long)arg2;
+ (id)doneButton;
+ (id)doneButtonWithColor:(id)arg1;
+ (id)closeButtonWithColor:(id)arg1;
+ (id)closeButton;
+ (id)backButtonWithColor:(id)arg1;
+ (id)backButton;
+ (id)barButtonWithImage:(id)arg1 accessibilityLabel:(id)arg2 accessibilityIdentifier:(id)arg3;
+ (id)cellActionButton;
+ (id)buttonWithImage:(id)arg1 accessibilityLabel:(id)arg2 accessibilityIdentifier:(id)arg3;
+ (id)button;
+ (id)cancelButton;
+ (id)actionButtonWithColor:(id)arg1;
+ (id)actionButton;
+ (id)textButton;
+ (id)iconButton;
+ (id)textColorForHintButtonStyle:(int)arg1 pageStyle:(long long)arg2;
+ (id)backgroundColorForHintButtonStyle:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) YTIButtonRenderer *buttonRenderer; // @synthesize buttonRenderer=_buttonRenderer;
@property(readonly, nonatomic) long long pageStyle; // @synthesize pageStyle=_pageStyle;
@property(nonatomic) _Bool enableCustomDisabledColors; // @synthesize enableCustomDisabledColors=_enableCustomDisabledColors;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) _Bool sizeWithPaddingAndInsets; // @synthesize sizeWithPaddingAndInsets=_sizeWithPaddingAndInsets;
@property(nonatomic, getter=isButtonRaised) _Bool buttonRaised; // @synthesize buttonRaised=_buttonRaised;
@property(copy, nonatomic) NSArray *customTintableButtonStates; // @synthesize customTintableButtonStates=_customTintableButtonStates;
@property(retain, nonatomic) UIColor *customTintColor; // @synthesize customTintColor=_customTintColor;
@property(nonatomic) _Bool refreshRendererAfterPageStyling; // @synthesize refreshRendererAfterPageStyling=_refreshRendererAfterPageStyling;
@property(nonatomic) double verticalContentPadding; // @synthesize verticalContentPadding=_verticalContentPadding;
@property(nonatomic) double minHitTargetSize; // @synthesize minHitTargetSize=_minHitTargetSize;
@property(nonatomic) double maxButtonWidth; // @synthesize maxButtonWidth=_maxButtonWidth;
@property(nonatomic) double horizontalContentPadding; // @synthesize horizontalContentPadding=_horizontalContentPadding;
@property(nonatomic) _Bool enablePageStyling; // @synthesize enablePageStyling=_enablePageStyling;
@property(nonatomic) long long buttonLayoutStyle; // @synthesize buttonLayoutStyle=_buttonLayoutStyle;
@property(nonatomic) double buttonImageTitlePadding; // @synthesize buttonImageTitlePadding=_buttonImageTitlePadding;
- (void)setCustomDisabledColorsForStyle:(int)arg1;
- (void)setBorderForStyle:(int)arg1 pageStyle:(long long)arg2;
- (void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2;
- (void)setInnertubeButtonBasicColorPalette:(id)arg1;
- (void)setButtonRenderer:(id)arg1 iconColor:(id)arg2 tintable:(_Bool)arg3;
- (void)setButtonRenderer:(id)arg1 iconColor:(id)arg2;
- (void)updateStyles;
- (void)setInnerTubeButtonStyle:(int)arg1;
- (_Bool)isTransparentColor:(id)arg1;
- (_Bool)isDarkColor:(id)arg1;
- (void)resetRaisedEffect;
- (void)resetDisabledColors;
- (struct CGRect)hitTargetBounds;
- (id)pageStyleCompliantCustomTitleColor;
- (void)applyTypeStyle;
- (void)applyTintColors;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setShowsTouchWhenHighlighted:(_Bool)arg1;
- (void)setCustomTitleColor:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setTitleTypeKind:(long long)arg1 typeVariant:(long long)arg2;
- (void)setTitleTypeKind:(long long)arg1;
- (void)enableHitTargetDebugging;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)accessibilityFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHintButtonStyle:(int)arg1;
- (void)setHintButtonRenderer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Funny/UIContentSizeCategoryAdjusting-Protocol.h>

@class MDCFeatureHighlightLayer, NSString, UIButton, UIColor, UIFont, UILabel;

@interface MDCFeatureHighlightView : UIView <UIContentSizeCategoryAdjusting>
{
    _Bool _forceConcentricLayout;
    UIView *_highlightView;
    struct CGPoint _highlightPoint;
    double _innerRadius;
    struct CGPoint _outerCenter;
    double _outerRadius;
    double _outerRadiusScale;
    _Bool _isLayedOutAppearing;
    MDCFeatureHighlightLayer *_outerLayer;
    MDCFeatureHighlightLayer *_pulseLayer;
    MDCFeatureHighlightLayer *_innerLayer;
    MDCFeatureHighlightLayer *_displayMaskLayer;
    UIButton *_accessibilityView;
    _Bool _mdc_adjustsFontForContentSizeCategory;
    UIView *_dummyAnimatedView;
    _Bool _adjustsFontForContentSizeCategory;
    _Bool _mdc_legacyFontScaling;
    UIColor *_innerHighlightColor;
    UIColor *_outerHighlightColor;
    UIFont *_titleFont;
    UIColor *_titleColor;
    UIFont *_bodyFont;
    UIColor *_bodyColor;
    CDUnknownBlockType _traitCollectionDidChangeBlock;
    UIView *_displayedView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    CDUnknownBlockType _interactionBlock;
    struct CGPoint _highlightCenter;
}

+ (id)defaultTitleFont;
+ (id)defaultBodyFont;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType interactionBlock; // @synthesize interactionBlock=_interactionBlock;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *displayedView; // @synthesize displayedView=_displayedView;
@property(nonatomic) struct CGPoint highlightPoint; // @synthesize highlightPoint=_highlightPoint;
@property(readonly, nonatomic) struct CGPoint highlightCenter; // @synthesize highlightCenter=_highlightCenter;
@property(copy, nonatomic) CDUnknownBlockType traitCollectionDidChangeBlock; // @synthesize traitCollectionDidChangeBlock=_traitCollectionDidChangeBlock;
@property(nonatomic, setter=mdc_setLegacyFontScaling:) _Bool mdc_legacyFontScaling; // @synthesize mdc_legacyFontScaling=_mdc_legacyFontScaling;
@property(retain, nonatomic) UIColor *bodyColor; // @synthesize bodyColor=_bodyColor;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *outerHighlightColor; // @synthesize outerHighlightColor=_outerHighlightColor;
@property(retain, nonatomic) UIColor *innerHighlightColor; // @synthesize innerHighlightColor=_innerHighlightColor;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(readonly, nonatomic) double highlightRadius; // @synthesize highlightRadius=_outerRadius;
- (id)accessibilityHint;
- (void)setAccessibilityHint:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setFont:(id)arg1 forAttributedString:(id)arg2;
- (void)contentSizeCategoryDidChange:(id)arg1;
@property(nonatomic, setter=mdc_setAdjustsFontForContentSizeCategory:) _Bool mdc_adjustsFontForContentSizeCategory;
@property(readonly, nonatomic) UIButton *accessibilityDismissView;
- (void)updateOuterHighlight;
- (void)animateRejected:(double)arg1;
- (void)animateAccepted:(double)arg1;
- (void)animatePulse;
- (void)animateDiscover:(double)arg1;
- (void)animateDismissalCancelled;
- (void)layoutInProgressDismissal:(double)arg1;
- (void)didGestureDismiss:(id)arg1;
- (void)didTapView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)accessibilityElements;
- (void)layoutDisappearing;
- (void)layoutAppearing;
- (void)updateBodyFont;
- (void)updateTitleFont;
- (id)MDCFeatureHighlightDefaultInnerHighlightColor;
- (id)MDCFeatureHighlightDefaultOuterHighlightColor;
- (void)applyMDCFeatureHighlightViewDefaults;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/TOKOverlayBase.h>

@class NSDictionary, NSShadow, NSString, UIColor;
@protocol TOKTextOverlayBackgroundRenderer;

@interface TOKTextOverlay : TOKOverlayBase
{
    NSDictionary *_styleAttributes;
    _Bool _attributesDirty;
    NSString *_text;
    long long _textStyle;
    long long _textAlignment;
    double _pointSize;
    double _kerning;
    double _lineHeightMultiplier;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    UIColor *_backgroundColor;
    double _lineFragmentPadding;
    NSShadow *_textShadow;
    id <TOKTextOverlayBackgroundRenderer> _textBackgroundRenderer;
    struct CGSize _textContainerSize;
    struct UIEdgeInsets _textHighlightPadding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TOKTextOverlayBackgroundRenderer> textBackgroundRenderer; // @synthesize textBackgroundRenderer=_textBackgroundRenderer;
@property(retain, nonatomic) NSShadow *textShadow; // @synthesize textShadow=_textShadow;
@property(nonatomic) struct UIEdgeInsets textHighlightPadding; // @synthesize textHighlightPadding=_textHighlightPadding;
@property(nonatomic) double lineFragmentPadding; // @synthesize lineFragmentPadding=_lineFragmentPadding;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double lineHeightMultiplier; // @synthesize lineHeightMultiplier=_lineHeightMultiplier;
@property(nonatomic) double kerning; // @synthesize kerning=_kerning;
@property(nonatomic) double pointSize; // @synthesize pointSize=_pointSize;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) struct CGSize textContainerSize; // @synthesize textContainerSize=_textContainerSize;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)formatAttributedString:(id)arg1 range:(struct _NSRange)arg2;
- (id)attributes;
- (id)computeAttributesForCurrentState;
- (void)regenerateAttributes;
- (void)setNeedsAttributeRegeneration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (double)computedBaselineAdjustment;

@end


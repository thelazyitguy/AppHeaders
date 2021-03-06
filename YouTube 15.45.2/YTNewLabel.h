//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import <Module_Framework/YTAttributedLabel-Protocol.h>

@class NSArray, NSAttributedString, NSLayoutManager, NSMutableDictionary, NSString, NSTextContainer, NSTextStorage, NSValue, YTIFormattedString;
@protocol YTAttributedLabelDelegate;

@interface YTNewLabel : UILabel <YTAttributedLabel>
{
    YTIFormattedString *_formattedString;
    double _lineHeight;
    long long _pageStyle;
    long long _typeKind;
    long long _typeVariant;
    NSValue *_selectedRange;
    NSMutableDictionary *_rangeToEndpointMap;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    NSArray *_accessibleElements;
    id <YTAttributedLabelDelegate> _formattedStringLabelDelegate;
}

+ (id)fontForRun:(id)arg1 withTypeKind:(long long)arg2;
+ (id)fontForTypeKind:(long long)arg1 bold:(_Bool)arg2 italics:(_Bool)arg3;
+ (id)fontNameFromFontFace:(int)arg1;
+ (id)textColorForRun:(id)arg1 withDefaultColor:(id)arg2;
+ (id)deEmphasizedColorForTextColor:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTAttributedLabelDelegate> formattedStringLabelDelegate; // @synthesize formattedStringLabelDelegate=_formattedStringLabelDelegate;
- (double)effectiveLineHeight;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (_Bool)isAccessibilityElement;
- (id)accessibleElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)updateTextContainerAndLayoutManger;
- (void)setSelectedRange:(id)arg1;
- (id)rangeWithEndpointAtPoint:(struct CGPoint)arg1;
- (void)addNavigationEndpoint:(id)arg1 atRange:(struct _NSRange)arg2;
- (_Bool)isRunTypography:(id)arg1 equalToOtherRun:(id)arg2;
- (_Bool)isAttributedStringRequiredForRun:(id)arg1;
- (_Bool)isAttributedStringRequiredForFormattedString:(id)arg1;
- (void)regenerateString;
- (id)createAttributedString;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setText:(id)arg1;
- (void)forceRTLTextAlignment;
- (void)setTypeKind:(long long)arg1 typeVariant:(long long)arg2;
- (void)setTypeKind:(long long)arg1;
- (void)setLineHeight:(double)arg1;
- (void)setFormattedString:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSAttributedString *attributedText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long numberOfLines;
@property(nonatomic) double preferredMaxLayoutWidth;
@property(readonly) Class superclass;
@property(nonatomic) long long textAlignment;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCTextControlStyleUnderlined.h"

#import "CAAnimationDelegate-Protocol.h"
#import "MDCTextControlStyle-Protocol.h"

@class CAShapeLayer, NSMutableDictionary, NSString;

@interface MDCTextControlStyleFilled : MDCTextControlStyleUnderlined <CAAnimationDelegate, MDCTextControlStyle>
{
    double _topCornerRadius;
    CAShapeLayer *_filledSublayer;
    NSMutableDictionary *_filledBackgroundColors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *filledBackgroundColors; // @synthesize filledBackgroundColors=_filledBackgroundColors;
@property(retain, nonatomic) CAShapeLayer *filledSublayer; // @synthesize filledSublayer=_filledSublayer;
@property(nonatomic) double topCornerRadius; // @synthesize topCornerRadius=_topCornerRadius;
- (id)filledSublayerPathWithTextFieldBounds:(struct CGRect)arg1 containerHeight:(double)arg2 topCornerRadius:(double)arg3;
- (void)applyFilledStyleToView:(id)arg1 state:(long long)arg2 containerFrame:(struct CGRect)arg3 animationDuration:(double)arg4;
- (id)horizontalPositioningReference;
- (id)positioningReferenceWithFloatingFontLineHeight:(double)arg1 normalFontLineHeight:(double)arg2 textRowHeight:(double)arg3 numberOfTextRows:(double)arg4 density:(double)arg5 preferredContainerHeight:(double)arg6 isMultilineTextControl:(_Bool)arg7;
- (void)removeStyleFrom:(id)arg1;
- (void)applyStyleToTextControl:(id)arg1 animationDuration:(double)arg2;
- (void)setFilledBackgroundColor:(id)arg1 forState:(long long)arg2;
- (id)filledBackgroundColorForState:(long long)arg1;
- (void)setUpFilledBackgroundSublayer;
- (void)setUpFilledBackgroundColors;
- (void)commonMDCTextControlStyleFilledInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

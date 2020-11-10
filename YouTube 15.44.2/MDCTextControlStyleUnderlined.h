//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/CAAnimationDelegate-Protocol.h>
#import <Module_Framework/MDCTextControlStyle-Protocol.h>

@class CAShapeLayer, NSMutableDictionary, NSString;

@interface MDCTextControlStyleUnderlined : NSObject <CAAnimationDelegate, MDCTextControlStyle>
{
    _Bool _isEditing;
    double _normalUnderlineThickness;
    double _editingUnderlineThickness;
    CAShapeLayer *_normalUnderlineLayer;
    CAShapeLayer *_editingUnderlineLayer;
    NSMutableDictionary *_underlineColors;
    double _containerHeight;
    double _animationDuration;
    struct CGRect _mostRecentBounds;
}

+ (id)editingUnderlineThicknessKey;
+ (id)normalUnderlineThicknessKey;
+ (id)editingUnderlineGrowKey;
+ (id)editingUnderlineShrinkKey;
+ (id)normalUnderlineGrowKey;
+ (id)normalUnderlineShrinkKey;
- (void).cxx_destruct;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double containerHeight; // @synthesize containerHeight=_containerHeight;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) struct CGRect mostRecentBounds; // @synthesize mostRecentBounds=_mostRecentBounds;
@property(retain, nonatomic) NSMutableDictionary *underlineColors; // @synthesize underlineColors=_underlineColors;
@property(retain, nonatomic) CAShapeLayer *editingUnderlineLayer; // @synthesize editingUnderlineLayer=_editingUnderlineLayer;
@property(retain, nonatomic) CAShapeLayer *normalUnderlineLayer; // @synthesize normalUnderlineLayer=_normalUnderlineLayer;
@property(nonatomic) double editingUnderlineThickness; // @synthesize editingUnderlineThickness=_editingUnderlineThickness;
@property(nonatomic) double normalUnderlineThickness; // @synthesize normalUnderlineThickness=_normalUnderlineThickness;
- (id)underlinePathWithViewBounds:(struct CGRect)arg1 containerHeight:(double)arg2 underlineThickness:(double)arg3 underlineWidth:(double)arg4;
- (id)targetNormalUnderlineBezier;
- (id)targetEditingUnderlineBezier;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (id)basicAnimationWithKeyPath:(id)arg1;
- (id)pathAnimationTo:(id)arg1;
- (void)applyUnderlineStyleToView:(id)arg1 state:(long long)arg2 containerFrame:(struct CGRect)arg3 animationDuration:(double)arg4;
- (id)horizontalPositioningReference;
- (id)floatingFontWithNormalFont:(id)arg1;
- (id)positioningReferenceWithFloatingFontLineHeight:(double)arg1 normalFontLineHeight:(double)arg2 textRowHeight:(double)arg3 numberOfTextRows:(double)arg4 density:(double)arg5 preferredContainerHeight:(double)arg6 isMultilineTextControl:(_Bool)arg7;
- (void)removeStyleFrom:(id)arg1;
- (void)applyStyleToTextControl:(id)arg1 animationDuration:(double)arg2;
- (void)setNormalUnderlineThickness:(double)arg1 animated:(_Bool)arg2;
- (void)setEditingUnderlineThickness:(double)arg1 animated:(_Bool)arg2;
- (void)setUnderlineColor:(id)arg1 forState:(long long)arg2;
- (id)underlineColorForState:(long long)arg1;
- (void)setUpUnderlineSublayers;
- (void)setUpUnderlineColors;
- (void)commonMDCTextControlStyleUnderlinedInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

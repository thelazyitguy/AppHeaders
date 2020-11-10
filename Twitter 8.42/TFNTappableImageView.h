//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <TFNUI/TFNTappableView-Protocol.h>

@class NSString, TFNLongPressGestureRecognizer, TFNTapGestureRecognizer, TFNTappableViewHelper, TFNTouchDownGestureRecognizer;

@interface TFNTappableImageView : UIImageView <TFNTappableView>
{
    TFNTappableViewHelper *_helper;
    _Bool _pressed;
    struct UIEdgeInsets _touchInsets;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(nonatomic, getter=isGeneratingGestureRecognizers) _Bool generatingGestureRecognizers;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
@property(readonly, nonatomic) TFNTouchDownGestureRecognizer *touchDownGestureRecognizer;
@property(readonly, nonatomic) TFNLongPressGestureRecognizer *longPressGestureRecognizer;
@property(readonly, nonatomic) TFNTapGestureRecognizer *doubleTapGestureRecognizer;
@property(readonly, nonatomic) TFNTapGestureRecognizer *tapGestureRecognizer;
- (void)setPressedStateDidChangeTarget:(id)arg1 action:(SEL)arg2;
- (void)performLongPressAction;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)performDoubleTapAction;
- (void)setDoubleTapTarget:(id)arg1 action:(SEL)arg2;
- (void)performTapAction;
- (void)setTapTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


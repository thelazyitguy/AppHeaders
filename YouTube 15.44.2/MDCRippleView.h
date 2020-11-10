//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/CALayerDelegate-Protocol.h>
#import <Module_Framework/MDCRippleLayerDelegate-Protocol.h>

@class CAShapeLayer, MDCRippleLayer, NSString, UIColor;
@protocol MDCRippleViewDelegate;

@interface MDCRippleView : UIView <CALayerDelegate, MDCRippleLayerDelegate>
{
    _Bool _usesSuperviewShadowLayerAsMask;
    MDCRippleLayer *_activeRippleLayer;
    id <MDCRippleViewDelegate> _rippleViewDelegate;
    long long _rippleStyle;
    UIColor *_rippleColor;
    double _maximumRadius;
    UIColor *_activeRippleColor;
    CDUnknownBlockType _traitCollectionDidChangeBlock;
    CAShapeLayer *_maskLayer;
}

+ (id)injectedRippleViewForView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(copy, nonatomic) CDUnknownBlockType traitCollectionDidChangeBlock; // @synthesize traitCollectionDidChangeBlock=_traitCollectionDidChangeBlock;
@property(nonatomic) _Bool usesSuperviewShadowLayerAsMask; // @synthesize usesSuperviewShadowLayerAsMask=_usesSuperviewShadowLayerAsMask;
@property(retain, nonatomic) UIColor *activeRippleColor; // @synthesize activeRippleColor=_activeRippleColor;
@property(nonatomic) double maximumRadius; // @synthesize maximumRadius=_maximumRadius;
@property(retain, nonatomic) UIColor *rippleColor; // @synthesize rippleColor=_rippleColor;
@property(nonatomic) long long rippleStyle; // @synthesize rippleStyle=_rippleStyle;
@property(nonatomic) __weak id <MDCRippleViewDelegate> rippleViewDelegate; // @synthesize rippleViewDelegate=_rippleViewDelegate;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)rippleLayerTouchUpAnimationDidEnd:(id)arg1;
- (void)rippleLayerTouchUpAnimationDidBegin:(id)arg1;
- (void)rippleLayerTouchDownAnimationDidEnd:(id)arg1;
- (void)rippleLayerTouchDownAnimationDidBegin:(id)arg1;
- (void)fadeOutRippleAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fadeInRippleAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginRippleTouchUpAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginRippleTouchDownAtPoint:(struct CGPoint)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setColorForRippleLayer:(id)arg1;
@property(retain, nonatomic) MDCRippleLayer *activeRippleLayer; // @synthesize activeRippleLayer=_activeRippleLayer;
- (void)cancelAllRipplesAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateRippleStyle;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)commonMDCRippleViewInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


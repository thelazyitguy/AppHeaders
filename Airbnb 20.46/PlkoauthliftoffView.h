//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABasicAnimation, CAKeyframeAnimation, CALayer, CAShapeLayer;

@interface PlkoauthliftoffView : UIView
{
    CAShapeLayer *_dotLayer3;
    CAShapeLayer *_dotLayer2;
    CAShapeLayer *_dotLayer1;
    CAShapeLayer *_dotLayer;
    CALayer *_badgeLayer;
    CAShapeLayer *_arrowLayer;
    CAKeyframeAnimation *_hiddenAnimation;
    CAKeyframeAnimation *_hiddenAnimation1;
    CAKeyframeAnimation *_hiddenAnimation2;
    CAKeyframeAnimation *_hiddenAnimation3;
    CABasicAnimation *_opacityAnimation;
    CABasicAnimation *_transformScaleXyAnimation;
    CABasicAnimation *_moveOutXAnimation;
    CABasicAnimation *_moveOutYAnimation;
    CABasicAnimation *_moveInXAnimation;
    CABasicAnimation *_moveInYAnimation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CABasicAnimation *moveInYAnimation; // @synthesize moveInYAnimation=_moveInYAnimation;
@property(retain, nonatomic) CABasicAnimation *moveInXAnimation; // @synthesize moveInXAnimation=_moveInXAnimation;
@property(retain, nonatomic) CABasicAnimation *moveOutYAnimation; // @synthesize moveOutYAnimation=_moveOutYAnimation;
@property(retain, nonatomic) CABasicAnimation *moveOutXAnimation; // @synthesize moveOutXAnimation=_moveOutXAnimation;
@property(retain, nonatomic) CABasicAnimation *transformScaleXyAnimation; // @synthesize transformScaleXyAnimation=_transformScaleXyAnimation;
@property(retain, nonatomic) CABasicAnimation *opacityAnimation; // @synthesize opacityAnimation=_opacityAnimation;
@property(retain, nonatomic) CAKeyframeAnimation *hiddenAnimation3; // @synthesize hiddenAnimation3=_hiddenAnimation3;
@property(retain, nonatomic) CAKeyframeAnimation *hiddenAnimation2; // @synthesize hiddenAnimation2=_hiddenAnimation2;
@property(retain, nonatomic) CAKeyframeAnimation *hiddenAnimation1; // @synthesize hiddenAnimation1=_hiddenAnimation1;
@property(retain, nonatomic) CAKeyframeAnimation *hiddenAnimation; // @synthesize hiddenAnimation=_hiddenAnimation;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(retain, nonatomic) CALayer *badgeLayer; // @synthesize badgeLayer=_badgeLayer;
@property(retain, nonatomic) CAShapeLayer *dotLayer; // @synthesize dotLayer=_dotLayer;
@property(retain, nonatomic) CAShapeLayer *dotLayer1; // @synthesize dotLayer1=_dotLayer1;
@property(retain, nonatomic) CAShapeLayer *dotLayer2; // @synthesize dotLayer2=_dotLayer2;
@property(retain, nonatomic) CAShapeLayer *dotLayer3; // @synthesize dotLayer3=_dotLayer3;
- (void)noEventPlayAnimationsAction:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setupLayers;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

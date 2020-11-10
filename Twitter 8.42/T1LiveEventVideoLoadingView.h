//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAAnimation, CALayer, CAShapeLayer, TFNLegacyButton;
@protocol T1LiveEventVideoLoadingViewDelegate;

@interface T1LiveEventVideoLoadingView : UIView
{
    _Bool _showsPlayButton;
    double _progress;
    id <T1LiveEventVideoLoadingViewDelegate> _delegate;
    CALayer *_containerLayer;
    CAShapeLayer *_maskLayer;
    CAShapeLayer *_backgroundLayer;
    CAShapeLayer *_progressLayer;
    TFNLegacyButton *_playButton;
    CAAnimation *_progressAnimation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAAnimation *progressAnimation; // @synthesize progressAnimation=_progressAnimation;
@property(retain, nonatomic) TFNLegacyButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CALayer *containerLayer; // @synthesize containerLayer=_containerLayer;
@property(nonatomic) __weak id <T1LiveEventVideoLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsPlayButton; // @synthesize showsPlayButton=_showsPlayButton;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (struct CGSize)_t1_buttonImageSize;
- (void)_t1_playButtonTapped:(id)arg1;
- (void)_t1_updatePlayButton;
- (double)_t1_radius;
- (struct CGPoint)_t1_arcCenterPoint;
- (const struct CGPath *)_t1_circlePath;
- (void)_t1_updateCirclePaths;
- (void)_t1_setupCircleLayers;
- (void)resumeAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)pauseAnimation;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithDefaultSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


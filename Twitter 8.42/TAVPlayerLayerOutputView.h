//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TwitterAVCore/TAVPlayerOutputView-Protocol.h>

@class AVPlayerLayer, NSLayoutConstraint, TAVKVOProxy, UILayoutGuide;
@protocol TAVCaptionSource, TAVPixelBufferSource;

@interface TAVPlayerLayerOutputView : UIView <TAVPlayerOutputView>
{
    id <TAVPixelBufferSource> _pixelBufferSource;
    long long _outputViewVideoGravity;
    id <TAVCaptionSource> _captionSource;
    UILayoutGuide *_videoLayoutGuide;
    AVPlayerLayer *_playerLayer;
    TAVKVOProxy *_kvoProxy;
    double _rotation;
    NSLayoutConstraint *_videoLayoutWidthConstraint;
    NSLayoutConstraint *_videoLayoutHeightConstraint;
}

+ (struct CATransform3D)private_transformForContentRect:(struct CGRect)arg1 inHostRect:(struct CGRect)arg2 gravity:(long long)arg3;
+ (struct CATransform3D)private_transformForContentRect:(struct CGRect)arg1 inHostRect:(struct CGRect)arg2 rotation:(double)arg3 gravity:(long long)arg4;
+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *videoLayoutHeightConstraint; // @synthesize videoLayoutHeightConstraint=_videoLayoutHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *videoLayoutWidthConstraint; // @synthesize videoLayoutWidthConstraint=_videoLayoutWidthConstraint;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(retain, nonatomic) TAVKVOProxy *kvoProxy; // @synthesize kvoProxy=_kvoProxy;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(readonly, nonatomic) UILayoutGuide *videoLayoutGuide; // @synthesize videoLayoutGuide=_videoLayoutGuide;
@property(retain, nonatomic) id <TAVCaptionSource> captionSource; // @synthesize captionSource=_captionSource;
@property(nonatomic) long long outputViewVideoGravity; // @synthesize outputViewVideoGravity=_outputViewVideoGravity;
@property(retain, nonatomic) id <TAVPixelBufferSource> pixelBufferSource; // @synthesize pixelBufferSource=_pixelBufferSource;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateGeometry;
@property(readonly, nonatomic) struct CGRect videoFrame;
@property(readonly, nonatomic) _Bool isReadyForDisplay;
- (void)rotateVideoWithRotation:(double)arg1;
- (_Bool)accessibilityIgnoresInvertColors;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


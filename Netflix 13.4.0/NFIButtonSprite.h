//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CALayer, NFITexture, NSString, UIFont, UILabel;

@interface NFIButtonSprite : UIControl
{
    _Bool _highLighted;
    _Bool _lockImageToBounds;
    CDUnknownBlockType _animationStatusBlock;
    NFITexture *_selectedTexture;
    CALayer *_imageLayer;
    NSString *_customTag;
    UILabel *_label;
    UIFont *_font;
    CALayer *_overlayLayer;
    NFITexture *_texture;
    double _labelYOffset;
    struct CGSize _overlaySize;
}

+ (id)buttonWithTexture:(id)arg1 animationStatusBlock:(CDUnknownBlockType)arg2;
+ (id)buttonWithTexture:(id)arg1;
+ (id)buttonWithCGImage:(struct CGImage *)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool lockImageToBounds; // @synthesize lockImageToBounds=_lockImageToBounds;
@property(nonatomic) double labelYOffset; // @synthesize labelYOffset=_labelYOffset;
@property(retain, nonatomic) NFITexture *texture; // @synthesize texture=_texture;
@property struct CGSize overlaySize; // @synthesize overlaySize=_overlaySize;
@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(nonatomic) _Bool highLighted; // @synthesize highLighted=_highLighted;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *customTag; // @synthesize customTag=_customTag;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) NFITexture *selectedTexture; // @synthesize selectedTexture=_selectedTexture;
@property(copy, nonatomic) CDUnknownBlockType animationStatusBlock; // @synthesize animationStatusBlock=_animationStatusBlock;
- (void)touchUpInsideHandler:(id)arg1;
- (void)touchOutsideHandler:(id)arg1;
- (void)touchHandler:(id)arg1;
- (id)badgeFont;
- (void)setText:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)setOverlay:(id)arg1 size:(struct CGSize)arg2;
- (void)setLabelNumberOfLines:(double)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setImage:(struct CGImage *)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


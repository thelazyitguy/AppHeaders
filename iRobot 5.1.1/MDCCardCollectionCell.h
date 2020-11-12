//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MDCInkView, MDCShapedShadowLayer, NSMutableDictionary, UIColor, UIImageView;
@protocol MDCShapeGenerating;

@interface MDCCardCollectionCell : UICollectionViewCell
{
    NSMutableDictionary *_shadowElevations;
    NSMutableDictionary *_shadowColors;
    NSMutableDictionary *_borderWidths;
    NSMutableDictionary *_borderColors;
    NSMutableDictionary *_images;
    NSMutableDictionary *_horizontalImageAlignments;
    NSMutableDictionary *_verticalImageAlignments;
    NSMutableDictionary *_imageTintColors;
    UIColor *_backgroundColor;
    struct CGPoint _lastTouch;
    _Bool _selectable;
    _Bool _interactable;
    MDCInkView *_inkView;
    long long _state;
    UIImageView *_selectedImageView;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic, getter=isInteractable) _Bool interactable; // @synthesize interactable=_interactable;
@property(readonly, nonatomic) MDCInkView *inkView; // @synthesize inkView=_inkView;
@property(nonatomic, getter=isSelectable) _Bool selectable; // @synthesize selectable=_selectable;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateBackgroundColor;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)updateInkForShape;
@property(retain, nonatomic) id <MDCShapeGenerating> shapeGenerator;
- (void)tintColorDidChange;
- (id)imageTintColorForState:(long long)arg1;
- (void)updateImageTintColor;
- (void)setImageTintColor:(id)arg1 forState:(long long)arg2;
- (void)updateImageAlignment;
- (long long)verticalImageAlignmentForState:(long long)arg1;
- (void)setVerticalImageAlignment:(long long)arg1 forState:(long long)arg2;
- (long long)horizontalImageAlignmentForState:(long long)arg1;
- (void)setHorizontalImageAlignment:(long long)arg1 forState:(long long)arg2;
- (id)imageForState:(long long)arg1;
- (void)updateImage;
- (void)setImage:(id)arg1 forState:(long long)arg2;
- (id)shadowColorForState:(long long)arg1;
- (void)updateShadowColor;
- (void)setShadowColor:(id)arg1 forState:(long long)arg2;
- (id)borderColorForState:(long long)arg1;
- (void)updateBorderColor;
- (void)setBorderColor:(id)arg1 forState:(long long)arg2;
- (double)borderWidthForState:(long long)arg1;
- (void)updateBorderWidth;
- (void)setBorderWidth:(double)arg1 forState:(long long)arg2;
- (void)updateShadowElevation;
- (void)setShadowElevation:(double)arg1 forState:(long long)arg2;
- (double)shadowElevationForState:(long long)arg1;
- (id)boundingPath;
- (void)setSelected:(_Bool)arg1;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) double cornerRadius;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)arg1;
- (void)commonMDCCardCollectionCellInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) MDCShapedShadowLayer *layer; // @dynamic layer;

@end

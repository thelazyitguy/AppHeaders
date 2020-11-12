//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, NSLayoutConstraint, UIImageView;

@interface DDImageCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    NSLayoutConstraint *_imageViewLeftSpacingConstraint;
    NSLayoutConstraint *_imageViewTopSpacingConstraint;
    NSLayoutConstraint *_imageViewRightSpacingConstraint;
    NSLayoutConstraint *_imageViewBottomSpacingConstraint;
    CALayer *_tintAdjustmentLayer;
}

+ (id)nib;
- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *tintAdjustmentLayer; // @synthesize tintAdjustmentLayer=_tintAdjustmentLayer;
@property(nonatomic) __weak NSLayoutConstraint *imageViewBottomSpacingConstraint; // @synthesize imageViewBottomSpacingConstraint=_imageViewBottomSpacingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *imageViewRightSpacingConstraint; // @synthesize imageViewRightSpacingConstraint=_imageViewRightSpacingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *imageViewTopSpacingConstraint; // @synthesize imageViewTopSpacingConstraint=_imageViewTopSpacingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *imageViewLeftSpacingConstraint; // @synthesize imageViewLeftSpacingConstraint=_imageViewLeftSpacingConstraint;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)__commonInit;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

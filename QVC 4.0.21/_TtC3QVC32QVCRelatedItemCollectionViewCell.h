//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface _TtC3QVC32QVCRelatedItemCollectionViewCell : UICollectionViewCell
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: indexInCollectionView
    // Error parsing type: , name: product
    // Error parsing type: , name: spinner
    // Error parsing type: , name: productImageView
    // Error parsing type: , name: productShortDescriptionLabel
    // Error parsing type: , name: pricingLabel
    // Error parsing type: , name: $__lazy_storage_$_tapGesture
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)userTappedWithSender:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;
@property(nonatomic, retain) UILabel *pricingLabel; // @synthesize pricingLabel;
@property(nonatomic) __weak UILabel *productShortDescriptionLabel; // @synthesize productShortDescriptionLabel;
@property(nonatomic) __weak UIImageView *productImageView; // @synthesize productImageView;
@property(nonatomic, retain) UIActivityIndicatorView *spinner; // @synthesize spinner;

@end


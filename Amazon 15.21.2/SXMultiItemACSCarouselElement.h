//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, SXCachedImageView, UILabel;

@interface SXMultiItemACSCarouselElement : UICollectionViewCell
{
    SXCachedImageView *_imageView;
    NSString *_itemLabel;
    UILabel *_label;
}

+ (id)sizingCell;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *itemLabel; // @synthesize itemLabel=_itemLabel;
@property(retain, nonatomic) SXCachedImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (struct CGSize)sizeAndLayoutToFit:(struct CGSize)arg1 setFrames:(_Bool)arg2;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateModel:(id)arg1;
- (void)hideSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

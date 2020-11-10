//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>

@class CALayer, NSString, YTColorPalette, YTFormattedStringLabel, YTImageView;
@protocol YTResponder;

@interface YTBackstageImageAssetCell : YTCollectionViewCell <YTCollectionViewCellProtocol>
{
    id _entry;
    CALayer *_thumbnailViewTintLayer;
    CALayer *_thumbnailViewBorderLayer;
    CALayer *_thumbnailViewShadowTintLayer;
    id <YTResponder> _parentResponder;
    YTImageView *_thumbnailView;
    YTFormattedStringLabel *_selectionIndexLabel;
    YTColorPalette *_darkPalette;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) YTColorPalette *darkPalette; // @synthesize darkPalette=_darkPalette;
@property(retain, nonatomic) YTFormattedStringLabel *selectionIndexLabel; // @synthesize selectionIndexLabel=_selectionIndexLabel;
@property(retain, nonatomic) YTImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)setEntry:(id)arg1;
- (id)entry;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateThumbnailView:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

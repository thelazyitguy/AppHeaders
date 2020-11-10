//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>

@class NSString, YTColorPalette, YTFormattedStringLabel, YTISelectImageCellRenderer, YTImageView;
@protocol YTCreatePostSelectImageCellDelegate, YTResponder;

@interface YTCreatePostSelectImageCell : YTCollectionViewCell <YTPageStyling, YTCollectionViewCellProtocol>
{
    YTISelectImageCellRenderer *_entry;
    long long _pageStyle;
    id <YTResponder> _parentResponder;
    id <YTCreatePostSelectImageCellDelegate> _delegate;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_subtitleLabel;
    YTImageView *_imageView;
    YTColorPalette *_darkPalette;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) YTColorPalette *darkPalette; // @synthesize darkPalette=_darkPalette;
@property(retain, nonatomic) YTImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) YTFormattedStringLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <YTCreatePostSelectImageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)setEntry:(id)arg1;
- (id)entry;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


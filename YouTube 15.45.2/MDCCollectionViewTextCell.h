//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MDCCollectionViewCell.h>

@class UIImageView, UILabel, UIView;

@interface MDCCollectionViewTextCell : MDCCollectionViewCell
{
    UIView *_contentWrapper;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (struct CGSize)frameSizeForLabel:(id)arg1;
- (void)applyMetrics;
- (struct CGRect)contentWrapperFrame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)commonMDCCollectionViewTextCellInit;
- (void)resetMDCCollectionViewTextCellLabelProperties;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


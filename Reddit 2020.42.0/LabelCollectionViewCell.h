//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

@class BaseImageView, BaseLabel;

@interface LabelCollectionViewCell : BaseCollectionViewCell
{
    BaseLabel *_label;
    BaseImageView *_accessoryImageView;
}

+ (double)calculatedHeightForWidth:(double)arg1 withAttributedString:(id)arg2;
+ (double)calculatedHeightForWidth:(double)arg1 withData:(id)arg2 andFont:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) BaseImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(retain, nonatomic) BaseLabel *label; // @synthesize label=_label;
- (void)layoutSubviews;
- (void)setCustomImageAccessory:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


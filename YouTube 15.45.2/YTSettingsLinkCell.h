//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, YTLabel;

@interface YTSettingsLinkCell : UICollectionViewCell
{
    YTLabel *_titleLabel;
    UIImageView *_rightArrowImageView;
    _Bool _isStyleVisiblyDisabled;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setEnabled:(_Bool)arg1;
- (void)setStyleVisiblyDisabled;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


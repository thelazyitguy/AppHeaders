//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTPageStyling-Protocol.h>

@class NSAttributedString, NSString, UIImage, UIImageView, UILabel;

@interface YTLabeledImageView : UIView <YTPageStyling>
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    long long _typeKind;
    long long _typeVariant;
    long long _pageStyle;
    _Bool _applyTypeVariantColor;
}

- (void).cxx_destruct;
- (void)applyTypeStyle;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (unsigned long long)accessibilityTraits;
- (void)setAccessibilityLabel:(id)arg1;
- (id)accessibilityLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setTitleTypeKind:(long long)arg1 typeVariant:(long long)arg2;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSAttributedString *attributedTitle;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


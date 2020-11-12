//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface TFNBadgeAccessory : UIView
{
    UIImageView *_badgeView;
    UILabel *_badgeLabel;
    struct CGSize _badgeTextSize;
}

+ (struct CGSize)_badgeTextSizeForText:(id)arg1 font:(id)arg2;
+ (double)badgeHeight;
+ (double)estimatedBadgeWidthForText:(id)arg1;
+ (double)badgeWidthForText:(id)arg1;
- (void).cxx_destruct;
- (id)_badgeTemplateImage;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *badgeColor;
@property(retain, nonatomic) UIColor *textColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface GDKSuggestionLeadingIconView : UIView
{
    UIView *_backgroundView;
    UIImageView *_imageView;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)makeConstraints;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


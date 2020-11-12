//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDCInkTouchController, NSLayoutConstraint, UIImageView, UILabel;

@interface PSTDetailsButton : UIView
{
    NSLayoutConstraint *_imageSize;
    NSLayoutConstraint *_textLeftMargin;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    MDCInkTouchController *_inkTouchController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MDCInkTouchController *inkTouchController; // @synthesize inkTouchController=_inkTouchController;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak NSLayoutConstraint *textLeftMargin; // @synthesize textLeftMargin=_textLeftMargin;
@property(nonatomic) __weak NSLayoutConstraint *imageSize; // @synthesize imageSize=_imageSize;
- (void)setAccessibilityTitle:(id)arg1;
- (void)setIconName:(id)arg1;
- (void)setTitle:(id)arg1;
- (_Bool)isAccessibilityElement;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

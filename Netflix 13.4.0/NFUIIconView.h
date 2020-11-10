//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, NSLayoutConstraint, UIColor, UIImageView, UILabel;

@interface NFUIIconView : UIView
{
    double _iconSize;
    UIColor *_iconColor;
    unsigned long long _implementation;
    UIView *_customView;
    UILabel *_label;
    UIImageView *_imageView;
    LOTAnimationView *_animationView;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_widthConstraint;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) LOTAnimationView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) unsigned long long implementation; // @synthesize implementation=_implementation;
@property(nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
- (struct CGSize)intrinsicContentSize;
- (void)setupImplementation:(unsigned long long)arg1 withSender:(id)arg2;
- (void)tearDownImplementation:(unsigned long long)arg1;
- (void)setImplementation:(unsigned long long)arg1 withSender:(id)arg2;
- (void)setIconAnimationView:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconText:(id)arg1;
- (void)setIconCustomView:(id)arg1;
@property(readonly, nonatomic) UIView *implementationSubview;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


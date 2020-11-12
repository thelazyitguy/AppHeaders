//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface MDCThumbView : UIView
{
    double _borderWidth;
    double _cornerRadius;
    UIColor *_shadowColor;
    UIImageView *_iconView;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
- (void)setIcon:(id)arg1;
- (void)layoutSubviews;
- (id)shadowLayer;
@property(nonatomic) double elevation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

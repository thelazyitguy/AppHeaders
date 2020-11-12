//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIColor, UIFont, UILabel;

@interface IFNumberBlock : UIView
{
    NSLayoutConstraint *_decadesWidth;
    NSLayoutConstraint *_onesWidth;
    UIFont *_font;
    UIColor *_color;
    UIView *_contentView;
    UILabel *_decadesLabel;
    UILabel *_onesLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *onesLabel; // @synthesize onesLabel=_onesLabel;
@property(nonatomic) __weak UILabel *decadesLabel; // @synthesize decadesLabel=_decadesLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) __weak NSLayoutConstraint *onesWidth; // @synthesize onesWidth=_onesWidth;
@property(nonatomic) __weak NSLayoutConstraint *decadesWidth; // @synthesize decadesWidth=_decadesWidth;
- (void)updateWithNumber:(unsigned long long)arg1;
- (void)arrangeByFrame:(struct CGRect)arg1;
- (void)setup;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

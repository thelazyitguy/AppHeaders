//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol OGLColorThemeProtocol;

@interface OGLAccountMenuSeparatorView : UIView
{
    double _leadingInset;
    id <OGLColorThemeProtocol> _colorTheme;
    UIView *_coloredView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *coloredView; // @synthesize coloredView=_coloredView;
@property(retain, nonatomic) id <OGLColorThemeProtocol> colorTheme; // @synthesize colorTheme=_colorTheme;
@property(nonatomic) double leadingInset; // @synthesize leadingInset=_leadingInset;
- (void)applyTheme;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 colorTheme:(id)arg2;

@end

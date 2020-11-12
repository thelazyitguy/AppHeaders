//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLocale, UIBarButtonItem, UIFont;

@interface UjetBaseViewController : UIViewController
{
    _Bool _swipable;
    UIBarButtonItem *_exitButtonItem;
    UIFont *_font;
    UIFont *_boldFont;
    UIFont *_lightFont;
    NSLocale *_locale;
}

@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) UIFont *lightFont; // @synthesize lightFont=_lightFont;
@property(readonly, nonatomic) UIFont *boldFont; // @synthesize boldFont=_boldFont;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) UIBarButtonItem *exitButtonItem; // @synthesize exitButtonItem=_exitButtonItem;
@property(nonatomic) _Bool swipable; // @synthesize swipable=_swipable;
- (void).cxx_destruct;
- (void)updateViewTintColor;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)exitButtonDidTap;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1;

@end

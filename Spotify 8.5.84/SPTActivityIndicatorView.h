//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface SPTActivityIndicatorView : UIView
{
    _Bool _animating;
    UIColor *_color;
    NSArray *_dotViews;
}

+ (id)activityIndicatorView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *dotViews; // @synthesize dotViews=_dotViews;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)stopAnimating;
- (void)animateDots;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

@end

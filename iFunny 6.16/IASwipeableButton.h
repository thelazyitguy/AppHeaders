//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel, UIView;

@interface IASwipeableButton : UIButton
{
    UIView *_clickableView;
    UIImageView *_ovalImageview;
    UIImageView *_arrowImageview;
    UILabel *_ctaLabel;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *ctaLabel; // @synthesize ctaLabel=_ctaLabel;
@property(retain, nonatomic) UIImageView *arrowImageview; // @synthesize arrowImageview=_arrowImageview;
@property(retain, nonatomic) UIImageView *ovalImageview; // @synthesize ovalImageview=_ovalImageview;
@property(retain, nonatomic) UIView *clickableView; // @synthesize clickableView=_clickableView;
- (void)dealloc;
- (void)endlessAnimation;
- (void)animate;
- (void)layoutSubviews;
- (id)initWithLabelText:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDCProgressView, UIColor;

@interface QTMProgressBar : UIView
{
    MDCProgressView *_progressView;
    UIColor *_backgroundBarColor;
    UIColor *_foregroundBarColor;
    double _progress;
}

+ (double)animationDuration;
+ (id)progressBar;
+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *foregroundBarColor; // @synthesize foregroundBarColor=_foregroundBarColor;
@property(retain, nonatomic) UIColor *backgroundBarColor; // @synthesize backgroundBarColor=_backgroundBarColor;
- (void)announceAccessibilityValueChange;
- (void)accessibilityValueDidChange;
- (id)accessibilityValue;
- (void)setProgress:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)adjustFrameForHeaderView:(id)arg1;
- (void)completeAndHideWithCompletion:(CDUnknownBlockType)arg1;
- (void)completeAndHide;
- (void)resetAndShow;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)sharedInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


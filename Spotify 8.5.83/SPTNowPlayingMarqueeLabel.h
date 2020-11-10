//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSAttributedString, NSString, SPTNowPlayingFadeMaskView, UILabel;
@protocol NSObject;

@interface SPTNowPlayingMarqueeLabel : UIControl
{
    _Bool _marqueeingEnabled;
    _Bool _willAnimate;
    UILabel *_label;
    NSString *_text;
    NSAttributedString *_attributedText;
    SPTNowPlayingFadeMaskView *_fadeMaskView;
    double _marqueeingSpeed;
    double _restingDuration;
    id <NSObject> _foregroundObserver;
    struct CGPoint _leadingAnchorPoint;
    struct CGPoint _trailingAnchorPoint;
    struct CGPoint _centerAnchorPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NSObject> foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(nonatomic) struct CGPoint centerAnchorPoint; // @synthesize centerAnchorPoint=_centerAnchorPoint;
@property(nonatomic) struct CGPoint trailingAnchorPoint; // @synthesize trailingAnchorPoint=_trailingAnchorPoint;
@property(nonatomic) struct CGPoint leadingAnchorPoint; // @synthesize leadingAnchorPoint=_leadingAnchorPoint;
@property(nonatomic) _Bool willAnimate; // @synthesize willAnimate=_willAnimate;
@property(nonatomic) double restingDuration; // @synthesize restingDuration=_restingDuration;
@property(nonatomic) double marqueeingSpeed; // @synthesize marqueeingSpeed=_marqueeingSpeed;
@property(retain, nonatomic) SPTNowPlayingFadeMaskView *fadeMaskView; // @synthesize fadeMaskView=_fadeMaskView;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic, getter=isMarqueeingEnabled) _Bool marqueeingEnabled; // @synthesize marqueeingEnabled=_marqueeingEnabled;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)setHighlighted:(_Bool)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (struct CGRect)frameLabel;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)stopMarqueeing;
- (void)startMarqueeing;
- (void)marqueeBetweenSourceOrigin:(struct CGPoint)arg1 destinationOrigin:(struct CGPoint)arg2 duration:(double)arg3;
- (double)fullMarqueeDuration;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLabelNeedsLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


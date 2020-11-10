//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UITapGestureRecognizer, YTTimedAction;
@protocol YTEditToolTipViewConfiguration;

@interface YTEditToolTipView : UIView
{
    id <YTEditToolTipViewConfiguration> _configuration;
    struct CGRect _targetRect;
    struct CGPoint _arrowTipPosition;
    NSString *_text;
    UIImage *_image;
    YTTimedAction *_timeout;
    UITapGestureRecognizer *_tapGesture;
    _Bool _toolTipVisible;
    _Bool _isToolTipVisible;
    CDUnknownBlockType _didTapToolTipAction;
}

+ (id)toolTipWithMessage:(id)arg1 image:(id)arg2 configurationGenerator:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didTapToolTipAction; // @synthesize didTapToolTipAction=_didTapToolTipAction;
@property(readonly, nonatomic) _Bool isToolTipVisible; // @synthesize isToolTipVisible=_isToolTipVisible;
- (void)drawTextAndImageInContext:(struct CGContext *)arg1 contentFrame:(struct CGRect)arg2;
- (void)drawBackgroundInContext:(struct CGContext *)arg1 backgroundFrame:(struct CGRect)arg2 arrowDirection:(unsigned long long)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutInSuperview:(id)arg1 forRect:(struct CGRect)arg2;
- (_Bool)frameIsValid:(struct CGRect)arg1;
- (struct CGRect)computeFrameForArrowDirection:(unsigned long long)arg1 superviewFrame:(struct CGRect)arg2;
- (void)sizeToFit;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)imageSize;
- (struct CGSize)textSize;
- (void)setBackgroundColor:(id)arg1;
- (void)performHideAnimation;
- (void)performShowAnimation;
- (void)setUpShadow;
- (void)didTapToolTip:(id)arg1;
- (void)autoHideWithDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setToolTipVisible:(_Bool)arg1 animated:(_Bool)arg2 inSuperview:(id)arg3;
- (void)setToolTipVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTargetRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)dealloc;
- (id)initWithText:(id)arg1 image:(id)arg2 configurationGenerator:(CDUnknownBlockType)arg3;

@end

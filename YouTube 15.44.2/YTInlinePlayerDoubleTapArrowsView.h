//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface YTInlinePlayerDoubleTapArrowsView : UIView
{
    NSArray *_swipeArrows;
    long long _currentDirection;
    long long _currentSize;
}

- (void).cxx_destruct;
- (void)stopAnimatingArrows:(id)arg1;
- (id)alphaArrowFadeOutAnimationForIndex:(unsigned long long)arg1;
- (id)alphaArrowFadeInAnimationForIndex:(unsigned long long)arg1;
- (void)animateArrow:(id)arg1 index:(unsigned long long)arg2 repeat:(_Bool)arg3;
- (void)animateArrows:(id)arg1 repeat:(_Bool)arg2;
- (void)positionArrows:(id)arg1;
- (void)prepareArrowsForDirection:(long long)arg1;
- (double)arrowPaddingX;
- (void)stopLoopingAnimation;
- (void)startLoopingAnimation;
- (void)animate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithDirection:(long long)arg1 size:(long long)arg2;
- (id)initWithDirection:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


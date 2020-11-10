//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDCInkView, UIBezierPath, UIColor;

@interface MDXSmartRemoteDpadView : UIView
{
    UIColor *_selectButtonColor;
    UIColor *_centerPressedButtonColor;
    UIColor *_directionButtonsColor;
    UIColor *_directionPressedButtonsColor;
    UIColor *_chevronColor;
    struct CGPoint _dpadCenter;
    UIBezierPath *_buttonBeingTouched;
    UIBezierPath *_leftButton;
    UIBezierPath *_rightButton;
    UIBezierPath *_upButton;
    UIBezierPath *_downButton;
    UIBezierPath *_selectButton;
    double _dpadRadius;
    double _centerRadius;
    double _chevronOffset;
    double _chevronBaseLength;
    double _chevronHeight;
    double _separatorWidth;
    MDCInkView *_inkView;
}

- (void).cxx_destruct;
- (id)buttonChevronWithRotation:(double)arg1;
- (id)dpadButtonWithRotation:(double)arg1;
- (id)pathAtPoint:(struct CGPoint)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (long long)buttonAtPoint:(struct CGPoint)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)createAccessibilityElements;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


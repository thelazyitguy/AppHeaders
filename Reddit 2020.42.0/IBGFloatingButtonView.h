//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UIViewController;
@protocol IBGFloatingButtonViewDelegate;

@interface IBGFloatingButtonView : UIView
{
    _Bool _isMoved;
    id <IBGFloatingButtonViewDelegate> _floatingButtonDelegate;
    UIImage *_image;
    UIImageView *_buttonImageView;
    double _keyboardHeight;
    UIViewController *_rootViewController;
    struct CGPoint _startTouchPoint;
}

@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UIImageView *buttonImageView; // @synthesize buttonImageView=_buttonImageView;
@property(nonatomic) struct CGPoint startTouchPoint; // @synthesize startTouchPoint=_startTouchPoint;
@property(nonatomic) _Bool isMoved; // @synthesize isMoved=_isMoved;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak id <IBGFloatingButtonViewDelegate> floatingButtonDelegate; // @synthesize floatingButtonDelegate=_floatingButtonDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGPoint)getDestinationPointInRect:(struct CGRect)arg1;
- (struct CGRect)calculateFloatingButtonDragingArea;
- (void)animateToEdges;
- (_Bool)validateButtonNewCenter:(struct CGPoint)arg1;
- (void)moveByDeltaX:(double)arg1 deltaY:(double)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)adjustFrame:(struct CGRect)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)addFloatingImageView;
- (void)updateFloatingButtonBackgroundColor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addPrimaryColorKVO;
- (id)initWithViewController:(id)arg1;

@end


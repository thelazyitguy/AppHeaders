//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "ModalShimContainerViewProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIButton, UIColor, UIPanGestureRecognizer, UIView;
@protocol ModalShimContainerDelegateProtocol, NFUIThumbPickerDelegate;

@interface NFUIThumbsPicker : UIControl <ModalShimContainerViewProtocol, UIGestureRecognizerDelegate>
{
    _Bool _isAnimating;
    _Bool _isPresented;
    UIView<NFUIThumbPickerDelegate> *_delegate;
    id <ModalShimContainerDelegateProtocol> _shimDelegate;
    UIColor *_overlayColor;
    UIColor *_buttonIconColor;
    UIColor *_buttonBackgroundColor;
    UIButton *_cancelButton;
    UIButton *_thumbUpButton;
    UIButton *_thumbDownButton;
    UIView *_sourceView;
    UIView *_overlayView;
    UIView *_contentView;
    UIColor *_buttonBorderColor;
    double _thumbIconSize;
    double _cancelIconSize;
    UIPanGestureRecognizer *_panRecognizer;
    struct CGRect _initialViewFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(nonatomic) double cancelIconSize; // @synthesize cancelIconSize=_cancelIconSize;
@property(nonatomic) double thumbIconSize; // @synthesize thumbIconSize=_thumbIconSize;
@property(retain, nonatomic) UIColor *buttonBorderColor; // @synthesize buttonBorderColor=_buttonBorderColor;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) struct CGRect initialViewFrame; // @synthesize initialViewFrame=_initialViewFrame;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIButton *thumbDownButton; // @synthesize thumbDownButton=_thumbDownButton;
@property(retain, nonatomic) UIButton *thumbUpButton; // @synthesize thumbUpButton=_thumbUpButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(retain, nonatomic) UIColor *buttonIconColor; // @synthesize buttonIconColor=_buttonIconColor;
@property(retain, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(nonatomic) __weak id <ModalShimContainerDelegateProtocol> shimDelegate; // @synthesize shimDelegate=_shimDelegate;
@property(nonatomic) __weak UIView<NFUIThumbPickerDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)pointThatFitsFromCenter:(struct CGPoint)arg1;
- (void)animateHighlightForButton:(id)arg1 withIcon:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateButtonIcon:(id)arg1 toColor:(id)arg2 duration:(double)arg3;
- (void)animateButtonBorder:(id)arg1 toColor:(id)arg2 duration:(double)arg3 delay:(double)arg4;
- (void)animateIn:(id)arg1;
- (void)configureAccessibility;
- (void)setupView;
- (void)viewWillBeDismissed:(id)arg1;
- (struct CGSize)sizeForContent;
- (id)viewForContent;
- (void)didTapThumbDownButton:(id)arg1;
- (void)didTapThumbUpButton:(id)arg1;
- (void)didTapCloseButton:(id)arg1;
- (id)trailingButton;
- (id)leadingButton;
- (id)buttonWithIcon:(id)arg1 iconSize:(double)arg2 size:(double)arg3 action:(SEL)arg4 withShadow:(_Bool)arg5;
@property(readonly, nonatomic) __weak UIView *parentView;
- (void)dismissWithSelectedButton:(id)arg1 isUserSelection:(_Bool)arg2;
- (void)dismiss;
- (void)showAtView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)parentViewDidPan:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceView:(id)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


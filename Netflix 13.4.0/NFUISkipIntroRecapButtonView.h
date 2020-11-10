//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFUILabel, NSLayoutConstraint, NSNumber, NSTimer, UIButton;
@protocol NFUISkipIntroRecapButtonViewDelegate;

@interface NFUISkipIntroRecapButtonView : UIView
{
    _Bool _shouldForceShow;
    _Bool _shouldShowButton;
    _Bool _controlsHidden;
    _Bool _shouldTimeout;
    _Bool _isHidden;
    long long _state;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_rightConstraint;
    id <NFUISkipIntroRecapButtonViewDelegate> _delegate;
    NFUILabel *_titleLabel;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_titleLabelTrailingConstraint;
    NSTimer *_timer;
    NSNumber *_currentSessionId;
    UIButton *_tapButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(retain, nonatomic) UIButton *tapButton; // @synthesize tapButton=_tapButton;
@property(retain) NSNumber *currentSessionId; // @synthesize currentSessionId=_currentSessionId;
@property(nonatomic) _Bool shouldTimeout; // @synthesize shouldTimeout=_shouldTimeout;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelTrailingConstraint; // @synthesize titleLabelTrailingConstraint=_titleLabelTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) __weak NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <NFUISkipIntroRecapButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSLayoutConstraint *rightConstraint; // @synthesize rightConstraint=_rightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool controlsHidden; // @synthesize controlsHidden=_controlsHidden;
@property(nonatomic) _Bool shouldShowButton; // @synthesize shouldShowButton=_shouldShowButton;
@property(nonatomic) _Bool shouldForceShow; // @synthesize shouldForceShow=_shouldForceShow;
- (id)accessibilityLabel;
- (void)configureAccessibility;
- (id)localizedButtonString:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)showSkipContentWithMarker:(id)arg1;
- (void)showTutorialText;
- (void)showRecapText;
- (void)showIntroText;
- (void)toggleFlags:(_Bool)arg1;
- (void)hideSelf;
- (void)dalloc;
- (void)stopTimer;
- (void)updateAccessibilityStatus;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)toggleSkipIntroRecapPosition:(long long)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


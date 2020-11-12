//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IBGButton, NSString, UILabel;

@interface IBGToastView : UIView
{
    _Bool _dismissOnTappingRightButton;
    _Bool _sideButtonHidden;
    _Bool _didPresentSelf;
    UILabel *_messageLabel;
    IBGButton *_rightButton;
    CDUnknownBlockType _rightButtonCompletion;
    NSString *_message;
}

@property(nonatomic) _Bool didPresentSelf; // @synthesize didPresentSelf=_didPresentSelf;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) CDUnknownBlockType rightButtonCompletion; // @synthesize rightButtonCompletion=_rightButtonCompletion;
@property(retain, nonatomic) IBGButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) _Bool sideButtonHidden; // @synthesize sideButtonHidden=_sideButtonHidden;
@property(nonatomic) _Bool dismissOnTappingRightButton; // @synthesize dismissOnTappingRightButton=_dismissOnTappingRightButton;
- (void).cxx_destruct;
- (void)didTapRightButton;
- (void)animatePresentationFromTopToBottom;
- (void)autoDismissAfter:(long long)arg1;
- (void)setupDefaultMode;
- (void)setupForMode:(unsigned long long)arg1;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (void)setRightButtonCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setRightButtonTitle:(id)arg1;
- (void)didSwipeUp:(id)arg1;
- (void)updateConstraints;
- (id)initWithMessage:(id)arg1 autoDismissAfter:(long long)arg2 mode:(unsigned long long)arg3;
- (id)initWithMessage:(id)arg1 autoDismissAfter:(long long)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ASMHeaderButton, GMDCProductLockupView, NSString, QTMButton, UIColor, UILabel;
@protocol ASMHeaderViewDelegate;

@interface ASMHeaderView : UIView
{
    QTMButton *_backButton;
    QTMButton *_helpButton;
    ASMHeaderButton *_accountIndicatorButton;
    UILabel *_plainTitleLabel;
    GMDCProductLockupView *_lockupTitleView;
    _Bool _showCancelButton;
    _Bool _useMyGoogleStyle;
    UIColor *_textColor;
    _Bool _showHelpButton;
    _Bool _showAccountIndicatorButton;
    id <ASMHeaderViewDelegate> _delegate;
    NSString *_title;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showAccountIndicatorButton; // @synthesize showAccountIndicatorButton=_showAccountIndicatorButton;
@property(nonatomic) _Bool showHelpButton; // @synthesize showHelpButton=_showHelpButton;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <ASMHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityElements;
- (void)hideAccountIndicatorButton;
- (void)showAccountIndicatorButtonWithImage:(id)arg1 accessibilityLabel:(id)arg2 hasButtonTrait:(_Bool)arg3;
- (void)didTapAccountIndicatorButton;
- (void)didTapHelpButton;
- (void)didTapBackButton;
- (struct CGSize)sizeForButton:(id)arg1;
- (void)layoutButton:(id)arg1 imageX:(double)arg2 imageY:(double)arg3;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLockupColor;
- (void)setLockupTitle:(id)arg1;
- (void)setPlainTitle:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)initWithShowCancelButton:(_Bool)arg1 useMyGoogleStyle:(_Bool)arg2;

@end

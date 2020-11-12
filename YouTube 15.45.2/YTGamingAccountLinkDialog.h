//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOModalPresentation-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSArray, NSString, UIScrollView, YTFormattedStringLabel, YTIButtonRenderer, YTImageView, YTQTMButton;
@protocol YTGamingAccountLinkDialogProtocol;

@interface YTGamingAccountLinkDialog : UIView <YTPageStyleProvider, YTPageStyling, GOOModalPresentation, YTThumbnailMapping>
{
    UIView *_contentView;
    UIView *_backgroundView;
    UIScrollView *_scrollView;
    UIView *_footerView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_messageLabel;
    YTFormattedStringLabel *_gpgGamerTagLabel;
    YTFormattedStringLabel *_gpgEmailAddressLabel;
    UIView *_separatorView;
    YTImageView *_headerImageView;
    YTImageView *_gpgAvatarImageView;
    YTImageView *_providerAvatarImageView;
    YTImageView *_userAvatarImageView;
    YTImageView *_iconImageView;
    YTImageView *_gpgIconImageView;
    UIView *_iconBackgroundView;
    UIView *_gpgGamerTagContainerView;
    YTQTMButton *_actionButton;
    YTQTMButton *_cancelButton;
    YTQTMButton *_dismissButton;
    YTIButtonRenderer *_actionButtonRenderer;
    YTIButtonRenderer *_cancelButtonRenderer;
    YTIButtonRenderer *_dismissButtonRenderer;
    NSArray *_thumbnailMappings;
    long long _dialogStyle;
    long long _pageStyle;
    id <YTGamingAccountLinkDialogProtocol> _delegate;
    NSArray *_visibleButtons;
}

+ (id)dialogForGPGConnection:(id)arg1 withPageStyle:(long long)arg2;
+ (id)dialogForAccountLinkConfirmDialog:(id)arg1 withPageStyle:(long long)arg2;
+ (id)dialogForAccountLinkSetting:(id)arg1 withPageStyle:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *visibleButtons; // @synthesize visibleButtons=_visibleButtons;
@property(nonatomic) __weak id <YTGamingAccountLinkDialogProtocol> delegate; // @synthesize delegate=_delegate;
- (double)maximumWidth;
- (void)didTapBackground;
- (void)didClickDismissButton;
- (void)didClickCancelButton;
- (void)didClickActionButton;
- (void)setFormattedStringLabelDelegate:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (id)thumbnailMappings;
- (_Bool)accessibilityPerformEscape;
- (double)hideAnimationDuration;
- (double)showAnimationDuration;
- (_Bool)shouldDimBackground;
- (void)revealDialog;
- (void)dismissDialog:(_Bool)arg1;
- (void)reposition;
- (void)dismissWithCancelAction:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 messages:(id)arg2 headerThumbnail:(id)arg3 userThumbnail:(id)arg4 providerThumbnail:(id)arg5 avatarThumbnail:(id)arg6 gamerTag:(id)arg7 emailAddress:(id)arg8 icon:(id)arg9 actionButton:(id)arg10 cancelButton:(id)arg11 dismissButton:(id)arg12 dialogStyle:(long long)arg13 pageStyle:(long long)arg14;

// Remaining properties
@property(nonatomic) double backgroundDimAlpha;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=shouldPostScreenChangeNotificationOnDismiss) _Bool postScreenChangeNotificationOnDismiss;
@property(readonly) Class superclass;
@property(nonatomic) __weak UIView *viewToReceiveVoiceOverFocusAfterDismissal;

@end

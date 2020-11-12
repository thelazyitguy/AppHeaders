//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HUBButton, UIImageView, UILabel;
@protocol GBTSecurityBannerViewDelegate, JBTConversationMessage;

@interface GBTSecurityBannerView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_title;
    UILabel *_description;
    HUBButton *_primaryActionButton;
    HUBButton *_secondaryActionButton;
    unsigned long long _primaryAction;
    unsigned long long _secondaryAction;
    id <JBTConversationMessage> _message;
    _Bool _showTitleText;
    id <GBTSecurityBannerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GBTSecurityBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long secondaryAction; // @synthesize secondaryAction=_secondaryAction;
@property(readonly, nonatomic) unsigned long long primaryAction; // @synthesize primaryAction=_primaryAction;
- (id)accessibilityElements;
- (void)actionTapped:(unsigned long long)arg1;
- (void)secondaryActionTapped:(id)arg1;
- (void)primaryActionTapped:(id)arg1;
- (void)createSubviews;
- (void)setupBanner;
- (id)securityBannerActionFromActionType:(unsigned long long)arg1;
- (_Bool)isAllowedActionType:(unsigned long long)arg1;
- (id)bannerTitleForType:(id)arg1 andSenderEmail:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateWithMessage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

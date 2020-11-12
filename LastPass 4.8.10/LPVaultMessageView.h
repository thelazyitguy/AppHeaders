//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface LPVaultMessageView : UIView
{
    _Bool _showButton;
    UIImageView *_iconImageView;
    UILabel *_label;
    UIButton *_button;
    NSString *_message;
    NSString *_buttonTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showButton; // @synthesize showButton=_showButton;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit_LPVaultMessageView;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DYNBrandedLabel, DYNIconAlertViewModel, DYNLabel, NSArray, UIButton, UIImageView;
@protocol DYNColorSchemeService;

@interface DYNIconAlertView : UIView
{
    id <DYNColorSchemeService> _colorSchemeService;
    DYNIconAlertViewModel *_viewModel;
    UIImageView *_iconImageView;
    DYNBrandedLabel *_titleLabel;
    DYNLabel *_descriptionLabel;
    UIButton *_primaryButton;
    UIButton *_secondaryButton;
    NSArray *_dynamicLayoutConstraints;
}

- (void).cxx_destruct;
- (void)setUpDynamicLayoutConstraints;
- (void)setUpInitialLayoutConstraints;
- (void)setUpSecondaryButton;
- (void)setUpSubviews;
- (void)didTapSecondaryButton;
- (void)didTapPrimaryButton;
- (void)updateViewWithViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithViewModel:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DYNBrandedLabel, DYNDialogAction, DYNLabel, MDCButton, UIImageView;
@protocol DYNColorSchemeService;

@interface DYNIconInfoView : UIView
{
    id <DYNColorSchemeService> _colorSchemeService;
    UIView *_containerView;
    UIImageView *_iconImageView;
    DYNBrandedLabel *_titleLabel;
    DYNLabel *_descriptionLabel;
    MDCButton *_button;
    DYNDialogAction *_buttonAction;
}

- (void).cxx_destruct;
- (void)setUpLayoutConstraintsWithImageSize:(struct CGSize)arg1 titleContentInsets:(struct UIEdgeInsets)arg2 descriptionContentInsets:(struct UIEdgeInsets)arg3;
- (void)setUpSubviewsWithImage:(id)arg1 imageSize:(struct CGSize)arg2 title:(id)arg3 description:(id)arg4 titleContentInsets:(struct UIEdgeInsets)arg5 descriptionContentInsets:(struct UIEdgeInsets)arg6 buttonAction:(id)arg7;
- (void)didTapButton;
- (id)initWithImage:(id)arg1 imageSize:(struct CGSize)arg2 title:(id)arg3 description:(id)arg4 titleContentInsets:(struct UIEdgeInsets)arg5 descriptionContentInsets:(struct UIEdgeInsets)arg6 buttonAction:(id)arg7;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCSChatMinimizedFooterView, SCSChatMinimizedMainView, SCSImageView, SCSInsetConstraint, UILabel, UIStackView;

@interface SCSChatMinimizedContent : UIView
{
    SCSInsetConstraint *_contentViewPadding;
    double _contentViewSpacing;
    SCSChatMinimizedMainView *_mainView;
    SCSChatMinimizedFooterView *_footerView;
    UIStackView *_stackView;
    UILabel *_footerTextLabel;
    SCSImageView *_iconImageView;
}

@property(retain, nonatomic) SCSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *footerTextLabel; // @synthesize footerTextLabel=_footerTextLabel;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) SCSChatMinimizedFooterView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) SCSChatMinimizedMainView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double contentViewSpacing;
@property(nonatomic) struct UIEdgeInsets contentViewPadding;

@end

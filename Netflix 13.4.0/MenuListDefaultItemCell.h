//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MenuListItemDisplayProtocol-Protocol.h"

@class CAShapeLayer, NSLayoutConstraint, NSString, UIColor, UIImageView, UILabel, UIView;

@interface MenuListDefaultItemCell : UITableViewCell <MenuListItemDisplayProtocol>
{
    _Bool _disabled;
    _Bool _customSelected;
    _Bool _shouldAlignMenuText;
    UILabel *_titleLabel;
    UIView *_selectedRect;
    UIImageView *_iconView;
    NSLayoutConstraint *_iconLeadingConstraint;
    NSLayoutConstraint *_titleLabelLeadingConstraint;
    CAShapeLayer *_bottomRuleLayer;
    UIColor *_bottomRuleColor;
    double _bottomRuleHeight;
    UIColor *_viewModelBackgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *viewModelBackgroundColor; // @synthesize viewModelBackgroundColor=_viewModelBackgroundColor;
@property(nonatomic) double bottomRuleHeight; // @synthesize bottomRuleHeight=_bottomRuleHeight;
@property(retain, nonatomic) UIColor *bottomRuleColor; // @synthesize bottomRuleColor=_bottomRuleColor;
@property(retain, nonatomic) CAShapeLayer *bottomRuleLayer; // @synthesize bottomRuleLayer=_bottomRuleLayer;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelLeadingConstraint; // @synthesize titleLabelLeadingConstraint=_titleLabelLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *iconLeadingConstraint; // @synthesize iconLeadingConstraint=_iconLeadingConstraint;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UIView *selectedRect; // @synthesize selectedRect=_selectedRect;
@property(nonatomic) _Bool shouldAlignMenuText; // @synthesize shouldAlignMenuText=_shouldAlignMenuText;
@property(nonatomic) _Bool customSelected; // @synthesize customSelected=_customSelected;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyCustomSelectedState:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (struct CGRect)accessibilityFrame;
- (void)configureBottomRule;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


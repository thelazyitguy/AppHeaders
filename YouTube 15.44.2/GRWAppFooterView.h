//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, NSString, UIColor, UILabel, UISwitch, UIView;

@interface GRWAppFooterView : UICollectionReusableView
{
    _Bool _showSwitch;
    unsigned long long _separatorEdge;
    CDUnknownBlockType _switchChanged;
    UILabel *_label;
    UISwitch *_footerSwitch;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorEdgeConstrait;
}

+ (double)preferredHeightForTitle:(id)arg1 width:(double)arg2 showingSwitch:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *separatorEdgeConstrait; // @synthesize separatorEdgeConstrait=_separatorEdgeConstrait;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UISwitch *footerSwitch; // @synthesize footerSwitch=_footerSwitch;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType switchChanged; // @synthesize switchChanged=_switchChanged;
@property(nonatomic, getter=isShowingSwitch) _Bool showSwitch; // @synthesize showSwitch=_showSwitch;
@property(nonatomic) unsigned long long separatorEdge; // @synthesize separatorEdge=_separatorEdge;
- (void)applyStyleColor;
@property(readonly, nonatomic) UIColor *styledBackgroundColor;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityHint;
- (void)setAccessibilityIdentifier:(id)arg1;
- (id)accessibilityValue;
- (void)didTapView:(id)arg1;
- (void)prepareForReuse;
- (void)switchValueChanged:(id)arg1;
- (void)setSwitchOn:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isSwitchOn) _Bool switchOn;
@property(copy, nonatomic) NSString *title;
- (void)addSwitchAndLabelToViewHierarchy;
- (id)initWithFrame:(struct CGRect)arg1;

@end


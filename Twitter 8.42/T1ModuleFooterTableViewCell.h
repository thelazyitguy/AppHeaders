//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class T1ModuleFooterView, UIView;

@interface T1ModuleFooterTableViewCell : TFNTableViewCell
{
    T1ModuleFooterView *_footerView;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(readonly, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(readonly, nonatomic) T1ModuleFooterView *footerView; // @synthesize footerView=_footerView;
- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;
- (void)didKeyboardSelectInDataViewController:(id)arg1 atIndexPath:(id)arg2;
- (void)setKeyboardHighlighted:(_Bool)arg1;
- (_Bool)isKeyboardSelectable;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


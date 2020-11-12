//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOTextContentView.h"

@class GDKSwitchContentViewObject, UISwitch;

@interface GDKSwitchContentView : GOOTextContentView
{
    GDKSwitchContentViewObject *_object;
    UISwitch *_switchControl;
}

+ (id)switchControl;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (struct UIEdgeInsets)paddingFromObject:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switchControl;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)setSwitchEnabled:(_Bool)arg1;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateSwitch:(_Bool)arg1;
- (struct CGRect)boundsForText;
- (void)switched:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

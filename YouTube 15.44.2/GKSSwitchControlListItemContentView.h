//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GKSListItemContentView.h>

@class GKSSwitchControlListItemContentViewObject, UISwitch;

@interface GKSSwitchControlListItemContentView : GKSListItemContentView
{
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void)didUpdateSwitch;
- (void)handleContentViewTap:(id)arg1;
- (void)handleSwitchControlTap:(id)arg1;
- (void)updateViewWithCurrentSwitchState;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
@property(readonly, nonatomic) __weak UISwitch *switchView;
@property(readonly, nonatomic) __weak GKSSwitchControlListItemContentViewObject *listItemObject;
- (void)setSwitchEnabled:(_Bool)arg1;
- (void)setSwitchControlOn:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


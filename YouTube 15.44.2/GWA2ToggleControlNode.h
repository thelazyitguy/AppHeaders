//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2Node.h>

@class GWA2WrapperView, ORCH2ToggleControlNode, UIImageView, UISwitch;

@interface GWA2ToggleControlNode : GWA2Node
{
    ORCH2ToggleControlNode *_toggleControlNodeExtension;
    GWA2WrapperView *_toggleControlView;
    UISwitch *_switch;
    UIImageView *_checkMarkView;
}

- (void).cxx_destruct;
- (void)applyToggleControlNodeProperties;
- (void)updateToggleControl;
- (void)dealloc;
- (void)tapped:(id)arg1;
- (id)presentedView;
- (id)initWithNode:(id)arg1 nodeManager:(id)arg2 dataManager:(id)arg3 pageTheme:(id)arg4 eventRuleManager:(id)arg5 logger:(id)arg6 pageContext:(id)arg7;

@end

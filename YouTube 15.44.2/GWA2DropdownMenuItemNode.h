//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2Node.h>

@class GIPNetworkImage, MDCActionSheetAction, ORCH2DropdownMenuItemNode;

@interface GWA2DropdownMenuItemNode : GWA2Node
{
    ORCH2DropdownMenuItemNode *_dropdownMenuItemNodeExtension;
    GIPNetworkImage *_networkImage;
    MDCActionSheetAction *_action;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MDCActionSheetAction *action; // @synthesize action=_action;
- (void)imageFetchSucceeded:(id)arg1;
- (id)initWithNode:(id)arg1 nodeManager:(id)arg2 dataManager:(id)arg3 pageTheme:(id)arg4 eventRuleManager:(id)arg5 logger:(id)arg6 pageContext:(id)arg7;

@end


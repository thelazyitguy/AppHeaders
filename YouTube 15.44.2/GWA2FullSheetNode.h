//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2Node.h>

#import <Module_Framework/GWA2ModalNode-Protocol.h>

@class NSString, ORCH2FullSheetNode, UIView;

@interface GWA2FullSheetNode : GWA2Node <GWA2ModalNode>
{
    ORCH2FullSheetNode *_fullSheetNodeExtension;
    UIView *_fullSheetView;
    GWA2Node *_fullSheetContentNode;
    _Bool _active;
}

- (void).cxx_destruct;
- (id)fullSheetContentNode;
- (int)deviceOrientation;
- (_Bool)isActive;
- (void)setActive:(_Bool)arg1 withEventRuleId:(long long)arg2;
- (void)redraw;
- (void)removeChildNode:(id)arg1;
- (void)addChildNode:(id)arg1;
- (id)height;
- (id)width;
- (void)setIncludeDeviceInsets:(unsigned long long)arg1;
- (void)applyLayoutPropertiesWithForcedRedraw:(_Bool)arg1;
- (id)presentedView;
- (id)initWithNode:(id)arg1 nodeManager:(id)arg2 dataManager:(id)arg3 pageTheme:(id)arg4 eventRuleManager:(id)arg5 logger:(id)arg6 pageContext:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

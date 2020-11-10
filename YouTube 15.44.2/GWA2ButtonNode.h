//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2Node.h>

@class GIPNetworkImage, MDCButton, ORCH2ButtonNode;

@interface GWA2ButtonNode : GWA2Node
{
    ORCH2ButtonNode *_buttonNodeExtension;
    MDCButton *_button;
    struct UIEdgeInsets _defaultContentInsets;
    GIPNetworkImage *_networkImage;
}

- (void).cxx_destruct;
- (void)updateButtonWithImage:(id)arg1;
- (void)imageFetchSucceeded:(id)arg1;
- (CDStruct_c3b9c2ee)insetsWithMargins:(CDStruct_c3b9c2ee)arg1 toMeetHitArea:(double)arg2;
- (void)updateImageContent;
- (void)buttonDataChangedIconImageContentKeyPath:(id)arg1;
- (void)buttonDataChangedTextKeyPath:(id)arg1;
- (void)buttonFrameDidUpdate:(id)arg1;
- (void)setupAccessibilityProperties;
- (void)applyMaterialElevation;
- (void)applyTitleAlignment;
- (void)applyTitleAttributes;
- (void)applyBorderColor;
- (void)applyBorderWidth;
- (void)applyTitleFont;
- (void)applyTitleColor;
- (void)applyStyleProperties;
- (void)applyPaddings;
- (void)redraw;
- (id)presentedView;
- (void)dealloc;
- (id)initWithNode:(id)arg1 nodeManager:(id)arg2 dataManager:(id)arg3 pageTheme:(id)arg4 eventRuleManager:(id)arg5 logger:(id)arg6 pageContext:(id)arg7;

@end


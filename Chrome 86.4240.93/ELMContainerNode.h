//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/ASDisplayNode.h>

#import <ChromeInternal/ELMDisplayNode-Protocol.h>

@class ELMElement, NSString, UIColor, UIImage;
@protocol ELMContext, ELMController;

@interface ELMContainerNode : ASDisplayNode <ELMDisplayNode>
{
    id <ELMContext> _context;
    UIImage *_stretchableBackgroundContents;
    UIColor *_stretchableBackgroundColor;
    ELMElement *_element;
}

+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
- (void).cxx_destruct;
@property(retain) ELMElement *element; // @synthesize element=_element;
- (void)drawBackgroundContentsIfNeeded;
- (void)setBackgroundContentsIfNeeded;
- (_Bool)computeFlattenability;
- (id)layerActionForKey:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didEnterVisibleState;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (void)controllerDidApplyProperties;
- (void)applyViewProperties;
- (_Bool)managesGestureHandling;
- (id)initWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <ELMController> nodeController; // @dynamic nodeController;
@property(readonly) Class superclass;

@end

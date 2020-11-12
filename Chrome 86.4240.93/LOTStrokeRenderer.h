//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/LOTRenderNode.h>

@class LOTColorInterpolator, LOTNumberInterpolator, NSArray;

@interface LOTStrokeRenderer : LOTRenderNode
{
    LOTColorInterpolator *_colorInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
    LOTNumberInterpolator *_widthInterpolator;
    LOTNumberInterpolator *_dashOffsetInterpolator;
    NSArray *_dashPatternInterpolators;
}

- (void).cxx_destruct;
- (id)actionsForRenderLayer;
- (void)rebuildOutputs;
- (void)performLocalUpdate;
- (_Bool)needsUpdateForFrame:(id)arg1;
- (void)_updateLineDashPatternsForFrame:(id)arg1;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)arg1 shapeStroke:(id)arg2;

@end

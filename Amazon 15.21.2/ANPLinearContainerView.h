//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ANPLinearContainerSpec, ANPUVWidgetSpec, NSDictionary, NSMutableArray;

@interface ANPLinearContainerView : UIView
{
    _Bool _isDirty;
    NSMutableArray *_children;
    ANPLinearContainerSpec *_spec;
    NSDictionary *_layoutSpecs;
    NSDictionary *_childrenSpecs;
    NSDictionary *_childrenLayouts;
    ANPUVWidgetSpec *_uvSpec;
    struct CGSize _cachedContainerSize;
}

@property(retain, nonatomic) ANPUVWidgetSpec *uvSpec; // @synthesize uvSpec=_uvSpec;
@property(retain, nonatomic) NSDictionary *childrenLayouts; // @synthesize childrenLayouts=_childrenLayouts;
@property(retain, nonatomic) NSDictionary *childrenSpecs; // @synthesize childrenSpecs=_childrenSpecs;
@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(nonatomic) struct CGSize cachedContainerSize; // @synthesize cachedContainerSize=_cachedContainerSize;
@property(retain, nonatomic) NSDictionary *layoutSpecs; // @synthesize layoutSpecs=_layoutSpecs;
@property(retain, nonatomic) ANPLinearContainerSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (double)normalize:(double)arg1 sum:(double)arg2;
- (double)vSizeForWidget:(id)arg1 percent:(double)arg2 totalAvailableVSize:(double)arg3;
- (double)uSizeForWidget:(id)arg1 percent:(double)arg2 totalAvailableUSize:(double)arg3;
- (double)vPositionForWidget:(id)arg1 availableSize:(double)arg2;
- (double)uPositionForEndAlignedWidget:(id)arg1 precedingSpec:(id)arg2 precedingLayout:(id)arg3 totalContentSize:(double)arg4;
- (double)uPositionForCenterAlignedWidget:(id)arg1 precedingSpec:(id)arg2 precedingLayout:(id)arg3 totalContentSize:(double)arg4;
- (double)uPositionForStartAlignedWidget:(id)arg1 precedingSpec:(id)arg2 precedingLayout:(id)arg3 totalContentSize:(double)arg4;
- (double)uPositionForChildSpec:(id)arg1 precedingSpec:(id)arg2 precedingLayout:(id)arg3 totalContentSize:(double)arg4;
- (void)calculateLayoutFrames;
- (_Bool)shouldInvalidateFrames;
- (void)layoutSubviews;
- (void)invalidate;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAOverlayCommonDrawOutput.h"

@interface MAPolygonDrawOutput : MAOverlayCommonDrawOutput
{
    vector_aac46ba0 *_clippedPolygons;
    vector_3ec3dbbf *_indexListVector;
}

@property(nonatomic) vector_3ec3dbbf *indexListVector; // @synthesize indexListVector=_indexListVector;
@property(nonatomic) vector_aac46ba0 *clippedPolygons; // @synthesize clippedPolygons=_clippedPolygons;
- (void)dealloc;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSOverlay.h>

@class GMSPath, NSArray, UIColor, UIImage;

@interface GMSPolyline : GMSOverlay
{
    vector_52d06928 _points;
    vector_c36147bd _colorSpans;
    _Bool _hasSpanBeenSet;
    _Bool _hasPathBeenSet;
    _Bool _geodesic;
    GMSPath *_path;
    double _strokeWidth;
    UIColor *_strokeColor;
    NSArray *_spans;
    UIImage *_strokeTexture;
}

+ (long long)compare:(id)arg1 to:(id)arg2;
+ (id)polylineWithPath:(id)arg1;
@property(retain, nonatomic) UIImage *strokeTexture; // @synthesize strokeTexture=_strokeTexture;
@property(copy, nonatomic) NSArray *spans; // @synthesize spans=_spans;
@property(nonatomic) _Bool geodesic; // @synthesize geodesic=_geodesic;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(copy, nonatomic) GMSPath *path; // @synthesize path=_path;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)accessibilityFrame;
@property(readonly, nonatomic) const vector_c36147bd *colorSpans;
@property(readonly, nonatomic) const vector_52d06928 *points;
- (void)update;
- (void)invalidate;
- (id)description;
- (void)logSpanningEvents:(long long)arg1;
- (unsigned long long)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

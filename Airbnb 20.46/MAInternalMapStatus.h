//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MAInternalMapStatus : NSObject
{
    float _zoomLevel;
    float _rotationDegree;
    float _cameraDegree;
    struct MAMapPoint _centerMapPoint;
    struct CGPoint _screenAnchor;
}

+ (id)statusWithCenterMapPoint:(struct MAMapPoint)arg1 zoomLevel:(double)arg2 rotationDegree:(double)arg3 cameraDegree:(double)arg4 screenAnchor:(struct CGPoint)arg5;
@property(nonatomic) struct CGPoint screenAnchor; // @synthesize screenAnchor=_screenAnchor;
@property(nonatomic) float cameraDegree; // @synthesize cameraDegree=_cameraDegree;
@property(nonatomic) float rotationDegree; // @synthesize rotationDegree=_rotationDegree;
@property(nonatomic) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) struct MAMapPoint centerMapPoint; // @synthesize centerMapPoint=_centerMapPoint;
- (id)description;
- (_Bool)isEqualToMapStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCenterMapPoint:(struct MAMapPoint)arg1 zoomLevel:(double)arg2 rotationDegree:(double)arg3 cameraDegree:(double)arg4 screenAnchor:(struct CGPoint)arg5;
- (id)init;

@end


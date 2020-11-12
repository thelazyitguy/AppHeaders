//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ATRICoordinateConversion, ATRIProjection;

@interface Floorspace : NSObject
{
    _Bool _hasBeacons;
    int _floorspaceId;
    int _floorId;
    float _geotransformHeadingOffsetRadians;
    float _convertedHeadingOffsetRadians;
    NSString *_name;
    id <ATRIProjection> _geotransformProjection;
    id <ATRICoordinateConversion> _convertedProjection;
}

@property float convertedHeadingOffsetRadians; // @synthesize convertedHeadingOffsetRadians=_convertedHeadingOffsetRadians;
@property float geotransformHeadingOffsetRadians; // @synthesize geotransformHeadingOffsetRadians=_geotransformHeadingOffsetRadians;
@property(retain) id <ATRICoordinateConversion> convertedProjection; // @synthesize convertedProjection=_convertedProjection;
@property(retain) id <ATRIProjection> geotransformProjection; // @synthesize geotransformProjection=_geotransformProjection;
@property _Bool hasBeacons; // @synthesize hasBeacons=_hasBeacons;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int floorId; // @synthesize floorId=_floorId;
@property(nonatomic) int floorspaceId; // @synthesize floorspaceId=_floorspaceId;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 andId:(int)arg2 andFloorId:(int)arg3 andConvertedProjection:(id)arg4 andConvertedHeadingOffsetRadians:(float)arg5 andGeotransformProjection:(id)arg6 andGeotransformHeadingOffsetRadians:(float)arg7 andHasBeacons:(_Bool)arg8;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLFloor, NSDate;

@interface GOALSLocation : NSObject
{
    double _altitude;
    CLFloor *_floor;
    double _horizontalAccuracy;
    double _verticalAccuracy;
    double _course;
    double _speed;
    NSDate *_timestamp;
    struct CLLocationCoordinate2D _coordinate;
}

@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double speed; // @synthesize speed=_speed;
@property(readonly, nonatomic) double course; // @synthesize course=_course;
@property(readonly, nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(readonly, nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(readonly, copy, nonatomic) CLFloor *floor; // @synthesize floor=_floor;
@property(readonly, nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;

@end

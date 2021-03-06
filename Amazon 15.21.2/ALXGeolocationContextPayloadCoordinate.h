//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@interface ALXGeolocationContextPayloadCoordinate : JSONModel
{
    double _latitudeInDegrees;
    double _longitudeInDegrees;
    double _accuracyInMeters;
}

@property(nonatomic) double accuracyInMeters; // @synthesize accuracyInMeters=_accuracyInMeters;
@property(nonatomic) double longitudeInDegrees; // @synthesize longitudeInDegrees=_longitudeInDegrees;
@property(nonatomic) double latitudeInDegrees; // @synthesize latitudeInDegrees=_latitudeInDegrees;
- (id)initWithLatitude:(double)arg1 andLongitude:(double)arg2 withAccuracy:(double)arg3;

@end


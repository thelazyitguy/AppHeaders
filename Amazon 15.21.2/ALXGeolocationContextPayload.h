//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALXContextPayload.h"

@class ALXGeolocationContextPayloadAltitude, ALXGeolocationContextPayloadCoordinate, ALXGeolocationContextPayloadHeading, ALXGeolocationContextPayloadServiceStatus, ALXGeolocationContextPayloadSpeed, NSString;
@protocol Optional;

@interface ALXGeolocationContextPayload : ALXContextPayload
{
    ALXGeolocationContextPayloadServiceStatus *_locationServices;
    ALXGeolocationContextPayloadCoordinate *_coordinate;
    NSString *_timestamp;
    ALXGeolocationContextPayloadHeading<Optional> *_heading;
    ALXGeolocationContextPayloadSpeed<Optional> *_speed;
    ALXGeolocationContextPayloadAltitude<Optional> *_altitude;
}

@property(retain, nonatomic) ALXGeolocationContextPayloadAltitude<Optional> *altitude; // @synthesize altitude=_altitude;
@property(retain, nonatomic) ALXGeolocationContextPayloadSpeed<Optional> *speed; // @synthesize speed=_speed;
@property(retain, nonatomic) ALXGeolocationContextPayloadHeading<Optional> *heading; // @synthesize heading=_heading;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) ALXGeolocationContextPayloadCoordinate *coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) ALXGeolocationContextPayloadServiceStatus *locationServices; // @synthesize locationServices=_locationServices;
- (void).cxx_destruct;
- (id)createTimestampFromDate:(id)arg1;
- (id)initWithLatitude:(double)arg1 andLongitude:(double)arg2 withAccuracy:(double)arg3 atTime:(id)arg4;

@end


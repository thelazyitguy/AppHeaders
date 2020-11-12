//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMIGeocodingRequest.h"

@class CLGeocoder, CLLocation;

@interface AMIReverseGeocodingRequest : AMIGeocodingRequest
{
    CLGeocoder *_geocoder;
    CLLocation *_location;
}

@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
- (void).cxx_destruct;
- (void)abort;
- (void)execute;
- (id)initWithLocation:(id)arg1 requester:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

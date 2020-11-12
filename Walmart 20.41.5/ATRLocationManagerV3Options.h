//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol ATRILocationSmoothingStrategyFactory;

@interface ATRLocationManagerV3Options : NSObject
{
    NSDictionary *_otherOptions;
    _Bool _useCompassWithBLE;
    _Bool _disableCache;
    int _desiredLocationAuthorizationStatus;
    unsigned long long _locationFilterStrategy;
    id <ATRILocationSmoothingStrategyFactory> _locationSmoothingStrategyFactory;
    unsigned long long _headingFilterStrategy;
    unsigned long long _locationSampleMs;
    unsigned long long _transmitFrequencyMs;
}

@property(readonly) _Bool disableCache; // @synthesize disableCache=_disableCache;
@property(readonly) unsigned long long transmitFrequencyMs; // @synthesize transmitFrequencyMs=_transmitFrequencyMs;
@property(readonly) unsigned long long locationSampleMs; // @synthesize locationSampleMs=_locationSampleMs;
@property(readonly) _Bool useCompassWithBLE; // @synthesize useCompassWithBLE=_useCompassWithBLE;
@property(readonly) unsigned long long headingFilterStrategy; // @synthesize headingFilterStrategy=_headingFilterStrategy;
@property(readonly) id <ATRILocationSmoothingStrategyFactory> locationSmoothingStrategyFactory; // @synthesize locationSmoothingStrategyFactory=_locationSmoothingStrategyFactory;
@property(readonly) unsigned long long locationFilterStrategy; // @synthesize locationFilterStrategy=_locationFilterStrategy;
@property(readonly) int desiredLocationAuthorizationStatus; // @synthesize desiredLocationAuthorizationStatus=_desiredLocationAuthorizationStatus;
- (void).cxx_destruct;
- (id)init;
- (id)initWithBuilder:(id)arg1;

@end

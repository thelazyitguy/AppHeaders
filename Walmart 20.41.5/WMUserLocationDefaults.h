//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WMDefaultsLocationEntry, WMDefaultsLocationHorizontalAccuracyEntry, WMDefaultsStringEntry;

@interface WMUserLocationDefaults : NSObject
{
    WMDefaultsLocationEntry *_locationDefaults;
    WMDefaultsStringEntry *_zipcodeDefaults;
    WMDefaultsLocationHorizontalAccuracyEntry *_locationHorizontalAccuracyDefaults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WMDefaultsLocationHorizontalAccuracyEntry *locationHorizontalAccuracyDefaults; // @synthesize locationHorizontalAccuracyDefaults=_locationHorizontalAccuracyDefaults;
@property(retain, nonatomic) WMDefaultsStringEntry *zipcodeDefaults; // @synthesize zipcodeDefaults=_zipcodeDefaults;
@property(retain, nonatomic) WMDefaultsLocationEntry *locationDefaults; // @synthesize locationDefaults=_locationDefaults;
- (void)clear;
@property(nonatomic) double lastLocationHorizontalAccuracy;
@property(copy, nonatomic) NSString *zipcode;
@property(nonatomic) struct CLLocationCoordinate2D lastLocationCoordinate;
- (id)init;

@end

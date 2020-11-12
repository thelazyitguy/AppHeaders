//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface UAProximityRegion : NSObject
{
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_RSSI;
    NSString *_proximityID;
    NSNumber *_major;
    NSNumber *_minor;
}

+ (id)proximityRegionWithID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *minor; // @synthesize minor=_minor;
@property(retain, nonatomic) NSNumber *major; // @synthesize major=_major;
@property(copy, nonatomic) NSString *proximityID; // @synthesize proximityID=_proximityID;
@property(retain, nonatomic) NSNumber *RSSI; // @synthesize RSSI=_RSSI;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
- (_Bool)isValid;

@end

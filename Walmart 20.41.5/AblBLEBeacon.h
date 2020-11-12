//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AblBLEBeacon : NSObject
{
    int floorSpaceId;
    NSString *beaconId;
    double floorAdjustedRSSI;
    struct CGPoint centroid;
}

@property(readonly, nonatomic) double floorAdjustedRSSI; // @synthesize floorAdjustedRSSI;
@property(readonly, nonatomic) int floorSpaceId; // @synthesize floorSpaceId;
@property(readonly, nonatomic) struct CGPoint centroid; // @synthesize centroid;
@property(readonly, nonatomic) NSString *beaconId; // @synthesize beaconId;
- (void).cxx_destruct;
- (id)initWithBeaconId:(id)arg1 withCentroid:(struct CGPoint)arg2 withFloorSpaceId:(int)arg3 withFloorAdjustedRSSI:(double)arg4;

@end

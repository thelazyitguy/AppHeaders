//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAV4Status, NSArray, NSData, NSNumber;

@interface MATraceResponseV4 : NSObject
{
    MAV4Status *_status;
    NSArray *_points;
    NSNumber *_distance;
    NSData *_responseData;
}

@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(readonly, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) NSArray *points; // @synthesize points=_points;
@property(readonly, nonatomic) MAV4Status *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)isSuccess;
- (id)initWithResposeData:(id)arg1;

@end

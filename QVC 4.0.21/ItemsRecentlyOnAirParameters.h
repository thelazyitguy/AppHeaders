//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QCRequestParameters.h"

@class NSString;

@interface ItemsRecentlyOnAirParameters : QCRequestParameters
{
    NSString *channelCode;
    NSString *startDateTime;
    NSString *mediaType;
    NSString *numberOfHours;
    NSString *pgSelectedTime;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *pgSelectedTime; // @synthesize pgSelectedTime;
@property(copy, nonatomic) NSString *numberOfHours; // @synthesize numberOfHours;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType;
@property(copy, nonatomic) NSString *startDateTime; // @synthesize startDateTime;
@property(copy, nonatomic) NSString *channelCode; // @synthesize channelCode;
- (id)initWithChannel:(id)arg1 withProgramDate:(id)arg2 selectedPGTime:(id)arg3;
- (id)initWithChannel:(id)arg1 withProgramDate:(id)arg2 numHrs:(id)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString, UAScheduleDelayData;

@interface UAScheduleData : NSManagedObject
{
}

- (_Bool)isExpired;
- (_Bool)isOverLimit;
@property(retain, nonatomic) NSNumber *executionState; // @dynamic executionState;

// Remaining properties
@property(retain, nonatomic) NSString *data; // @dynamic data;
@property(retain, nonatomic) NSNumber *dataVersion; // @dynamic dataVersion;
@property(retain, nonatomic) UAScheduleDelayData *delay; // @dynamic delay;
@property(retain, nonatomic) NSDate *delayedExecutionDate; // @dynamic delayedExecutionDate;
@property(retain, nonatomic) NSNumber *editGracePeriod; // @dynamic editGracePeriod;
@property(retain, nonatomic) NSDate *end; // @dynamic end;
@property(retain, nonatomic) NSDate *executionStateChangeDate; // @dynamic executionStateChangeDate;
@property(retain, nonatomic) NSString *group; // @dynamic group;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSNumber *interval; // @dynamic interval;
@property(retain, nonatomic) NSNumber *limit; // @dynamic limit;
@property(retain, nonatomic) NSString *metadata; // @dynamic metadata;
@property(retain, nonatomic) NSNumber *priority; // @dynamic priority;
@property(retain, nonatomic) NSDate *start; // @dynamic start;
@property(retain, nonatomic) NSNumber *triggeredCount; // @dynamic triggeredCount;
@property(retain, nonatomic) NSSet *triggers; // @dynamic triggers;

@end

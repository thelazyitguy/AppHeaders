//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBEnumArray, GTPTimeOfDay;

@interface GRWSTimeConstraintCondition : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *allowedDaysArray; // @dynamic allowedDaysArray;
@property(readonly, nonatomic) unsigned long long allowedDaysArray_Count; // @dynamic allowedDaysArray_Count;
@property(retain, nonatomic) GTPTimeOfDay *endTime; // @dynamic endTime;
@property(nonatomic) _Bool hasEndTime; // @dynamic hasEndTime;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(retain, nonatomic) GTPTimeOfDay *startTime; // @dynamic startTime;

@end


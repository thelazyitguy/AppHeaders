//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface YTIOpportunityData_DebugData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *associatedSlotId; // @dynamic associatedSlotId;
@property(nonatomic) _Bool hasAssociatedSlotId; // @dynamic hasAssociatedSlotId;
@property(retain, nonatomic) NSMutableArray *slotsArray; // @dynamic slotsArray;
@property(readonly, nonatomic) unsigned long long slotsArray_Count; // @dynamic slotsArray_Count;

@end


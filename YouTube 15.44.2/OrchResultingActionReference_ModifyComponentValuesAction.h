//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBInt64Array;

@interface OrchResultingActionReference_ModifyComponentValuesAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasListType; // @dynamic hasListType;
@property(nonatomic) _Bool hasModifyType; // @dynamic hasModifyType;
@property(nonatomic) int listType; // @dynamic listType;
@property(nonatomic) int modifyType; // @dynamic modifyType;
@property(retain, nonatomic) GPBInt64Array *valueIdArray; // @dynamic valueIdArray;
@property(readonly, nonatomic) unsigned long long valueIdArray_Count; // @dynamic valueIdArray_Count;

@end

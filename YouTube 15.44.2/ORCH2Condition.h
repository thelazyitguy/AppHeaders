//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBInt64Array;

@interface ORCH2Condition : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int conditionId; // @dynamic conditionId;
@property(retain, nonatomic) GPBInt64Array *eventRuleIdArray; // @dynamic eventRuleIdArray;
@property(readonly, nonatomic) unsigned long long eventRuleIdArray_Count; // @dynamic eventRuleIdArray_Count;
@property(nonatomic) int extensionFieldNumber; // @dynamic extensionFieldNumber;
@property(nonatomic) _Bool hasConditionId; // @dynamic hasConditionId;
@property(nonatomic) _Bool hasExtensionFieldNumber; // @dynamic hasExtensionFieldNumber;
@property(nonatomic) _Bool hasNotSatisfied; // @dynamic hasNotSatisfied;
@property(nonatomic) _Bool notSatisfied; // @dynamic notSatisfied;

@end

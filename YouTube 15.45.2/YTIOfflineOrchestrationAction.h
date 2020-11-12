//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIOfflineOrchestrationActionMetadata;

@interface YTIOfflineOrchestrationAction : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(retain, nonatomic) YTIOfflineOrchestrationActionMetadata *actionMetadata; // @dynamic actionMetadata;
@property(nonatomic) int actionType; // @dynamic actionType;
@property(retain, nonatomic) NSMutableArray *chainedActionsArray; // @dynamic chainedActionsArray;
@property(readonly, nonatomic) unsigned long long chainedActionsArray_Count; // @dynamic chainedActionsArray_Count;
@property(copy, nonatomic) NSString *entityKey; // @dynamic entityKey;
@property(nonatomic) _Bool hasActionMetadata; // @dynamic hasActionMetadata;
@property(nonatomic) _Bool hasActionType; // @dynamic hasActionType;
@property(nonatomic) _Bool hasEntityKey; // @dynamic hasEntityKey;

@end

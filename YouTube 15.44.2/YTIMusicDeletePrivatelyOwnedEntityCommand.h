//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface YTIMusicDeletePrivatelyOwnedEntityCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *entityId; // @dynamic entityId;
@property(nonatomic) _Bool hasEntityId; // @dynamic hasEntityId;
@property(retain, nonatomic) NSMutableArray *optimisticCommandsArray; // @dynamic optimisticCommandsArray;
@property(readonly, nonatomic) unsigned long long optimisticCommandsArray_Count; // @dynamic optimisticCommandsArray_Count;

@end


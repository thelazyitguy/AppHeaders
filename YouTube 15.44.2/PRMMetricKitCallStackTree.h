//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray;

@interface PRMMetricKitCallStackTree : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool callStackPerThread; // @dynamic callStackPerThread;
@property(retain, nonatomic) NSMutableArray *callStacksArray; // @dynamic callStacksArray;
@property(readonly, nonatomic) unsigned long long callStacksArray_Count; // @dynamic callStacksArray_Count;
@property(nonatomic) _Bool hasCallStackPerThread; // @dynamic hasCallStackPerThread;

@end

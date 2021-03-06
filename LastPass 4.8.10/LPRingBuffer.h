//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSMutableArray;

@interface LPRingBuffer : NSObject <NSFastEnumeration>
{
    unsigned long long _capacity;
    unsigned long long _count;
    NSMutableArray *_buffer;
    unsigned long long _start;
    unsigned long long _mutationCounter;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mutationCounter; // @synthesize mutationCounter=_mutationCounter;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
@property(readonly, nonatomic) NSMutableArray *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)pop;
- (void)push:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilHashMap_HashMapSpliterator.h"

#import "JavaUtilSpliterator-Protocol.h"

@class NSString;

@interface JavaUtilHashMap_EntrySpliterator : JavaUtilHashMap_HashMapSpliterator <JavaUtilSpliterator>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)getComparator;
- (_Bool)hasCharacteristicsWithInt:(int)arg1;
- (long long)getExactSizeIfKnown;
- (int)characteristics;
- (_Bool)tryAdvanceWithJavaUtilFunctionConsumer:(id)arg1;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (id)trySplit;
- (id)initWithJavaUtilHashMap:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractSet.h"

#import "JavaUtilNavigableSet-Protocol.h"

@class NSString;
@protocol JavaUtilConcurrentConcurrentNavigableMap;

@interface JavaUtilConcurrentConcurrentSkipListMap_KeySet : JavaUtilAbstractSet <JavaUtilNavigableSet>
{
    id <JavaUtilConcurrentConcurrentNavigableMap> m_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)spliterator;
- (id)descendingSet;
- (id)tailSetWithId:(id)arg1;
- (id)headSetWithId:(id)arg1;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)tailSetWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)headSetWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)subSetWithId:(id)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4;
- (id)descendingIterator;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (_Bool)isEqual:(id)arg1;
- (id)iterator;
- (id)pollLast;
- (id)pollFirst;
- (id)last;
- (id)first;
- (id)comparator;
- (id)higherWithId:(id)arg1;
- (id)ceilingWithId:(id)arg1;
- (id)floorWithId:(id)arg1;
- (id)lowerWithId:(id)arg1;
- (void)clear;
- (_Bool)removeWithId:(id)arg1;
- (_Bool)containsWithId:(id)arg1;
- (_Bool)isEmpty;
- (int)size;
- (id)initWithJavaUtilConcurrentConcurrentNavigableMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

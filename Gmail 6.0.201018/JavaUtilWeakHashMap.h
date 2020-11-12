//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractMap.h"

#import "JavaUtilMap-Protocol.h"

@class IOSObjectArray, JavaLangRefReferenceQueue, NSString;
@protocol JavaUtilSet;

@interface JavaUtilWeakHashMap : JavaUtilAbstractMap <JavaUtilMap>
{
    IOSObjectArray *table_;
    int modCount_;
    int size_;
    int threshold_;
    float loadFactor_;
    JavaLangRefReferenceQueue *queue_;
    id <JavaUtilSet> entrySet_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)indexForWithInt:(int)arg1 withInt:(int)arg2;
+ (_Bool)eqWithId:(id)arg1 withId:(id)arg2;
+ (id)unmaskNullWithId:(id)arg1;
+ (id)maskNullWithId:(id)arg1;
- (void)dealloc;
- (void)replaceAllWithJavaUtilFunctionBiFunction:(id)arg1;
- (void)forEachWithJavaUtilFunctionBiConsumer:(id)arg1;
- (id)entrySet;
- (id)values;
- (id)keySet;
- (_Bool)containsNullValue;
- (_Bool)containsValueWithId:(id)arg1;
- (void)clear;
- (_Bool)removeMappingWithId:(id)arg1;
- (id)removeWithId:(id)arg1;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (void)transferWithJavaUtilWeakHashMap_EntryArray:(id)arg1 withJavaUtilWeakHashMap_EntryArray:(id)arg2;
- (void)resizeWithInt:(int)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)getEntryWithId:(id)arg1;
- (_Bool)containsKeyWithId:(id)arg1;
- (id)getWithId:(id)arg1;
- (_Bool)isEmpty;
- (int)size;
- (id)getTable;
- (void)expungeStaleEntries;
- (int)hash__WithId:(id)arg1;
- (id)initWithJavaUtilMap:(id)arg1;
- (id)init;
- (id)initWithInt:(int)arg1;
- (id)initWithInt:(int)arg1 withFloat:(float)arg2;
- (id)newTableWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

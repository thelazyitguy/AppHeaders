//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilSet-Protocol.h"

@class IOSClass, NSString;
@protocol JavaUtilSet;

@interface JavaUtilCollections_CheckedMap_CheckedEntrySet : NSObject <JavaUtilSet>
{
    id <JavaUtilSet> s_;
    IOSClass *valueType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)checkedEntryWithJavaUtilMap_Entry:(id)arg1 withIOSClass:(id)arg2;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)forEachWithJavaUtilFunctionConsumer:(id)arg1;
- (id)parallelStream;
- (id)stream;
- (_Bool)removeIfWithJavaUtilFunctionPredicate:(id)arg1;
- (id)spliterator;
- (_Bool)isEqual:(id)arg1;
- (_Bool)batchRemoveWithJavaUtilCollection:(id)arg1 withBoolean:(_Bool)arg2;
- (_Bool)retainAllWithJavaUtilCollection:(id)arg1;
- (_Bool)removeAllWithJavaUtilCollection:(id)arg1;
- (_Bool)removeWithId:(id)arg1;
- (_Bool)containsAllWithJavaUtilCollection:(id)arg1;
- (_Bool)containsWithId:(id)arg1;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (id)iterator;
- (_Bool)addAllWithJavaUtilCollection:(id)arg1;
- (_Bool)addWithId:(id)arg1;
- (void)clear;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isEmpty;
- (int)size;
- (id)initWithJavaUtilSet:(id)arg1 withIOSClass:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

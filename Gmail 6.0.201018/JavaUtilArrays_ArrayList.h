//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractList.h"

#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilRandomAccess-Protocol.h"

@class IOSObjectArray, NSString;

@interface JavaUtilArrays_ArrayList : JavaUtilAbstractList <JavaUtilRandomAccess, JavaIoSerializable>
{
    IOSObjectArray *a_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)sortWithJavaUtilComparator:(id)arg1;
- (void)replaceAllWithJavaUtilFunctionUnaryOperator:(id)arg1;
- (void)forEachWithJavaUtilFunctionConsumer:(id)arg1;
- (id)spliterator;
- (_Bool)containsWithId:(id)arg1;
- (int)indexOfWithId:(id)arg1;
- (id)setWithInt:(int)arg1 withId:(id)arg2;
- (id)getWithInt:(int)arg1;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (int)size;
- (id)initWithNSObjectArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

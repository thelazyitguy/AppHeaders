//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractSet.h"

@class JavaUtilTreeMap;

@interface JavaUtilTreeMap_EntrySet : JavaUtilAbstractSet
{
    JavaUtilTreeMap *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void).cxx_destruct;
- (oneway void)release;
- (id)retain;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)__javaClone:(id)arg1;
- (id)spliterator;
- (void)clear;
- (int)size;
- (_Bool)removeWithId:(id)arg1;
- (_Bool)containsWithId:(id)arg1;
- (id)iterator;
- (id)initWithJavaUtilTreeMap:(id)arg1;

@end

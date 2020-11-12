//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectForwardingObject.h"

#import "JavaUtilMap-Protocol.h"

@class NSString;

@interface ComGoogleCommonCollectForwardingMap : ComGoogleCommonCollectForwardingObject <JavaUtilMap>
{
}

- (id)mergeWithId:(id)arg1 withId:(id)arg2 withJavaUtilFunctionBiFunction:(id)arg3;
- (id)computeWithId:(id)arg1 withJavaUtilFunctionBiFunction:(id)arg2;
- (id)computeIfPresentWithId:(id)arg1 withJavaUtilFunctionBiFunction:(id)arg2;
- (id)computeIfAbsentWithId:(id)arg1 withJavaUtilFunctionFunction:(id)arg2;
- (id)replaceWithId:(id)arg1 withId:(id)arg2;
- (_Bool)replaceWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3;
- (_Bool)removeWithId:(id)arg1 withId:(id)arg2;
- (id)putIfAbsentWithId:(id)arg1 withId:(id)arg2;
- (void)replaceAllWithJavaUtilFunctionBiFunction:(id)arg1;
- (void)forEachWithJavaUtilFunctionBiConsumer:(id)arg1;
- (id)getOrDefaultWithId:(id)arg1 withId:(id)arg2;
- (id)standardToString;
- (int)standardHashCode;
- (_Bool)standardEqualsWithId:(id)arg1;
- (_Bool)standardIsEmpty;
- (_Bool)standardContainsValueWithId:(id)arg1;
- (_Bool)standardContainsKeyWithId:(id)arg1;
- (void)standardClear;
- (id)standardRemoveWithId:(id)arg1;
- (void)standardPutAllWithJavaUtilMap:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)entrySet;
- (id)values;
- (id)keySet;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)getWithId:(id)arg1;
- (_Bool)containsValueWithId:(id)arg1;
- (_Bool)containsKeyWithId:(id)arg1;
- (void)clear;
- (id)removeWithId:(id)arg1;
- (_Bool)isEmpty;
- (int)size;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

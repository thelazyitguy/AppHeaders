//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectSynchronized_SynchronizedObject.h"

#import "ComGoogleCommonCollectMultimap-Protocol.h"

@class NSString;
@protocol ComGoogleCommonCollectMultiset, JavaUtilCollection, JavaUtilMap, JavaUtilSet;

@interface ComGoogleCommonCollectSynchronized_SynchronizedMultimap : ComGoogleCommonCollectSynchronized_SynchronizedObject <ComGoogleCommonCollectMultimap>
{
    id <JavaUtilSet> keySet_;
    id <JavaUtilCollection> valuesCollection_;
    id <JavaUtilCollection> entries_;
    id <JavaUtilMap> asMap_;
    id <ComGoogleCommonCollectMultiset> keys_;
}

- (void)dealloc;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)keys;
- (id)asMap;
- (void)forEachWithJavaUtilFunctionBiConsumer:(id)arg1;
- (id)entries;
- (id)values;
- (id)keySet;
- (void)clear;
- (id)removeAllWithId:(id)arg1;
- (_Bool)removeWithId:(id)arg1 withId:(id)arg2;
- (id)replaceValuesWithId:(id)arg1 withJavaLangIterable:(id)arg2;
- (_Bool)putAllWithComGoogleCommonCollectMultimap:(id)arg1;
- (_Bool)putAllWithId:(id)arg1 withJavaLangIterable:(id)arg2;
- (_Bool)putWithId:(id)arg1 withId:(id)arg2;
- (id)getWithId:(id)arg1;
- (_Bool)containsEntryWithId:(id)arg1 withId:(id)arg2;
- (_Bool)containsValueWithId:(id)arg1;
- (_Bool)containsKeyWithId:(id)arg1;
- (_Bool)isEmpty;
- (int)size;
- (id)delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

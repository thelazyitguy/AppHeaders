//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMultiset.h"

#import "JavaIoSerializable-Protocol.h"

@class NSString;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectAbstractMapBasedMultiset : ComGoogleCommonCollectAbstractMultiset <JavaIoSerializable>
{
    id <JavaUtilMap> backingMap_;
    long long size_;
}

- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (int)setCountWithId:(id)arg1 withInt:(int)arg2;
- (int)removeWithId:(id)arg1 withInt:(int)arg2;
- (int)addWithId:(id)arg1 withInt:(int)arg2;
- (int)countWithId:(id)arg1;
- (id)iterator;
- (int)size;
- (int)distinctElements;
- (void)clear;
- (void)forEachEntryWithJavaUtilFunctionObjIntConsumer:(id)arg1;
- (id)entryIterator;
- (id)elementIterator;
- (id)entrySet;
- (void)setBackingMapWithJavaUtilMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

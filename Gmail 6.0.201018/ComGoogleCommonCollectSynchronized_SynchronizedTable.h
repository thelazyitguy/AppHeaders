//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectSynchronized_SynchronizedObject.h"

#import "ComGoogleCommonCollectTable-Protocol.h"

@class NSString;

@interface ComGoogleCommonCollectSynchronized_SynchronizedTable : ComGoogleCommonCollectSynchronized_SynchronizedObject <ComGoogleCommonCollectTable>
{
}

- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)columnMap;
- (id)rowMap;
- (id)values;
- (id)columnKeySet;
- (id)rowKeySet;
- (id)cellSet;
- (id)columnWithId:(id)arg1;
- (id)rowWithId:(id)arg1;
- (id)removeWithId:(id)arg1 withId:(id)arg2;
- (void)putAllWithComGoogleCommonCollectTable:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3;
- (void)clear;
- (int)size;
- (_Bool)isEmpty;
- (id)getWithId:(id)arg1 withId:(id)arg2;
- (_Bool)containsValueWithId:(id)arg1;
- (_Bool)containsColumnWithId:(id)arg1;
- (_Bool)containsRowWithId:(id)arg1;
- (_Bool)containsWithId:(id)arg1 withId:(id)arg2;
- (id)delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

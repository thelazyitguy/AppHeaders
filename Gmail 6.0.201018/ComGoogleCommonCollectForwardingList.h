//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectForwardingCollection.h"

#import "JavaUtilList-Protocol.h"

@class NSString;

@interface ComGoogleCommonCollectForwardingList : ComGoogleCommonCollectForwardingCollection <JavaUtilList>
{
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)spliterator;
- (void)sortWithJavaUtilComparator:(id)arg1;
- (void)replaceAllWithJavaUtilFunctionUnaryOperator:(id)arg1;
- (int)standardHashCode;
- (_Bool)standardEqualsWithId:(id)arg1;
- (id)standardSubListWithInt:(int)arg1 withInt:(int)arg2;
- (id)standardListIteratorWithInt:(int)arg1;
- (id)standardListIterator;
- (id)standardIterator;
- (int)standardLastIndexOfWithId:(id)arg1;
- (int)standardIndexOfWithId:(id)arg1;
- (_Bool)standardAddAllWithInt:(int)arg1 withJavaLangIterable:(id)arg2;
- (_Bool)standardAddWithId:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)subListWithInt:(int)arg1 withInt:(int)arg2;
- (id)setWithInt:(int)arg1 withId:(id)arg2;
- (id)removeWithInt:(int)arg1;
- (id)listIteratorWithInt:(int)arg1;
- (id)listIterator;
- (int)lastIndexOfWithId:(id)arg1;
- (int)indexOfWithId:(id)arg1;
- (id)getWithInt:(int)arg1;
- (_Bool)addAllWithInt:(int)arg1 withJavaUtilCollection:(id)arg2;
- (void)addWithInt:(int)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


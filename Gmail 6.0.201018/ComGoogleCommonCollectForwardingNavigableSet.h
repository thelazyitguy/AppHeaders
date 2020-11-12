//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectForwardingSortedSet.h"

#import "JavaUtilNavigableSet-Protocol.h"

@class NSString;

@interface ComGoogleCommonCollectForwardingNavigableSet : ComGoogleCommonCollectForwardingSortedSet <JavaUtilNavigableSet>
{
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)standardTailSetWithId:(id)arg1;
- (id)tailSetWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)standardHeadSetWithId:(id)arg1;
- (id)headSetWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)standardSubSetWithId:(id)arg1 withId:(id)arg2;
- (id)standardSubSetWithId:(id)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4;
- (id)subSetWithId:(id)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4;
- (id)descendingIterator;
- (id)descendingSet;
- (id)standardLast;
- (id)standardFirst;
- (id)standardPollLast;
- (id)pollLast;
- (id)standardPollFirst;
- (id)pollFirst;
- (id)standardHigherWithId:(id)arg1;
- (id)higherWithId:(id)arg1;
- (id)standardCeilingWithId:(id)arg1;
- (id)ceilingWithId:(id)arg1;
- (id)standardFloorWithId:(id)arg1;
- (id)floorWithId:(id)arg1;
- (id)standardLowerWithId:(id)arg1;
- (id)lowerWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

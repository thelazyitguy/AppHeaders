//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectForwardingNavigableSet.h"

@protocol JavaUtilNavigableSet;

@interface ComGoogleCommonCollectMaps_6 : ComGoogleCommonCollectForwardingNavigableSet
{
    id <JavaUtilNavigableSet> val$set_;
}

- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)descendingSet;
- (id)tailSetWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)tailSetWithId:(id)arg1;
- (id)subSetWithId:(id)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)headSetWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)headSetWithId:(id)arg1;
- (_Bool)addAllWithJavaUtilCollection:(id)arg1;
- (_Bool)addWithId:(id)arg1;
- (id)delegate;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractNavigableMap.h"

@protocol ComGoogleCommonBaseFunction, JavaUtilNavigableSet;

@interface ComGoogleCommonCollectMaps_NavigableAsMapView : ComGoogleCommonCollectAbstractNavigableMap
{
    id <JavaUtilNavigableSet> set_;
    id <ComGoogleCommonBaseFunction> function_;
}

- (void)dealloc;
- (id)descendingMap;
- (int)size;
- (id)navigableKeySet;
- (id)descendingEntryIterator;
- (void)forEachWithJavaUtilFunctionBiConsumer:(id)arg1;
- (id)entrySpliterator;
- (id)entryIterator;
- (void)clear;
- (id)getOrDefaultWithId:(id)arg1 withId:(id)arg2;
- (id)getWithId:(id)arg1;
- (id)comparator;
- (id)tailMapWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)headMapWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)subMapWithId:(id)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4;

@end

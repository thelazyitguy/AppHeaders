//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap.h"

@class JavaUtilEnumMap;

@interface ComGoogleCommonCollectImmutableEnumMap : ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap
{
    JavaUtilEnumMap *delegate_;
}

- (void)dealloc;
- (_Bool)isPartialView;
- (void)forEachWithJavaUtilFunctionBiConsumer:(id)arg1;
- (id)entrySpliterator;
- (id)entryIterator;
- (_Bool)isEqual:(id)arg1;
- (id)getWithId:(id)arg1;
- (_Bool)containsKeyWithId:(id)arg1;
- (int)size;
- (id)keySpliterator;
- (id)keyIterator;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractMap.h"

@protocol JavaUtilCollection, JavaUtilSet;

@interface ComGoogleCommonCollectMaps_ViewCachingAbstractMap : JavaUtilAbstractMap
{
    id <JavaUtilSet> entrySet_;
    id <JavaUtilSet> keySet_ViewCachingAbstractMap_;
    id <JavaUtilCollection> values_ViewCachingAbstractMap_;
}

- (void)dealloc;
- (id)createValues;
- (id)values;
- (id)createKeySet;
- (id)keySet;
- (id)entrySet;

@end

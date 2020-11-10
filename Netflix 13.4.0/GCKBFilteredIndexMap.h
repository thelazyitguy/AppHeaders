//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GCKBFilteredIndexMap : NSObject
{
    NSMutableArray *_map;
    NSMutableArray *_reverseMap;
}

- (void).cxx_destruct;
- (id)description;
- (void)dump;
- (void)clear;
- (long long)filteredIndexForIndex:(unsigned long long)arg1;
- (long long)indexForFilteredIndex:(unsigned long long)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (void)insertIndex:(unsigned long long)arg1 matchesFilter:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long filteredIndexCount;
@property(readonly, nonatomic) unsigned long long indexCount;
- (id)init;

@end


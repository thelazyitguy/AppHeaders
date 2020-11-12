//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/_TtC6Charts16ChartBaseDataSet.h>

@class NSArray;

@interface _TtC6Charts12ChartDataSet : _TtC6Charts16ChartBaseDataSet
{
    // Error parsing type: , name: entries
    // Error parsing type: , name: _yMax
    // Error parsing type: , name: _yMin
    // Error parsing type: , name: _xMax
    // Error parsing type: , name: _xMin
}

- (void).cxx_destruct;
- (id)copyWithZone:(void *)arg1;
- (void)clear;
- (_Bool)removeLast;
- (_Bool)removeFirst;
- (_Bool)removeEntry:(id)arg1;
- (_Bool)addEntryOrdered:(id)arg1;
- (_Bool)addEntry:(id)arg1;
- (long long)entryIndexWithEntry:(id)arg1;
- (long long)entryIndexWithX:(double)arg1 closestToY:(double)arg2 rounding:(long long)arg3;
- (id)entriesForXValue:(double)arg1;
- (id)entryForXValue:(double)arg1 closestToY:(double)arg2;
- (id)entryForXValue:(double)arg1 closestToY:(double)arg2 rounding:(long long)arg3;
- (id)entryForIndex:(long long)arg1;
@property(nonatomic, readonly) long long entryCount;
@property(nonatomic, readonly) double xMax;
@property(nonatomic, readonly) double xMin;
@property(nonatomic, readonly) double yMax;
@property(nonatomic, readonly) double yMin;
- (void)calcMinMaxYWithEntry:(id)arg1;
- (void)calcMinMaxXWithEntry:(id)arg1;
- (void)calcMinMaxYFromX:(double)arg1 toX:(double)arg2;
- (void)calcMinMax;
- (void)replaceEntries:(id)arg1;
@property(nonatomic, copy) NSArray *entries;
@property(nonatomic, readonly) NSArray *values;
- (id)initWithEntries:(id)arg1;
- (id)initWithEntries:(id)arg1 label:(id)arg2;
- (id)initWithLabel:(id)arg1;
- (id)init;

@end

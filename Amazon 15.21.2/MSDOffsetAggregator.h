//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MSDOffsetAggregator : NSObject
{
    unsigned long long _aggregatedOffset;
    NSMutableDictionary *_offsetValues;
}

@property(retain, nonatomic) NSMutableDictionary *offsetValues; // @synthesize offsetValues=_offsetValues;
@property(nonatomic) unsigned long long aggregatedOffset; // @synthesize aggregatedOffset=_aggregatedOffset;
- (void).cxx_destruct;
- (void)removeOffsetForKey:(id)arg1;
- (void)addOffset:(unsigned long long)arg1 withKey:(id)arg2;
- (id)init;

@end

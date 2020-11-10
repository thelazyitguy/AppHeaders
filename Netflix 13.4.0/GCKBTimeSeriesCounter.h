//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GCKBTimeSeriesCounter : NSObject
{
    unsigned long long _numBuckets;
    double _bucketDuration;
    NSMutableArray *_buckets;
    unsigned long long _currentBucketIndex;
    NSDate *_currentBucketStartTime;
    unsigned long long _maxCounter;
    unsigned long long _totalCounter;
    unsigned long long _currentIntervalCounter;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long currentIntervalCounter; // @synthesize currentIntervalCounter=_currentIntervalCounter;
@property(nonatomic) unsigned long long totalCounter; // @synthesize totalCounter=_totalCounter;
@property(nonatomic) unsigned long long maxCounter; // @synthesize maxCounter=_maxCounter;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCurrentIntervalCounter;
- (void)resetCurrentIntervalCounter;
- (void)incrementBy:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithBucketNumber:(unsigned long long)arg1 counterInterval:(double)arg2;
- (id)initWithCounterInterval:(double)arg1;

@end


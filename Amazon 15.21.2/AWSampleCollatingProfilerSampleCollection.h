//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWSampleCollatingProfilerSampleCollection : NSObject
{
    float _aggregateMilliseconds;
    unsigned long long _numSamples;
}

@property(nonatomic) float aggregateMilliseconds; // @synthesize aggregateMilliseconds=_aggregateMilliseconds;
@property(nonatomic) unsigned long long numSamples; // @synthesize numSamples=_numSamples;
- (void)clearSamples;
- (void)addSample:(float)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCTClearcutLogTransformer-Protocol.h"

@class FPRConfigurations, NSString;

@interface FPRLogSampler : NSObject <CCTClearcutLogTransformer>
{
    FPRConfigurations *_flags;
    double _samplingBucketId;
}

@property(readonly, nonatomic) double samplingBucketId; // @synthesize samplingBucketId=_samplingBucketId;
@property(readonly, nonatomic) FPRConfigurations *flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (_Bool)shouldSampleEvent:(id)arg1;
- (id)transform:(id)arg1;
- (id)initWithFlags:(id)arg1 samplingThreshold:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

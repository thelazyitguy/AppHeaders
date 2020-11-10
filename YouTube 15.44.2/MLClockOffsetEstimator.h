//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLClockOffsetEstimator-Protocol.h>

@class NSString;
@protocol HAMClock;

@interface MLClockOffsetEstimator : NSObject <MLClockOffsetEstimator>
{
    id <HAMClock> _clock;
    struct CircularBuffer<double> _measuredOffsets;
    double _measuredOffsetsTotal;
    double _clockOffset;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) double clockOffset; // @synthesize clockOffset=_clockOffset;
- (void)networkRequestDidReceiveResponseWithEvent:(id)arg1;
- (void)clear;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


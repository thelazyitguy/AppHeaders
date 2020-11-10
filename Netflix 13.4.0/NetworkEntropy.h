//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFPlatformCommon/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface NetworkEntropy : NSObject <NSCopying>
{
    NSArray *_bitrateLadders;
    NSMutableArray *_transitStates;
    NSMutableArray *_firstState;
    NSMutableArray *_prevState;
    NSMutableArray *_rollingWindow;
    long long _minSamples;
}

+ (id)calcEntropy:(id)arg1 digits:(long long)arg2;
+ (long long)arrayAverage:(id)arg1;
+ (long long)quantize:(id)arg1 throughput:(long long)arg2;
+ (id)integerArrayOfSize:(long long)arg1;
+ (id)cellularBitrateLadder;
+ (id)hdBitrateLadder;
+ (id)uhdBitrateLadder;
- (void).cxx_destruct;
@property(nonatomic) long long minSamples; // @synthesize minSamples=_minSamples;
@property(retain, nonatomic) NSMutableArray *rollingWindow; // @synthesize rollingWindow=_rollingWindow;
@property(retain, nonatomic) NSMutableArray *prevState; // @synthesize prevState=_prevState;
@property(retain, nonatomic) NSMutableArray *firstState; // @synthesize firstState=_firstState;
@property(retain, nonatomic) NSMutableArray *transitStates; // @synthesize transitStates=_transitStates;
@property(copy, nonatomic) NSArray *bitrateLadders; // @synthesize bitrateLadders=_bitrateLadders;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_addSmoothedThroughputMeasurement:(long long)arg1;
- (void)addThroughputMeasurement:(long long)arg1;
- (id)calcEntropy:(long long)arg1;
- (double)computeMatrixEntropy:(id)arg1;
- (id)init;

@end


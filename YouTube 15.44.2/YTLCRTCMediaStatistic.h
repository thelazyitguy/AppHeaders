//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTLCRTCMediaStatistic : NSObject
{
    double _rate;
    double _previousTime;
    long long _previousCount;
}

@property(nonatomic) long long previousCount; // @synthesize previousCount=_previousCount;
@property(nonatomic) double previousTime; // @synthesize previousTime=_previousTime;
@property(readonly, nonatomic) double rate; // @synthesize rate=_rate;
- (void)updateRateWithCurrentCount:(long long)arg1;

@end


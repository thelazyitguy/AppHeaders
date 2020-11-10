//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTTimeKeeper;

@interface SPTImageLoaderTimeMeasurementFactory : NSObject
{
    id <SPTTimeKeeper> _timeKeeper;
    long long _samplingPercentage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long samplingPercentage; // @synthesize samplingPercentage=_samplingPercentage;
@property(readonly, nonatomic) id <SPTTimeKeeper> timeKeeper; // @synthesize timeKeeper=_timeKeeper;
- (id)createTimeMeasurementBuilder;
- (id)initWithTimeKeeper:(id)arg1 samplingPercentage:(long long)arg2;

@end


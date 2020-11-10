//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GAZOTPGenerator.h>

@interface GAZTHOTPGenerator : GAZOTPGenerator
{
    long long _counterDigits;
    double _period;
    long long _counter;
}

+ (long long)defaultCounterDigits;
@property(readonly, nonatomic) long long counter; // @synthesize counter=_counter;
- (long long)truncatedCounter;
- (id)generateOTPForDate:(id)arg1 extraChallenge:(id)arg2;
- (id)generateOTPWithExtraChallenge:(id)arg1;
- (id)generateOTP;
- (void)incrementCounter;
- (id)initWithSecret:(id)arg1 algorithm:(id)arg2 digits:(long long)arg3 counterDigits:(long long)arg4 counter:(long long)arg5 period:(double)arg6 truncationAlgorithm:(unsigned long long)arg7;

@end


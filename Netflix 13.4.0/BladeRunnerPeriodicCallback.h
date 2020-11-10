//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MonoClockTimestamp, NSString;
@protocol NSObject, OS_dispatch_queue;

@interface BladeRunnerPeriodicCallback : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <NSObject> _context;
    CDUnknownBlockType _callback;
    NSString *_generationString;
    unsigned long long _minimumFrequencyInMS;
    NSObject<OS_dispatch_queue> *_processingQueue;
    MonoClockTimestamp *_lastCallbackTimestamp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MonoClockTimestamp *lastCallbackTimestamp; // @synthesize lastCallbackTimestamp=_lastCallbackTimestamp;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(nonatomic) unsigned long long minimumFrequencyInMS; // @synthesize minimumFrequencyInMS=_minimumFrequencyInMS;
@property(retain, nonatomic) NSString *generationString; // @synthesize generationString=_generationString;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) id <NSObject> context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void)pingCallbackTimer;
- (void)startWithMinimumFrequency:(double)arg1;
- (void)stop;
- (void)innerPingCallbackTimer;
- (void)scheduleAnotherPing:(double)arg1;
- (_Bool)isMinimumFrequencyRequirementMet;
- (_Bool)isSameGeneration:(id)arg1;
- (void)setNextGeneration;
- (id)initWithContext:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end


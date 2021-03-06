//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BDMEventMiddleware : NSObject
{
    NSMutableDictionary *_startTimeByEventType;
    CDUnknownBlockType _updateEvents;
    CDUnknownBlockType _updateProducer;
}

+ (id)buildMiddleware:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType updateProducer; // @synthesize updateProducer=_updateProducer;
@property(copy, nonatomic) CDUnknownBlockType updateEvents; // @synthesize updateEvents=_updateEvents;
@property(retain, nonatomic) NSMutableDictionary *startTimeByEventType; // @synthesize startTimeByEventType=_startTimeByEventType;
- (void).cxx_destruct;
- (void)notifyProducerDelegateIfNeeded:(long long)arg1;
- (void)fallback:(long long)arg1 url:(id)arg2 code:(long long)arg3 startTime:(id)arg4 finishTime:(id)arg5;
- (id)initWithBuilder:(id)arg1;
- (void)removeEvent:(long long)arg1 placement:(long long)arg2 network:(id)arg3;
- (void)removeEvent:(long long)arg1 placement:(long long)arg2;
- (void)removeEvent:(long long)arg1 network:(id)arg2;
- (void)removeEvent:(long long)arg1;
- (void)rejectAll:(long long)arg1;
- (void)rejectEvent:(long long)arg1 placement:(long long)arg2 network:(id)arg3 code:(long long)arg4;
- (void)rejectEvent:(long long)arg1 placement:(long long)arg2 code:(long long)arg3;
- (void)rejectEvent:(long long)arg1 network:(id)arg2 code:(long long)arg3;
- (void)rejectEvent:(long long)arg1 code:(long long)arg2;
- (void)fulfillEvent:(long long)arg1 placement:(long long)arg2 network:(id)arg3;
- (void)fulfillEvent:(long long)arg1 placement:(long long)arg2;
- (void)fulfillEvent:(long long)arg1 network:(id)arg2;
- (void)fulfillEvent:(long long)arg1;
- (void)startEvent:(long long)arg1 placement:(long long)arg2 network:(id)arg3;
- (void)startEvent:(long long)arg1 placement:(long long)arg2;
- (void)startEvent:(long long)arg1 network:(id)arg2;
- (void)startEvent:(long long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ELMPerformanceEventInfo, NSNumber, NSString;

@interface ELMPerformanceEvent : NSObject
{
    struct ELMPerformanceEvent _value;
    long long _lengthInMicroseconds;
    NSString *_templateURI;
    NSString *_nodeIdentifier;
    // Error parsing type: {Mutex="mu_"{atomic<long>="__a_"{__cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >="__a_value"Aq}}}, name: _threadMapMutex
    _Bool _isPerformanceSpan;
    int _performanceSpanThreadIdentifier;
    int _asyncIdentifier;
}

+ (void)setTimebase;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) int asyncIdentifier; // @synthesize asyncIdentifier=_asyncIdentifier;
- (id)description;
@property(readonly, nonatomic) ELMPerformanceEventInfo *info;
@property(readonly, nonatomic) NSNumber *measurementCount;
@property(readonly, nonatomic) NSNumber *materializationCount;
- (void)setLengthInMicroseconds:(long long)arg1;
@property(readonly, nonatomic) long long lengthInMicroseconds;
@property(readonly, nonatomic) NSString *nodeIdentifier;
@property(readonly, nonatomic) NSString *templateURI;
@property(readonly, nonatomic) NSNumber *parentIdentifier;
@property(readonly, nonatomic) int identifier;
@property(readonly, nonatomic) long long relativeTimeInMicroseconds;
@property(readonly, nonatomic) long long eventType;
@property(readonly, nonatomic) _Bool isMainThread;
@property(readonly, nonatomic) int threadIdentifier;
- (id)initWithELMPerformanceSpan:(id)arg1;
- (id)initWithELMPerformanceEvent:(struct ELMPerformanceEvent)arg1;

@end


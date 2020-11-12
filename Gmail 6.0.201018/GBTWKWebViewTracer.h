//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, XPTXTracer;
@protocol XPTTraceSampler;

@interface GBTWKWebViewTracer : NSObject
{
    unsigned int _inverseSamplingProbability;
    XPTXTracer *_traceSectionTracer;
    NSMutableDictionary *_traces;
    id <XPTTraceSampler> _traceSampler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <XPTTraceSampler> traceSampler; // @synthesize traceSampler=_traceSampler;
@property(retain, nonatomic) NSMutableDictionary *traces; // @synthesize traces=_traces;
@property(retain, nonatomic) XPTXTracer *traceSectionTracer; // @synthesize traceSectionTracer=_traceSectionTracer;
@property(nonatomic) unsigned int inverseSamplingProbability; // @synthesize inverseSamplingProbability=_inverseSamplingProbability;
- (_Bool)completeTraceSectionWithJSONRequest:(id)arg1;
- (_Bool)stopTracingWithJSONRequest:(id)arg1;
- (_Bool)startTraceWithJSONRequest:(id)arg1;
- (id)initWithTraceSampler:(id)arg1 traceSectionTracer:(id)arg2 inverseSamplingProbability:(unsigned int)arg3;
- (id)initWithInverseSamplingProbability:(unsigned int)arg1;

@end

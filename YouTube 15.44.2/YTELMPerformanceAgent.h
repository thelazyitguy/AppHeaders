//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ELMPerformanceAgent-Protocol.h>

@class NSString;
@protocol YTLatencyLogger;

@interface YTELMPerformanceAgent : NSObject <ELMPerformanceAgent>
{
    int _parentNonce;
    NSString *_actionNonce;
    int _actionType;
    id <YTLatencyLogger> _latencyLogger;
}

+ (id)createQueue;
- (void).cxx_destruct;
- (id)latencyBatchEventFromELMPerformanceEvent:(id)arg1;
- (_Bool)sampleEvent:(id)arg1;
- (id)queueForEvents;
- (long long)eventTypeBlacklist;
- (void)didReceiveMeasurementEvents:(id)arg1;
- (id)initWithParentSpanNonce:(int)arg1 latencyLogger:(id)arg2 actionNonce:(id)arg3 actionType:(int)arg4;
- (id)initWithParentSpanNonce:(int)arg1 latencyLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


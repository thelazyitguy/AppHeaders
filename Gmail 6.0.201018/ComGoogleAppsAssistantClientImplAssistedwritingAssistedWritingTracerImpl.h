//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTAssistedWritingTracer-Protocol.h"

@class ComGoogleAppsAssistantClientImplAssistedwritingAssistedWritingTracerImpl_TraceSectionImpl, ComGooglePersonalizationAssistAnnotateApiDraftSaveClientEvent_Builder, IOSObjectArray, NSString;
@protocol ComGoogleAppsXplatUtilPerformanceclockPerformanceClock, JavaUtilList, XPTTraceSection, XPTTracingApi;

@interface ComGoogleAppsAssistantClientImplAssistedwritingAssistedWritingTracerImpl : NSObject <JBTAssistedWritingTracer>
{
    id <ComGoogleAppsXplatUtilPerformanceclockPerformanceClock> clock_;
    id <JavaUtilList> longFrameConsumers_;
    id <XPTTracingApi> xTracingApi_;
    IOSObjectArray *dataByType_;
    ComGooglePersonalizationAssistAnnotateApiDraftSaveClientEvent_Builder *lastDraftSaveEvent_;
    double frameStartTimeMs_;
    ComGoogleAppsAssistantClientImplAssistedwritingAssistedWritingTracerImpl_TraceSectionImpl *currentSection_;
    id <XPTTraceSection> frameXSection_;
    id <JavaUtilList> autoClosedTraceSections_;
}

+ (void)initialize;
- (void)dealloc;
- (void)addLongFrameConsumerWithJBTAssistedWritingTracer_LongFrameConsumer:(id)arg1;
- (void)frameStartedWithJBTAssistedWritingTracer_FrameType:(id)arg1;
- (id)addToSessionEndEventWithComGooglePersonalizationAssistAnnotateApiSessionEndClientEvent_Builder:(id)arg1;
- (id)addToDraftSaveEventWithComGooglePersonalizationAssistAnnotateApiDraftSaveClientEvent_Builder:(id)arg1;
- (void)beginEventHandlingWithJBTAssistedWritingTracer_TraceType:(id)arg1 withNSString:(id)arg2 withDouble:(double)arg3;
- (void)instantWithJBTAssistedWritingTracer_TraceType:(id)arg1 withNSString:(id)arg2;
- (id)beginWithJBTAssistedWritingTracer_TraceType:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

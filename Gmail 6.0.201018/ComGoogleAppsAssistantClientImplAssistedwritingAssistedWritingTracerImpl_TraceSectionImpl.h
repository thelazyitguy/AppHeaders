//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTAssistedWritingTracer_TraceSection-Protocol.h"

@class ComGoogleAppsAssistantClientImplAssistedwritingAssistedWritingTracerImpl, ComGoogleAppsAssistantClientImplAssistedwritingAssistedWritingTracerImpl_TracerData, NSString;
@protocol XPTTraceSection;

@interface ComGoogleAppsAssistantClientImplAssistedwritingAssistedWritingTracerImpl_TraceSectionImpl : NSObject <JBTAssistedWritingTracer_TraceSection>
{
    ComGoogleAppsAssistantClientImplAssistedwritingAssistedWritingTracerImpl *this$0_;
    ComGoogleAppsAssistantClientImplAssistedwritingAssistedWritingTracerImpl_TraceSectionImpl *parent_;
    ComGoogleAppsAssistantClientImplAssistedwritingAssistedWritingTracerImpl_TracerData *data_;
    id <XPTTraceSection> xSection_;
    double startTimeMs_;
    double childrenTimeMs_;
    _Bool ended_;
}

- (void)dealloc;
- (void)ignore;
- (void)close;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsXplatTracingTracingProto_TraceEvent;
@protocol JavaUtilList;

@interface ComGoogleAppsXplatTracingProcessingTraceEventMatcher_MatchedEvents : NSObject
{
    ComGoogleAppsXplatTracingTracingProto_TraceEvent *begin_;
    id <JavaUtilList> ends_;
}

+ (void)initialize;
- (void)dealloc;
- (id)description;
- (id)addEndWithComGoogleAppsXplatTracingTracingProto_TraceEvent:(id)arg1;
- (id)getEnds;
- (id)getEnd;
- (_Bool)hasEnd;
- (id)setBeginWithComGoogleAppsXplatTracingTracingProto_TraceEvent:(id)arg1;
- (id)getBegin;
- (_Bool)hasBegin;

@end

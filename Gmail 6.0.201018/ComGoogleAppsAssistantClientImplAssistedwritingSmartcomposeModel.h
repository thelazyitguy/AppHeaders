//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonCollectEvictingQueue, NSString;
@protocol ComGoogleCommonTimeClock, JavaUtilList;

@interface ComGoogleAppsAssistantClientImplAssistedwritingSmartcomposeModel : NSObject
{
    ComGoogleCommonCollectEvictingQueue *impressedSuggestionCache_;
    id <JavaUtilList> newCacheEntries_;
    id <ComGoogleCommonTimeClock> clock_;
    NSString *currentSuggestionHint_;
    NSString *lastTriggeringStrategyName_;
    _Bool dismissedByEscape_;
}

+ (void)initialize;
- (void)dealloc;
- (id)handleLogEventWithJBTAssistedWritingEvent:(id)arg1;
- (id)getSuggestionToRenderWithJBTAssistedWritingUiState:(id)arg1;
- (void)handleNewResponseWithJBTAssistedWritingRequest:(id)arg1 withJBTAssistedWritingResponse:(id)arg2;

@end

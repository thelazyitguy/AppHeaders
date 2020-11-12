//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GBTPrefetchAnnotator : NSObject
{
    NSMutableDictionary *_inProgress;
    NSMutableDictionary *_recentlyCompleted;
}

+ (double)currentTimeInMs;
+ (id)sharedPrefetchAnnotator;
- (void).cxx_destruct;
- (void)clearPrefetchLevelCache;
- (id)cacheKeyForConversation:(id)arg1;
- (unsigned long long)prefetchLevelForConversation:(id)arg1;
- (void)setPrefetchLevel:(unsigned long long)arg1 forConversation:(id)arg2;
- (void)annotateSpan:(id)arg1 forOpenedConversation:(id)arg2;
- (void)didPrefetchHeightsForConversation:(id)arg1;
- (void)didCompletePrefetching:(id)arg1;
- (void)didStopPrefetching:(id)arg1;
- (void)didStartPrefetching:(id)arg1;
- (id)init;

@end

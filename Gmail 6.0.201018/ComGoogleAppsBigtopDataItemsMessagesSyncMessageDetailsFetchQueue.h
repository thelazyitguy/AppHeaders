//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonUtilConcurrentSettableFuture, JavaUtilConcurrentAtomicAtomicBoolean;
@protocol ComGoogleAppsBigtopDataItemsActiveApiActiveItemsTracker, JBTLoggingCounterManager, JavaUtilList, XPTListMultimap;

@interface ComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsFetchQueue : NSObject
{
    id <XPTListMultimap> fetchesByItemServerPermId_;
    id <ComGoogleAppsBigtopDataItemsActiveApiActiveItemsTracker> activeItemsTracker_;
    _Bool fetchMessageBodies_;
    JavaUtilConcurrentAtomicAtomicBoolean *shouldEnqueueMissingMessages_;
    id <JavaUtilList> interactiveQueue_;
    id <JavaUtilList> prefetchQueue_;
    id <JavaUtilList> syncQueue_;
    id <JBTLoggingCounterManager> counterManager_;
    ComGoogleCommonUtilConcurrentSettableFuture *queueClearedAfterFailureFuture_;
}

+ (void)initialize;
- (void)dealloc;
- (id)whenAllCurrentFetchesInQueueComplete;
- (id)whenQueueIsNextClearedAfterFailure;
- (void)clearQueueAndFailAllWithJavaLangThrowable:(id)arg1;
- (void)dequeueAndSetResultWithComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsFetchQueue_QueuedFetch:(id)arg1 withJBTSFetchedItem:(id)arg2;
- (id)getTopPriorityQueuedFetchesWithInt:(int)arg1 withInt:(int)arg2;
- (id)addDetailsFetchesToQueueWithJavaUtilList:(id)arg1 withComGoogleAppsBigtopDataItemsMessagesApiInternalMessageFetchingPriority:(id)arg2 withLong:(long long)arg3 withComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsFetchQueue_FetchReason:(id)arg4;
- (id)addDetailsFetchToQueueWithJBTSDetailsFetch:(id)arg1 withComGoogleAppsBigtopDataItemsMessagesApiInternalMessageFetchingPriority:(id)arg2 withLong:(long long)arg3 withComGoogleAppsBigtopDataItemsMessagesSyncMessageDetailsFetchQueue_FetchReason:(id)arg4;
- (void)setShouldEnqueueMissingMessages;
- (_Bool)shouldEnqueueMissingMessages;
- (id)getFetchesByItemServerPermIdWithNSString:(id)arg1;
- (_Bool)anyInteractiveFetches;
- (_Bool)anyNonInteractiveFetches;
- (_Bool)isEmpty;

@end

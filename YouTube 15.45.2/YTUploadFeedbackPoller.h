//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSDate, NSHashTable, NSMutableDictionary, YTUploadFeedbackService;
@protocol OS_dispatch_queue;

@interface YTUploadFeedbackPoller : NSObject
{
    YTUploadFeedbackService *_service;
    GIMMe *_gimme;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSDate *_nextPollDate;
    NSMutableDictionary *_polledItemsMap;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *polledItemsMap; // @synthesize polledItemsMap=_polledItemsMap;
@property(retain, nonatomic) NSDate *nextPollDate; // @synthesize nextPollDate=_nextPollDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)maybeScheduleNextPoll;
- (void)handlePollFailure:(id)arg1 forIDs:(id)arg2;
- (void)handleFeedbackItemRenderer:(id)arg1;
- (void)handlePollResponse:(id)arg1;
- (void)pollFeedback;
- (void)removeFeedbackObserver:(id)arg1;
- (void)addFeedbackObserver:(id)arg1;
- (void)pollFeedbackForID:(id)arg1;
- (id)init;

@end


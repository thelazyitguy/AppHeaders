//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNotificationCenter, NSOperationQueue, UAAppStateTracker, UAChannel, UAEventAPIClient, UAEventStore, UAPreferenceDataStore, UARuntimeConfig;
@protocol UAEventManagerDelegate;

@interface UAEventManager : NSObject
{
    _Bool _uploadsEnabled;
    id <UAEventManagerDelegate> _delegate;
    UARuntimeConfig *_config;
    UAEventStore *_eventStore;
    UAPreferenceDataStore *_dataStore;
    UAEventAPIClient *_client;
    NSNotificationCenter *_notificationCenter;
    UAAppStateTracker *_appStateTracker;
    UAChannel *_channel;
    NSDate *_earliestForegroundSendTime;
    NSOperationQueue *_queue;
    NSDate *_nextUploadDate;
}

+ (unsigned long long)clampValue:(unsigned long long)arg1 min:(unsigned long long)arg2 max:(unsigned long long)arg3;
+ (id)eventManagerWithConfig:(id)arg1 dataStore:(id)arg2 channel:(id)arg3 eventStore:(id)arg4 client:(id)arg5 queue:(id)arg6 notificationCenter:(id)arg7 appStateTracker:(id)arg8;
+ (id)eventManagerWithConfig:(id)arg1 dataStore:(id)arg2 channel:(id)arg3;
- (void).cxx_destruct;
@property(retain) NSDate *nextUploadDate; // @synthesize nextUploadDate=_nextUploadDate;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain) NSDate *earliestForegroundSendTime; // @synthesize earliestForegroundSendTime=_earliestForegroundSendTime;
@property(retain, nonatomic) UAChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) UAAppStateTracker *appStateTracker; // @synthesize appStateTracker=_appStateTracker;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) UAEventAPIClient *client; // @synthesize client=_client;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) UAEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(retain, nonatomic) UARuntimeConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <UAEventManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool uploadsEnabled; // @synthesize uploadsEnabled=_uploadsEnabled;
- (_Bool)enqueueUploadOperationWithDelay:(double)arg1;
- (void)scheduleUploadWithDelay:(double)arg1;
- (void)scheduleUpload;
- (void)cancelUpload;
- (void)deleteAllEvents;
- (void)addEvent:(id)arg1 sessionID:(id)arg2;
@property(nonatomic) unsigned long long minBatchInterval;
@property(nonatomic) unsigned long long maxBatchSize;
@property(nonatomic) unsigned long long maxTotalDBSize;
- (void)updateAnalyticsParametersWithResponse:(id)arg1;
@property(retain) NSDate *lastSendTime;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 dataStore:(id)arg2 channel:(id)arg3 eventStore:(id)arg4 client:(id)arg5 queue:(id)arg6 notificationCenter:(id)arg7 appStateTracker:(id)arg8;

@end

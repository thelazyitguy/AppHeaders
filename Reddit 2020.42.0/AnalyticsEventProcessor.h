//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Account, AccountIdentifiers, AnalyticsAPIClient, AppSettings, Loid, NSDate, NSNotificationCenter, NSString, NSTimer, PersistedSet, SessionTracker, _TtC6Reddit31AnonymousBrowsingEventProcessor;
@protocol AnalyticsProcessorDelegate, _TtP6Reddit13ErrorReporter_;

@interface AnalyticsEventProcessor : NSObject
{
    _Bool _isSendingEvents;
    _Bool _isProcessingPendingEvents;
    id <AnalyticsProcessorDelegate> _delegate;
    Account *_account;
    AccountIdentifiers *_accountIdentifiers;
    AnalyticsAPIClient *_apiClient;
    Loid *_loid;
    SessionTracker *_sessionTracker;
    AppSettings *_appSettings;
    NSNotificationCenter *_notificationCenter;
    id <_TtP6Reddit13ErrorReporter_> _errorReporter;
    _TtC6Reddit31AnonymousBrowsingEventProcessor *_anonymousBrowsingEventProcessor;
    PersistedSet *_eventsSet;
    PersistedSet *_pendingEventsSet;
    long long _eventBatchSize;
    double _backoffSeconds;
    NSDate *_backoffTimestamp;
    NSTimer *_timer;
    NSString *_referrerUrlString;
    NSString *_referrerDomain;
}

+ (id)anonymousBrowsingEventProcessor;
+ (id)queue;
- (void).cxx_destruct;
@property(copy) NSString *referrerDomain; // @synthesize referrerDomain=_referrerDomain;
@property(copy) NSString *referrerUrlString; // @synthesize referrerUrlString=_referrerUrlString;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isProcessingPendingEvents; // @synthesize isProcessingPendingEvents=_isProcessingPendingEvents;
@property(nonatomic) _Bool isSendingEvents; // @synthesize isSendingEvents=_isSendingEvents;
@property(retain) NSDate *backoffTimestamp; // @synthesize backoffTimestamp=_backoffTimestamp;
@property double backoffSeconds; // @synthesize backoffSeconds=_backoffSeconds;
@property long long eventBatchSize; // @synthesize eventBatchSize=_eventBatchSize;
@property(readonly, nonatomic) PersistedSet *pendingEventsSet; // @synthesize pendingEventsSet=_pendingEventsSet;
@property(readonly, nonatomic) PersistedSet *eventsSet; // @synthesize eventsSet=_eventsSet;
@property(readonly, nonatomic) _TtC6Reddit31AnonymousBrowsingEventProcessor *anonymousBrowsingEventProcessor; // @synthesize anonymousBrowsingEventProcessor=_anonymousBrowsingEventProcessor;
@property(readonly, nonatomic) id <_TtP6Reddit13ErrorReporter_> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) AppSettings *appSettings; // @synthesize appSettings=_appSettings;
@property(readonly, nonatomic) SessionTracker *sessionTracker; // @synthesize sessionTracker=_sessionTracker;
@property(readonly, nonatomic) Loid *loid; // @synthesize loid=_loid;
@property(readonly, nonatomic) AnalyticsAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(readonly, nonatomic) AccountIdentifiers *accountIdentifiers; // @synthesize accountIdentifiers=_accountIdentifiers;
@property(readonly, nonatomic) Account *account; // @synthesize account=_account;
@property(nonatomic) __weak id <AnalyticsProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)mwebLoidWithURL:(id)arg1;
- (id)googleClientIdWithURL:(id)arg1;
- (id)safeURLWithURL:(id)arg1;
- (void)updateWithReferrerUrlString:(id)arg1 referrerDomain:(id)arg2;
- (id)analyticsNameForTheme:(id)arg1;
- (id)analyticsNameForFontContentSize:(id)arg1;
- (void)addCommonPayload:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)handleError:(id)arg1 statusCode:(long long)arg2 sendingEvents:(id)arg3;
- (void)incrementBackoff;
- (void)sendEventsToServerUsingBackgroundTask:(unsigned long long)arg1;
- (void)requeuePendingEvent:(id)arg1;
- (void)updateSessionIdForEvent:(id)arg1;
@property(readonly, nonatomic) NSString *backgroundTaskName;
- (void)endBackgroundTask:(unsigned long long)arg1;
- (unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (void)sendEventsToServer;
- (void)flushPendingEvents;
- (void)processEvents;
- (void)startHeartbeat;
- (id)initWithCachePath:(id)arg1 redditService:(id)arg2 appSettings:(id)arg3 apiClient:(id)arg4 notificationCenter:(id)arg5 errorReporter:(id)arg6;
- (void)dealloc;

@end


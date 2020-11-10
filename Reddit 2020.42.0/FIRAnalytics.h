//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FIRAnalytics : NSObject
{
}

+ (double)loadTimestamp;
+ (void)unsuspendOperationQueue;
+ (void)queueOperationWithBlock:(CDUnknownBlockType)arg1;
+ (void)dispatchAsyncOnSerialQueue:(CDUnknownBlockType)arg1;
+ (void)observeFirebaseInstallationIDChanges;
+ (void)updateFirebaseInstallationID;
+ (void)handleUserActivity:(id)arg1;
+ (void)handleOpenURL:(id)arg1;
+ (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)startWithConfiguration:(id)arg1 options:(id)arg2;
+ (void)setDefaultEventParameters:(id)arg1;
+ (void)userPropertiesIncludingInternal:(_Bool)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)setInternalUserProperty:(id)arg1 forName:(id)arg2;
+ (void)logEventWithOrigin:(id)arg1 isPublicEvent:(_Bool)arg2 name:(id)arg3 parameters:(id)arg4 timestamp:(double)arg5 ignoreEnabled:(_Bool)arg6 ignoreInterceptor:(_Bool)arg7;
+ (void)logInternalEventWithOrigin:(id)arg1 name:(id)arg2 parameters:(id)arg3;
+ (void)logEventWithOrigin:(id)arg1 name:(id)arg2 parameters:(id)arg3;
+ (void)setOpenURLListener:(CDUnknownBlockType)arg1;
+ (void)notifyEventListeners:(id)arg1;
+ (void)removeLogEventListener:(id)arg1;
+ (id)addLogEventListener:(CDUnknownBlockType)arg1;
+ (void)setLogEventInterceptor:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
+ (void)resetAnalyticsData;
+ (id)appInstanceID;
+ (void)setSessionTimeoutInterval:(double)arg1;
+ (void)setAnalyticsCollectionEnabled:(_Bool)arg1;
+ (void)setScreenName:(id)arg1 screenClass:(id)arg2;
+ (void)setUserID:(id)arg1;
+ (void)setUserPropertyString:(id)arg1 forName:(id)arg2;
+ (void)logEventWithName:(id)arg1 parameters:(id)arg2;
+ (void)initialize;
- (void)maxUserPropertiesForOrigin:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)setInternalUserProperty:(id)arg1 forName:(id)arg2 withOrigin:(id)arg3;
- (void)logInternalEventWithOrigin:(id)arg1 name:(id)arg2 parameters:(id)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BugsnagConfiguration, BugsnagSession, BugsnagSessionFileStore, BugsnagSessionTrackingApiClient, NSDate;

@interface BugsnagSessionTracker : NSObject
{
    BugsnagConfiguration *_config;
    BugsnagSessionFileStore *_sessionStore;
    BugsnagSessionTrackingApiClient *_apiClient;
    NSDate *_backgroundStartTime;
    BugsnagSession *_currentSession;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain) BugsnagSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) NSDate *backgroundStartTime; // @synthesize backgroundStartTime=_backgroundStartTime;
@property(retain, nonatomic) BugsnagSessionTrackingApiClient *apiClient; // @synthesize apiClient=_apiClient;
@property(retain, nonatomic) BugsnagSessionFileStore *sessionStore; // @synthesize sessionStore=_sessionStore;
@property(nonatomic) __weak BugsnagConfiguration *config; // @synthesize config=_config;
- (void)handleUnhandledErrorEvent;
- (void)handleHandledErrorEvent;
- (void)handleAppForegroundEvent;
- (void)handleAppBackgroundEvent;
- (void)postUpdateNotice;
- (void)registerExistingSession:(id)arg1 startedAt:(id)arg2 user:(id)arg3 handledCount:(unsigned long long)arg4 unhandledCount:(unsigned long long)arg5;
- (void)startNewSessionWithAutoCaptureValue:(_Bool)arg1;
- (void)startNewSessionIfAutoCaptureEnabled;
@property(readonly, nonatomic) BugsnagSession *runningSession;
- (_Bool)resumeSession;
- (void)stopSession;
- (void)startNewSession;
- (id)initWithConfig:(id)arg1 postRecordCallback:(CDUnknownBlockType)arg2;

@end


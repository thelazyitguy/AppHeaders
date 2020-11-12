//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatHttpOAuthTokenProducer-Protocol.h"

@class ComGoogleAppsXplatHttpOAuthToken, NSDate, NSString;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, DYNAnalyticsLogEventFactory, DYNClearcutLogger, GIPGaiaAccountID, GSCAuthorizationService, OS_dispatch_queue;

@interface DYNIosOAuthTokenProducer : NSObject <ComGoogleAppsXplatHttpOAuthTokenProducer>
{
    id <GIPGaiaAccountID> _gaiaAccountID;
    id <GSCAuthorizationService> _authorizationService;
    id <DYNClearcutLogger> _clearcutLogger;
    id <DYNAnalyticsLogEventFactory> _logEventFactory;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    ComGoogleAppsXplatHttpOAuthToken *_token;
    id <ComGoogleCommonUtilConcurrentListenableFuture> _future;
    NSDate *_tokenExpiryDate;
    _Bool _forceTokenRefresh;
}

- (void).cxx_destruct;
- (void)logCacheInvalidationForAuthReason;
- (void)logAuthTokenFetchLatencyWithStartTime:(double)arg1 remote:(_Bool)arg2 success:(_Bool)arg3;
- (id)logEventFactory;
- (id)clearcutLogger;
- (void)setToken:(id)arg1 withExpiryDate:(id)arg2;
- (void)applyOAuthToken:(id)arg1 withExpiryDate:(id)arg2 toFuture:(id)arg3 fetchStartTime:(double)arg4 remote:(_Bool)arg5;
- (void)applyOAuthTokenFromAuthorization:(id)arg1 toFuture:(id)arg2 fetchStartTime:(double)arg3 remote:(_Bool)arg4;
- (void)clearCurrentFutureWithExpectedFuture:(id)arg1;
- (void)handleAccessTokenRefreshError:(id)arg1 withFuture:(id)arg2 fetchStartTime:(double)arg3;
- (void)handleAccessTokenRefreshSuccessWithAuthorization:(id)arg1 future:(id)arg2 fetchStartTime:(double)arg3;
- (void)onAccessTokenRefreshedWithError:(id)arg1 authorization:(id)arg2 future:(id)arg3 fetchStartTime:(double)arg4;
- (void)refreshAuthTokenWithAuthorization:(id)arg1 future:(id)arg2 fetchStartTime:(double)arg3;
- (void)onAuthorizationSuccessWithResult:(id)arg1 future:(id)arg2 fetchStartTime:(double)arg3;
- (id)authorizationPromise;
- (id)refreshTokenFromAuthorization;
- (void)onPureAuthorizationFailureWithFuture:(id)arg1 fetchStartTime:(double)arg2;
- (void)onPureAuthorizationSuccessWithResult:(id)arg1 future:(id)arg2 fetchStartTime:(double)arg3;
- (id)accessTokenPromise;
- (id)fetchPureOAuthToken;
- (id)generateOAuthTokenFuture;
- (void)clearOAuthTokenCache;
- (id)getOAuthToken;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

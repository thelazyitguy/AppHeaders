//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSException, NSString, PDLResourceCollector;
@protocol PDLMetricsLoggerDataSource, PDLMetricsTimer;

@protocol PDLMetricsLogger <NSObject>
@property(nonatomic) __weak id <PDLMetricsLoggerDataSource> dataSource;
- (void)logTopNDeviceCacheUpdateProcessMemoryUsage:(long long)arg1;
- (void)logTopNCacheUpdateProcessMemoryUsage:(long long)arg1;
- (void)logCountWithCountType:(int)arg1 value:(unsigned long long)arg2;
- (void)logCountWithCountType:(int)arg1;
- (void)logCachedServerAutocompletionCount:(unsigned long long)arg1;
- (void)logCachedDeviceContactCount:(unsigned long long)arg1;
- (void)logAverageLatencyForBatchWithLatencyType:(int)arg1 batchCount:(unsigned long long)arg2 timer:(id <PDLMetricsTimer>)arg3;
- (void)logLatencyWithLatencyType:(int)arg1 timer:(id <PDLMetricsTimer>)arg2;
- (void)logErrorWithLocation:(int)arg1 statusCode:(int)arg2 sqliteStatusCode:(unsigned long long)arg3;
- (void)logErrorWithLocation:(int)arg1 statusCode:(int)arg2;
- (void)logError:(NSError *)arg1 withErrorType:(int)arg2;
- (void)logInternalException:(NSException *)arg1 withErrorType:(int)arg2;
- (void)logWarmupResultWithTimer:(id <PDLMetricsTimer>)arg1 resourceCollector:(PDLResourceCollector *)arg2 error:(NSError *)arg3;
- (id <PDLMetricsTimer>)logWarmupCalled;
- (void)logCloseAutocompleteSessionCalled;
- (void)logBeginAutocompleteSessionCalled;
- (void)logInAppNotificationTargetsCalled;
- (void)logUpdateDataCacheCompletedWithTimer:(id <PDLMetricsTimer>)arg1 resourceCollector:(PDLResourceCollector *)arg2 error:(NSError *)arg3;
- (id <PDLMetricsTimer>)logUpdateDataCacheCalled;
- (void)logSetQueryCallbackWithResult:(long long)arg1 itemCount:(unsigned long long)arg2 rejectedDuplicatesCount:(unsigned long long)arg3 callbackNumber:(unsigned long long)arg4 dataSource:(long long)arg5 timer:(id <PDLMetricsTimer>)arg6 resourceCollector:(PDLResourceCollector *)arg7;
- (id <PDLMetricsTimer>)logSetQueryCalledWithQuery:(NSString *)arg1;
- (void)logPeopleWithIDCallbackWithResult:(long long)arg1 personIDs:(NSArray *)arg2 resultIndex:(unsigned long long)arg3 dataSource:(long long)arg4 timer:(id <PDLMetricsTimer>)arg5 resourceCollector:(PDLResourceCollector *)arg6;
- (id <PDLMetricsTimer>)logPeopleWithIDCalledWithPersonIDs:(NSArray *)arg1;
- (void)logLeanLookupRPCCompletedWithTimer:(id <PDLMetricsTimer>)arg1 responseSize:(unsigned long long)arg2 error:(NSError *)arg3;
- (id <PDLMetricsTimer>)logLeanLookupRPCStartedWithRequestSize:(unsigned long long)arg1;
- (void)logLeanWarmupRPCCompletedWithTimer:(id <PDLMetricsTimer>)arg1 responseSize:(unsigned long long)arg2 error:(NSError *)arg3;
- (id <PDLMetricsTimer>)logLeanWarmupRPCStartedWithRequestSize:(unsigned long long)arg1;
- (void)logLeanAutocompleteRPCCompletedWithTimer:(id <PDLMetricsTimer>)arg1 responseSize:(unsigned long long)arg2 query:(NSString *)arg3 error:(NSError *)arg4;
- (id <PDLMetricsTimer>)logLeanAutocompleteRPCStartedWithRequestSize:(unsigned long long)arg1 query:(NSString *)arg2;
- (void)logBatchLookupMergedPeopleRPCCompletedWithTimer:(id <PDLMetricsTimer>)arg1 responseBytes:(unsigned long long)arg2 error:(NSError *)arg3;
- (id <PDLMetricsTimer>)logBatchLookupMergedPeopleRPCStartedWithRequestBytes:(unsigned long long)arg1 isGAIAIDRequest:(_Bool)arg2;
- (void)logAutocompleteRPCCompletedWithTimer:(id <PDLMetricsTimer>)arg1 responseBytes:(unsigned long long)arg2 error:(NSError *)arg3;
- (id <PDLMetricsTimer>)logAutocompleteRPCStarted:(_Bool)arg1 peopleApiClientId:(NSString *)arg2 requestBytes:(unsigned long long)arg3;
- (void)logListRankedTargetsRPCCompletedWithTimer:(id <PDLMetricsTimer>)arg1 responseBytes:(unsigned long long)arg2 error:(NSError *)arg3;
- (id <PDLMetricsTimer>)logListRankedTargetsRPCStartedWithRequestBytes:(unsigned long long)arg1;
- (void)logColdCacheOnAutocompleteCall;
- (id <PDLMetricsTimer>)defaultTimer;
- (id <PDLMetricsTimer>)timerWithContext:(id)arg1;
@end

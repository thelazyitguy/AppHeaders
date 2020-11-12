//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PDLDeviceContactsRankingParams;

@protocol PDLPhenotypeFlags <NSObject>
- (_Bool)enableStructuredNameInLean;
- (_Bool)enablePrivateNamesInTopNForDrive;
- (long long)cpuCollectInterval;
- (_Bool)logPeopleWithIDProcessCPUUsage;
- (_Bool)logCacheUpdateProcessCPUUsage;
- (_Bool)logQueryProcessCPUUsage;
- (long long)memoryCollectInterval;
- (_Bool)logCacheUpdateProcessMemoryUsage;
- (_Bool)logQueryProcessMemoryUsage;
- (PDLDeviceContactsRankingParams *)deviceContactsRankingParams;
- (unsigned long long)topNCacheConfigRefreshTimeMs;
- (unsigned long long)topNCacheConfigInvalidateTimeMs;
- (unsigned long long)topNCacheConfigSize;
- (_Bool)refactorCacheCompatibilityCheck;
- (_Bool)IANTSendTargetTypeV2;
- (_Bool)nexusStage2;
- (_Bool)enableEmptyQueryPriming;
- (_Bool)enableMultiCache;
- (_Bool)veloxStage2;
- (_Bool)cleanupDatabaseFileOnWipeout;
- (_Bool)enableCacheInvalidationForBigtop;
- (_Bool)disableEmailLookupOptionParam;
- (_Bool)populateCoreIDRequestField;
- (_Bool)routeUpdateDataCacheToWarmup;
- (unsigned long long)gmailAutocompleteResultCount;
- (void)update;
@end

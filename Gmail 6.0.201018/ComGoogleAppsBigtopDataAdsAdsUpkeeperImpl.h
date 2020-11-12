//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataAdsApiAdsUpkeeper-Protocol.h"

@class ComGoogleAppsBigtopDataAdsAdsManagerImpl, ComGoogleAppsBigtopDataAdsAdsRequester, ComGoogleAppsBigtopDataAdsAdsSetupRequester, ComGoogleAppsBigtopDataAdsStorageAdsTableController, ComGoogleAppsXplatJobsJobConfig, ComGoogleAppsXplatJobsJobQueue, ComGoogleAppsXplatStorageDbTransactionPromiseFactory, ComGoogleCommonBaseOptional, NSString, OrgJodaTimeInstant;
@protocol ComGoogleAppsBigtopDataStorageSystempropertiesApiSystemPropertiesClient, ComGoogleAppsBigtopDataToppromoApiTopPromoUpdater, ComGoogleAppsXplatObserveSettable, ComGoogleCommonTimeClock, JBTSettingsClient, JavaUtilList, JavaxInjectProvider, XPTCountersApi;

@interface ComGoogleAppsBigtopDataAdsAdsUpkeeperImpl : NSObject <ComGoogleAppsBigtopDataAdsApiAdsUpkeeper>
{
    ComGoogleAppsXplatJobsJobConfig *adUpkeepJobConfig_;
    ComGoogleAppsBigtopDataAdsAdsManagerImpl *adsManagerImpl_;
    ComGoogleAppsBigtopDataAdsAdsRequester *adsRequester_;
    ComGoogleAppsBigtopDataAdsAdsSetupRequester *adsSetupRequester_;
    ComGoogleAppsBigtopDataAdsStorageAdsTableController *adsTableController_;
    id <ComGoogleCommonTimeClock> clock_;
    id <JavaxInjectProvider> executor_;
    ComGoogleAppsXplatJobsJobQueue *jobQueue_;
    id <ComGoogleAppsXplatObserveSettable> settableAdChangedEvent_;
    id <ComGoogleAppsXplatObserveSettable> settableTopPromoChangedEvent_;
    id <ComGoogleAppsBigtopDataStorageSystempropertiesApiSystemPropertiesClient> systemPropertiesClient_;
    id <ComGoogleAppsBigtopDataToppromoApiTopPromoUpdater> topPromoUpdater_;
    id <JBTSettingsClient> settingsClient_;
    id <XPTCountersApi> countersApi_;
    id lock_;
    OrgJodaTimeInstant *nextAdRequestInstant_;
    OrgJodaTimeInstant *nextScheduledUpkeepTime_;
    ComGoogleCommonBaseOptional *userTriggeredInbox_;
    ComGoogleCommonBaseOptional *lastRequestedEventOptional_;
    ComGoogleCommonBaseOptional *adsEnabledFromServer_;
    id <JavaUtilList> eventInitiatedRequestConfigList_;
    _Bool shouldReportAdStatusFromClient_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (id)start;
- (id)refreshWithRequestEventWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg1 withComGoogleGmailProtocolAdsAdRequest_RequestEvent:(id)arg2;
- (id)refreshWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

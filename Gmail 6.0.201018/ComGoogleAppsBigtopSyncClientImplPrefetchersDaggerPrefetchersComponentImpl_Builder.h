//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopSyncClientImplItemsApiAsyncItemsComponent, ComGoogleAppsBigtopSyncClientImplRootApiStartupConfigComponent;
@protocol ComGoogleAppsBigtopServicesGmailCommonComponentGmailCommonDaggerComponent, ComGoogleAppsBigtopSyncClientImplCommonSapiCommonComponent, ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent, ComGoogleAppsBigtopSyncClientImplLivelistLiveListComponent, ComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent;

@interface ComGoogleAppsBigtopSyncClientImplPrefetchersDaggerPrefetchersComponentImpl_Builder : NSObject
{
    ComGoogleAppsBigtopSyncClientImplItemsApiAsyncItemsComponent *asyncItemsComponent_;
    id <ComGoogleAppsBigtopServicesGmailCommonComponentGmailCommonDaggerComponent> gmailCommonDaggerComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonSapiCommonComponent> sapiCommonComponent_;
    id <ComGoogleAppsBigtopSyncClientImplLivelistLiveListComponent> liveListComponent_;
    id <ComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent> metricsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent> sapiMainThreadComponent_;
    ComGoogleAppsBigtopSyncClientImplRootApiStartupConfigComponent *startupConfigComponent_;
}

- (void)dealloc;
- (id)build;
- (id)startupConfigComponentWithComGoogleAppsBigtopSyncClientImplRootApiStartupConfigComponent:(id)arg1;
- (id)sapiMainThreadComponentWithComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent:(id)arg1;
- (id)metricsComponentWithComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent:(id)arg1;
- (id)liveListComponentWithComGoogleAppsBigtopSyncClientImplLivelistLiveListComponent:(id)arg1;
- (id)sapiCommonComponentWithComGoogleAppsBigtopSyncClientImplCommonSapiCommonComponent:(id)arg1;
- (id)gmailCommonDaggerComponentWithComGoogleAppsBigtopServicesGmailCommonComponentGmailCommonDaggerComponent:(id)arg1;
- (id)asyncItemsComponentWithComGoogleAppsBigtopSyncClientImplItemsApiAsyncItemsComponent:(id)arg1;

@end

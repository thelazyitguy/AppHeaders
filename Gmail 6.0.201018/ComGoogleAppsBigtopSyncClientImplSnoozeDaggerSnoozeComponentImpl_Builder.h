//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopSyncClientImplTaskssupportAsyncApiAsyncTasksSupportComponent, JBTRuntimeOptionsComponent;
@protocol ComGoogleAppsBigtopDataCommonCommonComponent, ComGoogleAppsBigtopDataSettingsSettingsClientComponent, ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent, ComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent, ComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent, ComGoogleAppsBigtopSyncClientImplSettingsApiSapiSettingsComponent, JBTISmartMailCommonComponent, JBTLoggingEventLoggingComponent;

@interface ComGoogleAppsBigtopSyncClientImplSnoozeDaggerSnoozeComponentImpl_Builder : NSObject
{
    ComGoogleAppsBigtopSyncClientImplTaskssupportAsyncApiAsyncTasksSupportComponent *asyncTasksSupportComponent_;
    id <ComGoogleAppsBigtopDataCommonCommonComponent> commonComponent_;
    id <JBTLoggingEventLoggingComponent> eventLoggingComponent_;
    id <ComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent> metricsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent> platformComponent_;
    JBTRuntimeOptionsComponent *runtimeOptionsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent> sapiMainThreadComponent_;
    id <ComGoogleAppsBigtopSyncClientImplSettingsApiSapiSettingsComponent> sapiSettingsComponent_;
    id <ComGoogleAppsBigtopDataSettingsSettingsClientComponent> settingsClientComponent_;
    id <JBTISmartMailCommonComponent> smartMailCommonComponent_;
}

- (void)dealloc;
- (id)build;
- (id)smartMailCommonComponentWithJBTISmartMailCommonComponent:(id)arg1;
- (id)settingsClientComponentWithComGoogleAppsBigtopDataSettingsSettingsClientComponent:(id)arg1;
- (id)sapiSettingsComponentWithComGoogleAppsBigtopSyncClientImplSettingsApiSapiSettingsComponent:(id)arg1;
- (id)sapiMainThreadComponentWithComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent:(id)arg1;
- (id)runtimeOptionsComponentWithJBTRuntimeOptionsComponent:(id)arg1;
- (id)platformComponentWithComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent:(id)arg1;
- (id)metricsComponentWithComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent:(id)arg1;
- (id)eventLoggingComponentWithJBTLoggingEventLoggingComponent:(id)arg1;
- (id)commonComponentWithComGoogleAppsBigtopDataCommonCommonComponent:(id)arg1;
- (id)asyncTasksSupportComponentWithComGoogleAppsBigtopSyncClientImplTaskssupportAsyncApiAsyncTasksSupportComponent:(id)arg1;

@end

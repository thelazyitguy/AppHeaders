//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsSyncControlApiAsyncItemsSyncControlServiceComponent, JBTRuntimeOptionsComponent;
@protocol ComGoogleAppsBigtopDataCommonCommonComponent, ComGoogleAppsBigtopDataSettingsSettingsClientComponent, ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent;

@interface ComGoogleAppsBigtopSyncClientImplUsersettingsAsyncDaggerUserSettingsComponentImpl_Builder : NSObject
{
    ComGoogleAppsBigtopDataItemsSyncControlApiAsyncItemsSyncControlServiceComponent *asyncItemsSyncControlServiceComponent_;
    id <ComGoogleAppsBigtopDataCommonCommonComponent> commonComponent_;
    JBTRuntimeOptionsComponent *runtimeOptionsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent> sapiMainThreadComponent_;
    id <ComGoogleAppsBigtopDataSettingsSettingsClientComponent> settingsClientComponent_;
}

- (void)dealloc;
- (id)build;
- (id)settingsClientComponentWithComGoogleAppsBigtopDataSettingsSettingsClientComponent:(id)arg1;
- (id)sapiMainThreadComponentWithComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent:(id)arg1;
- (id)runtimeOptionsComponentWithJBTRuntimeOptionsComponent:(id)arg1;
- (id)commonComponentWithComGoogleAppsBigtopDataCommonCommonComponent:(id)arg1;
- (id)asyncItemsSyncControlServiceComponentWithComGoogleAppsBigtopDataItemsSyncControlApiAsyncItemsSyncControlServiceComponent:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataSettingsSettingsClientImpl_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> rootLifecycleProvider_;
    id <JavaxInjectProvider> settingsServiceFactoryProvider_;
    id <JavaxInjectProvider> jobTrackerProvider_;
    id <JavaxInjectProvider> jobQueueProvider_;
    id <JavaxInjectProvider> currentJobExecutorProvider_;
    id <JavaxInjectProvider> settingStorageUpdateHintObservableProvider_;
    id <JavaxInjectProvider> jobJoiningExecutorProvider_;
    id <JavaxInjectProvider> settingIdKeyMapProvider_;
    id <JavaxInjectProvider> settingFactoryProvider_;
    id <JavaxInjectProvider> defaultValuesOverridesProvider_;
    id <JavaxInjectProvider> optionalSnapshotFutureProvider_;
    id <JavaxInjectProvider> snapshotsProducersProvider_;
    id <JavaxInjectProvider> includeInboxSectionsInClusterConfigsProvider_;
    id <JavaxInjectProvider> clusterStorageUpdateSettableProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


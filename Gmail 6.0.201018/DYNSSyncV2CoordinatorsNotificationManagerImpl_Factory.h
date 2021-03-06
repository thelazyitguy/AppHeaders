//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface DYNSSyncV2CoordinatorsNotificationManagerImpl_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> appFocusStateTrackerProvider_;
    id <JavaxInjectProvider> backfillManagerProvider_;
    id <JavaxInjectProvider> backgroundSyncDataStorageControllerProvider_;
    id <JavaxInjectProvider> catchUpManagerProvider_;
    id <JavaxInjectProvider> clearcutEventsLoggerProvider_;
    id <JavaxInjectProvider> sharedConfigurationProvider_;
    id <JavaxInjectProvider> dynamiteClockProvider_;
    id <JavaxInjectProvider> entityManagerUtilsProvider_;
    id <JavaxInjectProvider> groupEntityManagerRegistryProvider_;
    id <JavaxInjectProvider> groupEventHandlerLauncherProvider_;
    id <JavaxInjectProvider> prefetchManagerOnWorldUpdateProvider_;
    id <JavaxInjectProvider> executorProvider_;
    id <JavaxInjectProvider> revisionedEventConverterProvider_;
    id <JavaxInjectProvider> userDataInvalidatedEventSettableProvider_;
    id <JavaxInjectProvider> stopwatchFactoryProvider_;
    id <JavaxInjectProvider> userEntityManagerRegistryProvider_;
    id <JavaxInjectProvider> worldSyncEngineProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplSyncSyncWithMailComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplSyncDaggerSyncWithMailComponentImpl : NSObject <ComGoogleAppsBigtopSyncClientImplSyncSyncWithMailComponentImpl>
{
    id <JavaxInjectProvider> getSyncProvider_;
    id <JavaxInjectProvider> getItemsSyncControlServiceProvider_;
    id <JavaxInjectProvider> servicesSystemProvider_;
    id <JavaxInjectProvider> provideServiceFactoryProvider_;
    id <JavaxInjectProvider> provideServiceStubProvider_;
    id <JavaxInjectProvider> observableProvider_;
    id <JavaxInjectProvider> getObservableProvider_;
    id <JavaxInjectProvider> provideSapiMainExecutorProvider_;
    id <JavaxInjectProvider> itemsSubscriptionAdapterProvider_;
    id <JavaxInjectProvider> getSyncSubscriptionInitializerProvider_;
    id <JavaxInjectProvider> provideSyncProvider_;
}

- (void)dealloc;
- (id)getSync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

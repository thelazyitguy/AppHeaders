//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplRootSapiRootComponentImpl-Protocol.h"

@class NSString;
@protocol ComGoogleAppsBigtopSyncClientImplRootMailApiSapiMailRootComponent, ComGoogleAppsBigtopSyncClientImplRootSharedApiSapiSharedRootComponent, JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplRootDaggerSapiRootComponentImpl : NSObject <ComGoogleAppsBigtopSyncClientImplRootSapiRootComponentImpl>
{
    id <ComGoogleAppsBigtopSyncClientImplRootMailApiSapiMailRootComponent> sapiMailRootComponent_;
    id <ComGoogleAppsBigtopSyncClientImplRootSharedApiSapiSharedRootComponent> sapiSharedRootComponent_;
    id <JavaxInjectProvider> rootLifecycleProvider_;
    id <JavaxInjectProvider> enableMailFunctionalityProvider_;
    id <JavaxInjectProvider> sapiMailStartupEventsProvider_;
    id <JavaxInjectProvider> sapiSharedStartupEventsProvider_;
    id <JavaxInjectProvider> syncProviderHolderProvider_;
    id <JavaxInjectProvider> getSyncProvider_;
    id <JavaxInjectProvider> getSyncProvider2_;
    id <JavaxInjectProvider> sapiStartupCoordinatorProvider_;
    id <JavaxInjectProvider> sapiMailRootProvider_;
    id <JavaxInjectProvider> sapiSharedRootProvider_;
    id <JavaxInjectProvider> apiProvider_;
    id <JavaxInjectProvider> lifecycleEventsControllerProvider_;
    id <JavaxInjectProvider> provideSapiMainExecutorProvider_;
    id <JavaxInjectProvider> sapiRootImplProvider_;
    id <JavaxInjectProvider> provideSapiRootLifecycleProvider_;
}

- (void)dealloc;
- (id)sapiSharedRoot;
- (id)sapiMailRoot;
- (id)sapiRoot;
- (id)getLifecycle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


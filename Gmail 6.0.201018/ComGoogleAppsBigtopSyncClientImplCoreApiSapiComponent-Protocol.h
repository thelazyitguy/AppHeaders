//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplRootApiSapiRootDependenciesComponent-Protocol.h"
#import "ComGoogleAppsBigtopSyncClientImplUnifiedinboxAsyncApiUnifiedInboxDependenciesComponent-Protocol.h"
#import "JavaObject-Protocol.h"
#import "XPTHasLifecycle-Protocol.h"

@class XPTLifecycle;
@protocol JavaxInjectProvider;

@protocol ComGoogleAppsBigtopSyncClientImplCoreApiSapiComponent <XPTHasLifecycle, ComGoogleAppsBigtopSyncClientImplRootApiSapiRootDependenciesComponent, ComGoogleAppsBigtopSyncClientImplUnifiedinboxAsyncApiUnifiedInboxDependenciesComponent, JavaObject>
- (id <JavaxInjectProvider>)apiProvider;
- (XPTLifecycle *)getLifecycle;
@end

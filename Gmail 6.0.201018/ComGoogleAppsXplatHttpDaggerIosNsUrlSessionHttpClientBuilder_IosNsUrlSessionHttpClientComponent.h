//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatHttpIosNsUrlSessionHttpClientBuilder_IosNsUrlSessionHttpClientComponent-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsXplatHttpDaggerIosNsUrlSessionHttpClientBuilder_IosNsUrlSessionHttpClientComponent : NSObject <ComGoogleAppsXplatHttpIosNsUrlSessionHttpClientBuilder_IosNsUrlSessionHttpClientComponent>
{
    id <JavaxInjectProvider> provideBuilderProvider_;
    id <JavaxInjectProvider> provideIosNsUrlSessionHttpClientBuilderProvider_;
    id <JavaxInjectProvider> provideCookieHandlerProvider_;
    id <JavaxInjectProvider> provideRequestInterceptorProvider_;
    id <JavaxInjectProvider> provideLifecycleProvider_;
    id <JavaxInjectProvider> provideExecutorProvider_;
    id <JavaxInjectProvider> provideTimeoutsProvider_;
    id <JavaxInjectProvider> provideNsUrlSessionSupplierProvider_;
    id <JavaxInjectProvider> iosNsUrlSessionHttpClientProvider_;
    id <JavaxInjectProvider> provideOptionalOAuthTokenManagerProvider_;
    id <JavaxInjectProvider> provideTickerProvider_;
    id <JavaxInjectProvider> provideHttpClientStackProvider_;
}

- (void)dealloc;
- (id)provideHttpClientStack;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

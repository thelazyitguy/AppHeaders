//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataNetworkHttpUnauthenticatedIosXplatHttpTransportModule_ProvideUnauthedHttpClientFactory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> executorProvider_;
    id <JavaxInjectProvider> retryConfigProvider_;
    id <JavaxInjectProvider> throttlingConfigProvider_;
    id <JavaxInjectProvider> timeoutsProvider_;
    id <JavaxInjectProvider> userAgentProvider_;
    id <JavaxInjectProvider> xplatNetworkHttpClientProvider_;
    id <JavaxInjectProvider> useXplatNetworkBasedHttpClientProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsXplatHttpHttpClientBuilder.h"

@class ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableMap;
@protocol XPTNetHttpHttpClient;

@interface ComGoogleAppsXplatHttpXplatNetworkTransitionalHttpClientBuilder : ComGoogleAppsXplatHttpHttpClientBuilder
{
    id <XPTNetHttpHttpClient> xplatNetworkHttpClient_;
    ComGoogleCommonBaseOptional *cookieManager_;
    ComGoogleCommonCollectImmutableMap *initialCookiesByUri_;
    _Bool allowsHangingResponse_;
}

- (void)dealloc;
- (id)createHttpComponent;
- (id)allowsHangingResponseWithBoolean:(_Bool)arg1;
- (id)withSerializerWithComGoogleAppsXplatHttpBytestreamSerializer:(id)arg1;
- (id)withInitialCookiesWithComGoogleCommonCollectImmutableMap:(id)arg1;
- (id)withCookieManagerWithJavaNetCookieManager:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplPromoPromoComponentImpl-Protocol.h"

@class ComGoogleAppsBigtopDataItemsAdsApiAsyncAdsServiceComponent, ComGoogleAppsBigtopDataItemsToppromoApiAsyncTopPromoServiceComponent, NSString;
@protocol ComGoogleAppsBigtopDataCommonCommonComponent, ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent, ComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent, JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplPromoDaggerPromoComponentImpl : NSObject <ComGoogleAppsBigtopSyncClientImplPromoPromoComponentImpl>
{
    ComGoogleAppsBigtopDataItemsToppromoApiAsyncTopPromoServiceComponent *asyncTopPromoServiceComponent_;
    id <ComGoogleAppsBigtopDataCommonCommonComponent> commonComponent_;
    ComGoogleAppsBigtopDataItemsAdsApiAsyncAdsServiceComponent *asyncAdsServiceComponent_;
    id <ComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent> platformComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent> sapiMainThreadComponent_;
    id <JavaxInjectProvider> isDarkThemeActiveProvider_;
}

- (void)dealloc;
- (id)getPromoFactory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


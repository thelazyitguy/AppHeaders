//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SXConfigDefaults.h"

#import "SXBannerAdDelegate-Protocol.h"
#import "SXConfigRequired-Protocol.h"
#import "SXNetworkOpRetrierDelegate-Protocol.h"

@class NSString;
@protocol AMILocalization, SXAddToCartDelegate, SXCartThresholdToastDelegate, SXLocalizationDataSource, SXMarketplaceDataSource, SXRMenuItemSuggestionService, SXSheetDelegate, SXWeblabDelegate;

@interface SXConfigImplementation : SXConfigDefaults <SXBannerAdDelegate, SXNetworkOpRetrierDelegate, SXConfigRequired>
{
    id <SXAddToCartDelegate> _addToCartDelegate;
    id <SXWeblabDelegate> _weblabDelegate;
    id <SXLocalizationDataSource> _localizationDataSource;
    id <SXMarketplaceDataSource> _marketplaceDataSource;
    id <SXSheetDelegate> _sheetDelegate;
    id <SXCartThresholdToastDelegate> _cartThresholdToastDelegate;
    id <SXRMenuItemSuggestionService> _menuItemSuggestionService;
    id <AMILocalization> _localizationService;
}

@property(retain, nonatomic) id <AMILocalization> localizationService; // @synthesize localizationService=_localizationService;
@property(nonatomic) __weak id <SXRMenuItemSuggestionService> menuItemSuggestionService; // @synthesize menuItemSuggestionService=_menuItemSuggestionService;
@property(nonatomic) __weak id <SXCartThresholdToastDelegate> cartThresholdToastDelegate; // @synthesize cartThresholdToastDelegate=_cartThresholdToastDelegate;
@property(nonatomic) __weak id <SXSheetDelegate> sheetDelegate; // @synthesize sheetDelegate=_sheetDelegate;
@property(nonatomic) __weak id <SXMarketplaceDataSource> marketplaceDataSource; // @synthesize marketplaceDataSource=_marketplaceDataSource;
@property(nonatomic) __weak id <SXLocalizationDataSource> localizationDataSource; // @synthesize localizationDataSource=_localizationDataSource;
@property(nonatomic) __weak id <SXWeblabDelegate> weblabDelegate; // @synthesize weblabDelegate=_weblabDelegate;
@property(nonatomic) __weak id <SXAddToCartDelegate> addToCartDelegate; // @synthesize addToCartDelegate=_addToCartDelegate;
- (void).cxx_destruct;
- (_Bool)shouldRespectTargetContentInset;
- (id)siteVariant;
- (id)languageOfPreference;
- (id)customerId;
- (id)sessionId;
- (_Bool)isCustomerPantryEligible;
- (long long)currentMarketplace;
- (id)SRDSUserAgent;
- (id)SRDSClientID;
- (id)userSignedOutNotificationName;
- (id)userSignedInNotificationName;
- (id)freshRecommendedItemsWebViewControllerWithHtml:(id)arg1 withUrl:(id)arg2;
- (id)freshRecommendedItemsWebViewController;
- (id)webViewController;
- (void)showSearchResultsForQuery:(id)arg1 andOptionalPrefetchRequest:(id)arg2;
- (void)showError:(id)arg1;
- (void)showHome;
- (void)dropBlockWithTag:(unsigned long long)arg1;
- (unsigned long long)invokeOneTimeWhenBackOnline:(CDUnknownBlockType)arg1;
- (id)networkOpRetrierDelegate;
- (id)bannerAdModelForItemAtIndexPath:(id)arg1 asins:(id)arg2 slotId:(long long)arg3 searchKeywords:(id)arg4 browseNode:(id)arg5 adDedupeId:(id)arg6;
- (id)bannerAdDelegate;
- (Class)bannerAdCellClass;
- (_Bool)shouldDisplaySearchInfiniteScrollAdvertising;
- (id)marketplaceChangeNotificationName;
- (void)showBrowseForBrowseURL:(id)arg1 searchURL:(id)arg2 title:(id)arg3;
- (void)showURL:(id)arg1 fromViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

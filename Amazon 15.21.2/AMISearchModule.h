//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIModule-Protocol.h"
#import "SXAddToCartDelegate-Protocol.h"
#import "SXCartThresholdToastDelegate-Protocol.h"
#import "SXLocalizationDataSource-Protocol.h"
#import "SXMarketplaceDataSource-Protocol.h"
#import "SXNexusLoggerDelegate-Protocol.h"
#import "SXRConfigProtocol-Protocol.h"
#import "SXSheetDelegate-Protocol.h"
#import "SXWeblabDelegate-Protocol.h"

@class AMIModuleContext, NSString, UIViewController;
@protocol AMILocalization, AMIWeblabBridgeService, ANXAppearanceManager, FMXCartService, PXMCartService, UIViewControllerTransitioningDelegate;

@interface AMISearchModule : NSObject <SXAddToCartDelegate, SXWeblabDelegate, SXLocalizationDataSource, SXMarketplaceDataSource, SXSheetDelegate, SXRConfigProtocol, SXCartThresholdToastDelegate, SXNexusLoggerDelegate, AMIModule>
{
    AMIModuleContext *_moduleContext;
    id <FMXCartService> _freshCartService;
    id <PXMCartService> _pantryCartService;
    id <AMIWeblabBridgeService> _weblabService;
    id <AMILocalization> _localizationService;
    id <ANXAppearanceManager> _appearanceManager;
    id <UIViewControllerTransitioningDelegate> _bottomSheetTransitioningDelegate;
    UIViewController *_bottomSheetViewController;
}

@property(retain, nonatomic) UIViewController *bottomSheetViewController; // @synthesize bottomSheetViewController=_bottomSheetViewController;
@property(retain, nonatomic) id <UIViewControllerTransitioningDelegate> bottomSheetTransitioningDelegate; // @synthesize bottomSheetTransitioningDelegate=_bottomSheetTransitioningDelegate;
@property(retain, nonatomic) id <ANXAppearanceManager> appearanceManager; // @synthesize appearanceManager=_appearanceManager;
@property(nonatomic) __weak id <AMILocalization> localizationService; // @synthesize localizationService=_localizationService;
@property(nonatomic) __weak id <AMIWeblabBridgeService> weblabService; // @synthesize weblabService=_weblabService;
@property(nonatomic) __weak id <PXMCartService> pantryCartService; // @synthesize pantryCartService=_pantryCartService;
@property(nonatomic) __weak id <FMXCartService> freshCartService; // @synthesize freshCartService=_freshCartService;
@property(retain, nonatomic) AMIModuleContext *moduleContext; // @synthesize moduleContext=_moduleContext;
- (void).cxx_destruct;
- (void)registerNotificationListeners;
- (void)dismissBottomSheet;
- (void)resultViewController:(id)arg1 wantsToLog:(id)arg2;
- (_Bool)shouldShowAlternateSearchOptions;
- (void)showFlowSearch;
- (_Bool)shouldShowFlowSearch;
- (void)showBarcodeSearch;
- (_Bool)shouldShowBarcodeSearch;
- (void)showVoiceSearch;
- (_Bool)shouldShowVoiceSearch;
- (id)flowSearchDescriptionText;
- (id)flowSearchButtonText;
- (id)srdsClient;
- (id)siteVariant;
- (id)customerId;
- (id)prewarmSearchFeature;
- (id)userSignedOutNotificationName;
- (id)marketplaceChangeNotificationName;
- (void)refreshNavAppearance;
- (void)showSearchResultsForQuery:(id)arg1 andOptionalPrefetchRequest:(id)arg2;
- (id)localeCode;
- (id)marketplace;
- (id)sessionId;
- (id)menuItemSuggestionService;
- (_Bool)isBrowseByCategoryExpandablePageSupported;
- (void)dismissBottomSheetAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentBottomSheetWithView:(id)arg1;
- (id)secureWebviewHost;
- (_Bool)isInternationalShoppingMode;
- (id)currentMarketplace;
- (id)currentLanguage;
- (void)loadCartThresholdToastMessage:(CDUnknownBlockType)arg1;
- (void)goToCart;
- (void)checkCartForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkCartForCoupon:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeItemFromCart:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addItemToCart:(id)arg1 competionHandler:(CDUnknownBlockType)arg2;
- (void)refreshTreatmentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)triggerWeblab:(id)arg1;
- (id)treatmentForWeblab:(id)arg1 andTrigger:(_Bool)arg2;
- (id)searchResultsViewControllerFactoryForModule:(id)arg1 moduleSpec:(id)arg2;
- (id)browseViewControllerFactoryForModule:(id)arg1 moduleSpec:(id)arg2;
- (id)viewControllerFactoryForModuleSpec:(id)arg1;
- (void)startModuleWithContext:(id)arg1;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


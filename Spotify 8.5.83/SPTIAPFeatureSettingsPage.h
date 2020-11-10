//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTFeatureSettingsPage;
@protocol InAppPurchaseController, SPTIAPController;

@interface SPTIAPFeatureSettingsPage : NSObject
{
    id <SPTIAPController> _iapController;
    id <InAppPurchaseController> _legacyController;
    SPTFeatureSettingsPage *_page;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTFeatureSettingsPage *page; // @synthesize page=_page;
@property(retain, nonatomic) id <InAppPurchaseController> legacyController; // @synthesize legacyController=_legacyController;
@property(retain, nonatomic) id <SPTIAPController> iapController; // @synthesize iapController=_iapController;
- (id)inAppPurchaseModel;
- (void)addItem:(id)arg1;
- (void)createItems:(id)arg1 alertController:(id)arg2;
- (void)updateAvailableProductsIfNeeded;
- (id)initWithIAPController:(id)arg1 legacyController:(id)arg2 featureFlags:(id)arg3 featureSettingsItemFactory:(id)arg4 alertController:(id)arg5;

@end


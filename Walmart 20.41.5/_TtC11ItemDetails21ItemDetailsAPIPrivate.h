//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _TtP11FeatureAPIs17ItemDetailsCCMAPI_;

@interface _TtC11ItemDetails21ItemDetailsAPIPrivate : NSObject
{
    // Error parsing type: , name: uiCompletionClosure
    // Error parsing type: , name: productManager
    // Error parsing type: , name: legacySDTableViewEnabled
}

- (void).cxx_destruct;
- (id)init;
- (id)createPerimeterXNetworkServiceErrorIfNeeded:(id)arg1:(id)arg2:(id)arg3 perimeterXEnabled:(_Bool)arg4;
@property(nonatomic, readonly) id <_TtP11FeatureAPIs17ItemDetailsCCMAPI_> ccm;
- (id)variantPickerControllerWithUsItemId:(id)arg1 context:(id)arg2 feedbackHandler:(CDUnknownBlockType)arg3;
- (id)itemPageHybridEGiftCardViewControllerWithFullProductURL:(id)arg1;
- (id)itemPageHybridEGiftCardViewControllerWithProductURL:(id)arg1;
- (id)itemPageHybridEGiftCardUnAvailableViewControllerWithImageUrl:(id)arg1 itemName:(id)arg2;
- (void)navigateToItemPageViewControllerWithProductID:(id)arg1;
- (id)itemPageViewControllerWithUpc:(id)arg1;
- (id)itemAvailabilityViewControllerWithProductID:(id)arg1;
- (id)itemPageViewControllerWithRegistryList:(id)arg1;
- (id)itemPageViewControllerWithCollectionID:(id)arg1;
- (id)itemPageViewControllerWithSparseItemModel:(id)arg1;
- (id)itemPageViewControllerWithSearchItem:(id)arg1;
- (id)itemPageViewControllerWithSearchItem:(id)arg1 refererContext:(id)arg2;
- (id)itemPageViewControllerWithProductID:(id)arg1 pitaTag:(id)arg2;
- (id)itemPageViewControllerWithProductID:(id)arg1 refererContext:(id)arg2;
- (id)itemPageViewControllerWithProductID:(id)arg1;
- (void)itemDataWithUPC:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)itemDataWithUSItemID:(id)arg1 storeZipcode:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, readonly) _Bool isPerimeterXEnabled;
@property(nonatomic, readonly) NSString *perimeterXpostNotificationName;

@end

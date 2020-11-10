//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/SKPaymentTransactionObserver-Protocol.h>

@class GIMMe, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, YTCommerceRequestBuilderRegistry;
@protocol YTResponder, YTTransactionQueueControllerDelegate;

@interface YTTransactionQueueController : NSObject <SKPaymentTransactionObserver>
{
    id <YTResponder> _firstResponder;
    YTCommerceRequestBuilderRegistry *_requestBuilderRegistry;
    NSMutableArray *_productRequests;
    NSMutableArray *_processors;
    NSHashTable *_observedQueues;
    GIMMe *_gimme;
    id <YTTransactionQueueControllerDelegate> _delegate;
    NSMutableDictionary *_pendingTransactions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pendingTransactions; // @synthesize pendingTransactions=_pendingTransactions;
@property(nonatomic) __weak id <YTTransactionQueueControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)appStoreReceiptData;
- (id)appIDFromBundleID:(id)arg1;
- (_Bool)hasProcessorOfClass:(Class)arg1;
- (id)builderBlockRegistry;
- (void)clearClientInfoForKey:(id)arg1;
- (void)clearOfferInfoForKey:(id)arg1;
- (id)clientInfoForKey:(id)arg1;
- (void)migrateLegacyPersistedParamsForTransaction:(id)arg1;
- (void)clearStoredOfferParams;
- (id)handlingServiceForTransactionType:(unsigned long long)arg1;
- (void)sendIAPServiceRequestWithReceipt:(id)arg1 product:(id)arg2 paymentPair:(id)arg3 transaction:(id)arg4;
- (CDUnknownBlockType)builderBlockForTransactionType:(unsigned long long)arg1;
- (_Bool)hasLoggedInUser;
- (id)transactionForPaymentTransaction:(id)arg1;
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)dealloc;
- (void)requestPaymentForTransaction:(id)arg1;
- (void)stopObservingQueue:(id)arg1;
- (void)startObservingQueue:(id)arg1;
- (id)processors;
- (void)registerIAPRequestBuilderBlock:(CDUnknownBlockType)arg1 forTransactionType:(unsigned long long)arg2;
- (_Bool)hasIAPRequestBuilderBlockRegisteredForTransactionType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


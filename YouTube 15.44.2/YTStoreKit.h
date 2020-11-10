//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSLocale, NSMutableArray, NSSet, SKReceiptRefreshRequest;

@interface YTStoreKit : NSObject
{
    SKReceiptRefreshRequest *_receiptRefreshRequest;
    NSMutableArray *_productRequests;
    NSMutableArray *_pendingProductQueries;
    NSMutableArray *_pendingReceiptQueries;
    NSLocale *_currentLocale;
    NSLocale *_verifiedLocale;
    NSSet *_productIDs;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)configuredProductIDs;
- (void)requestReceipt;
- (void)requestProducts;
@property(readonly, nonatomic) NSLocale *appStoreLocale;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)reset;
- (void)requestLocaleWithLogin:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)requestLocaleWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

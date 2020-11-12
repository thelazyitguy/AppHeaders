//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSNumber, NSString, UIViewController;

@protocol _TtP11FeatureAPIs20FinancialServicesAPI_
- (UIViewController *)presentTransactionCompleteScreenWithProductName:(NSString *)arg1 transactionDate:(NSString *)arg2 addressLineOne:(NSString *)arg3 currencyCode:(NSString *)arg4 transactionAmount:(NSNumber *)arg5 transactionID:(NSString *)arg6 tcNumber:(NSString *)arg7;
- (void)trackAnalyticsEventWithEventType:(NSString *)arg1 pageName:(NSString *)arg2 buttonName:(NSString *)arg3 orderId:(NSString *)arg4 productType:(NSString *)arg5;
- (void)navigateToTransactionHistory;
- (void)shareReferenceNumberWithReferenceNumberResponse:(NSDictionary *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)getReferenceNumberWithOrderId:(NSString *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)transactionHistoryAvailableWithCompletion:(void (^)(_Bool))arg1;
@property(nonatomic, readonly) _Bool moneyServicesDisabled;
@property(nonatomic, copy) CDUnknownBlockType enabledCallback;
@property(nonatomic, readonly) _Bool enabled;
@property(nonatomic) _Bool associateBuild;
@end

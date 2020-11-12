//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, _TtC7Account17ShipmentViewModel, _TtC7Account21OrderSummaryViewModel, _TtC7Account23PaymentDetailsViewModel, _TtC7Account24FinancedPaymentViewModel, _TtC7Account24OrderBasicsCellViewModel, _TtC7Account25ShippingInfoCellViewModel, _TtC7Account27BillingAddressCellViewModel;

@protocol _TtP7Account29OnlineOrderDataSourceProtocol_
- (void)getGuestOnlineOrderWithEmail:(NSString *)arg1 orderId:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)getOnlineOrderWithOrderId:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (_TtC7Account17ShipmentViewModel *)shipmentViewModelAt:(long long)arg1 checkinOrderStatus:(long long)arg2;
- (_TtC7Account25ShippingInfoCellViewModel *)shippingInfoViewModelAt:(long long)arg1;
@property(nonatomic, readonly) NSString *orderNumber;
@property(nonatomic, readonly) _Bool isFinancedPayment;
@property(nonatomic, readonly) _TtC7Account24FinancedPaymentViewModel *financedPaymentCellViewModel;
@property(nonatomic, readonly) _TtC7Account27BillingAddressCellViewModel *billingAddressCellViewModel;
@property(nonatomic, readonly) long long numberOfCreditCards;
@property(nonatomic, readonly) NSArray *paymentMethodModels;
@property(nonatomic, readonly) long long numberOfPaymentMethods;
@property(nonatomic, readonly) long long numShipments;
@property(nonatomic, readonly) _Bool isGiftOrder;
@property(nonatomic, readonly) _Bool dataLoaded;
@property(nonatomic, readonly) _TtC7Account24OrderBasicsCellViewModel *orderBasicsCellViewModel;
@property(nonatomic, readonly) _TtC7Account21OrderSummaryViewModel *orderSummaryViewModel;
@property(nonatomic, readonly) _TtC7Account23PaymentDetailsViewModel *paymentDetailsViewModel;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol STPPaymentMethod, STPSourceProtocol;

@protocol STPPaymentMethodsInternalViewControllerDelegate
- (void)internalViewControllerDidCancel;
- (void)internalViewControllerDidCreateSource:(id <STPSourceProtocol>)arg1 completion:(void (^)(NSError *))arg2;
- (void)internalViewControllerDidDeletePaymentMethod:(id <STPPaymentMethod>)arg1;
- (void)internalViewControllerDidSelectPaymentMethod:(id <STPPaymentMethod>)arg1;
@end

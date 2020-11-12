//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Stripe/NSObject-Protocol.h>

@class STPAddress;
@protocol STPSourceProtocol;

@protocol STPBackendAPIAdapter <NSObject>
- (void)selectDefaultCustomerSource:(id <STPSourceProtocol>)arg1 completion:(void (^)(NSError *))arg2;
- (void)attachSourceToCustomer:(id <STPSourceProtocol>)arg1 completion:(void (^)(NSError *))arg2;
- (void)retrieveCustomer:(void (^)(STPCustomer *, NSError *))arg1;

@optional
- (void)updateCustomerWithShippingAddress:(STPAddress *)arg1 completion:(void (^)(NSError *))arg2;
- (void)detachSourceFromCustomer:(id <STPSourceProtocol>)arg1 completion:(void (^)(NSError *))arg2;
@end

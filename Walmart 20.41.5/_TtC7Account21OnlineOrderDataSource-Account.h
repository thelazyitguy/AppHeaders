//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/_TtC7Account21OnlineOrderDataSource.h>

#import <WalmartCore/_TtP7Account22PendingReturnsProtocol_-Protocol.h>

@class NSArray;

@interface _TtC7Account21OnlineOrderDataSource (Account) <_TtP7Account22PendingReturnsProtocol_>
@property(nonatomic, readonly) NSArray *pendingReturns;
@property(nonatomic, readonly) NSArray *mailReturns;
@property(nonatomic, readonly) NSArray *storeReturns;
@property(nonatomic, readonly) _Bool hasPendingReturns;
- (void)cancelTireInstallationWithCustomerID:(id)arg1 orderNumber:(id)arg2 reservationID:(id)arg3 completion:(CDUnknownBlockType)arg4;
@end

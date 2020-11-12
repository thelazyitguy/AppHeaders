//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DXPPolicyChangeObservable-Protocol.h"

@class NSObject, NSSet;
@protocol OS_dispatch_queue, SSOIdentity;

@protocol DXPPolicyFetchControlling <DXPPolicyChangeObservable>
- (void)resetRetryCount;
- (void)updateIdentitySet:(NSSet *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(NSError *))arg3;
- (void)updatePolicyForIdentity:(id <SSOIdentity>)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(NSError *))arg3;
@end

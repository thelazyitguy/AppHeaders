//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GPCPromise;
@protocol GIPGaiaAccountID, SSOIdentity;

@protocol GIKSSOIdentityService
- (void)ssoIdentityForGaiaAccountID:(id <GIPGaiaAccountID>)arg1 completion:(void (^)(id <SSOIdentity>, NSError *))arg2;
- (GPCPromise *)ssoIdentityForGaiaAccountID:(id <GIPGaiaAccountID>)arg1;
- (id <SSOIdentity>)deprecatedSynchronousSSOIdentityForGaiaAccountID:(id <GIPGaiaAccountID>)arg1 error:(id *)arg2;
@end


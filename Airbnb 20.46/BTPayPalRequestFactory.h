//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BTPayPalRequestFactory : NSObject
{
}

- (id)requestWithScopeValues:(id)arg1 privacyURL:(id)arg2 agreementURL:(id)arg3 clientID:(id)arg4 environment:(id)arg5 callbackURLScheme:(id)arg6;
- (id)billingAgreementRequestWithApprovalURL:(id)arg1 clientID:(id)arg2 environment:(id)arg3 callbackURLScheme:(id)arg4;
- (id)checkoutRequestWithApprovalURL:(id)arg1 clientID:(id)arg2 environment:(id)arg3 callbackURLScheme:(id)arg4;

@end


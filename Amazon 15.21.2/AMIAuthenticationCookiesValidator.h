//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWAuthenticationTransactionInfo;

@interface AMIAuthenticationCookiesValidator : NSObject
{
    _Bool _didLoginTransactionFail;
    _Bool _didLogoutTransactionFail;
    AWAuthenticationTransactionInfo *_transactionInfo;
}

@property(readonly, nonatomic) AWAuthenticationTransactionInfo *transactionInfo; // @synthesize transactionInfo=_transactionInfo;
@property(readonly, nonatomic) _Bool didLogoutTransactionFail; // @synthesize didLogoutTransactionFail=_didLogoutTransactionFail;
@property(readonly, nonatomic) _Bool didLoginTransactionFail; // @synthesize didLoginTransactionFail=_didLoginTransactionFail;
- (void).cxx_destruct;
- (_Bool)cookiesAreConsistentForEarlyGatewayRequest;
- (id)init;

@end

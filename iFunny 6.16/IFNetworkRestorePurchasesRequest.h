//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFNetworkBaseRequest.h>

@class NSString;

@interface IFNetworkRestorePurchasesRequest : IFNetworkBaseRequest
{
    NSString *_receipt;
    NSString *_transactionID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(copy, nonatomic) NSString *receipt; // @synthesize receipt=_receipt;
- (id)parameters;
- (id)responseMapper;
- (Class)responseClass;
- (id)path;
- (long long)httpMethod;
- (id)initWithReceipt:(id)arg1 transactionID:(id)arg2;

@end

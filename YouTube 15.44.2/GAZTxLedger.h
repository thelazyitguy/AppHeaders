//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GAZTxRequest, GAZTxResponse, NSData;

@interface GAZTxLedger : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOpaqueTxRequest; // @dynamic hasOpaqueTxRequest;
@property(nonatomic) _Bool hasTxRequest; // @dynamic hasTxRequest;
@property(nonatomic) _Bool hasTxResponse; // @dynamic hasTxResponse;
@property(copy, nonatomic) NSData *opaqueTxRequest; // @dynamic opaqueTxRequest;
@property(retain, nonatomic) GAZTxRequest *txRequest; // @dynamic txRequest;
@property(retain, nonatomic) GAZTxResponse *txResponse; // @dynamic txResponse;

@end


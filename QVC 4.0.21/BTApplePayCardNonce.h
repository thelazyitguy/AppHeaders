//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BraintreeCore/BTPaymentMethodNonce.h>

@class BTBinData;

@interface BTApplePayCardNonce : BTPaymentMethodNonce
{
    BTBinData *_binData;
}

@property(readonly, nonatomic) BTBinData *binData; // @synthesize binData=_binData;
- (void).cxx_destruct;
- (id)initWithNonce:(id)arg1 localizedDescription:(id)arg2 type:(id)arg3 json:(id)arg4;

@end

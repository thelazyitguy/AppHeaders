//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRPrice, NSNumber;

@interface AIRCancellationRefundBreakdown : AIRModel
{
    AIRPrice *_refundablePrice;
    AIRPrice *_nonRefundablePrice;
    AIRPrice *_paidToDatePrice;
    AIRPrice *_actualRefundTotal;
    NSNumber *_refundAmountValidationValue;
}

+ (id)idAttributeName;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *refundAmountValidationValue; // @synthesize refundAmountValidationValue=_refundAmountValidationValue;
@property(readonly, copy, nonatomic) AIRPrice *actualRefundTotal; // @synthesize actualRefundTotal=_actualRefundTotal;
@property(readonly, copy, nonatomic) AIRPrice *paidToDatePrice; // @synthesize paidToDatePrice=_paidToDatePrice;
@property(readonly, copy, nonatomic) AIRPrice *nonRefundablePrice; // @synthesize nonRefundablePrice=_nonRefundablePrice;
@property(readonly, copy, nonatomic) AIRPrice *refundablePrice; // @synthesize refundablePrice=_refundablePrice;

@end

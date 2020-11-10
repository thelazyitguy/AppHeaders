//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class FixFlowFixActionData, FixFlowInstrumentDetails, NSString, OrchCommonParameters, OrchFundsGuaranteeId, OrchProductCorrelationId;

@interface FixFlowParameters : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long billingAccountId; // @dynamic billingAccountId;
@property(retain, nonatomic) OrchCommonParameters *commonParameters; // @dynamic commonParameters;
@property(copy, nonatomic) NSString *dismissalKey; // @dynamic dismissalKey;
@property(retain, nonatomic) FixFlowFixActionData *fixActionData2; // @dynamic fixActionData2;
@property(readonly, nonatomic) int fixActionDataOneOfCase; // @dynamic fixActionDataOneOfCase;
@property(nonatomic) int fixActionType; // @dynamic fixActionType;
@property(retain, nonatomic) OrchFundsGuaranteeId *fundsGuaranteeId; // @dynamic fundsGuaranteeId;
@property(nonatomic) _Bool hasBillingAccountId; // @dynamic hasBillingAccountId;
@property(nonatomic) _Bool hasCommonParameters; // @dynamic hasCommonParameters;
@property(nonatomic) _Bool hasDismissalKey; // @dynamic hasDismissalKey;
@property(nonatomic) _Bool hasFixActionData2; // @dynamic hasFixActionData2;
@property(nonatomic) _Bool hasFixActionType; // @dynamic hasFixActionType;
@property(nonatomic) _Bool hasFundsGuaranteeId; // @dynamic hasFundsGuaranteeId;
@property(nonatomic) _Bool hasProductCorrelationId; // @dynamic hasProductCorrelationId;
@property(retain, nonatomic) FixFlowInstrumentDetails *instrumentDetails; // @dynamic instrumentDetails;
@property(retain, nonatomic) OrchProductCorrelationId *productCorrelationId; // @dynamic productCorrelationId;

@end


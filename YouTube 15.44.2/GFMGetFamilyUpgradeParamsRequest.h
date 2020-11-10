//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GFMApiRequestHeader, NSString;

@interface GFMGetFamilyUpgradeParamsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiRequestHeader *apiHeader; // @dynamic apiHeader;
@property(nonatomic) int familyProductCorrelationIdType; // @dynamic familyProductCorrelationIdType;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasFamilyProductCorrelationIdType; // @dynamic hasFamilyProductCorrelationIdType;
@property(nonatomic) _Bool hasPaymentsClientToken; // @dynamic hasPaymentsClientToken;
@property(nonatomic) _Bool hasReferencePcid; // @dynamic hasReferencePcid;
@property(nonatomic) _Bool hasRequesterProductId; // @dynamic hasRequesterProductId;
@property(copy, nonatomic) NSString *paymentsClientToken; // @dynamic paymentsClientToken;
@property(copy, nonatomic) NSString *referencePcid; // @dynamic referencePcid;
@property(copy, nonatomic) NSString *requesterProductId; // @dynamic requesterProductId;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GFMApiResponseHeader, GFMNominatorProfile, NSMutableArray, NSString;

@interface GFMGetSupervisionNominationInfoResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiResponseHeader *apiHeader; // @dynamic apiHeader;
@property(retain, nonatomic) NSMutableArray *collateralDevicesArray; // @dynamic collateralDevicesArray;
@property(readonly, nonatomic) unsigned long long collateralDevicesArray_Count; // @dynamic collateralDevicesArray_Count;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasNominatorAgeOfConsent; // @dynamic hasNominatorAgeOfConsent;
@property(nonatomic) _Bool hasNominatorProfile; // @dynamic hasNominatorProfile;
@property(nonatomic) _Bool hasNomineeEmail; // @dynamic hasNomineeEmail;
@property(nonatomic) _Bool hasSupervisionType; // @dynamic hasSupervisionType;
@property(nonatomic) int nominatorAgeOfConsent; // @dynamic nominatorAgeOfConsent;
@property(retain, nonatomic) GFMNominatorProfile *nominatorProfile; // @dynamic nominatorProfile;
@property(copy, nonatomic) NSString *nomineeEmail; // @dynamic nomineeEmail;
@property(nonatomic) int supervisionType; // @dynamic supervisionType;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMUserParameters;

@interface GMSx_GMMAppStartResponseProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int gaiaResponse; // @dynamic gaiaResponse;
@property(nonatomic) _Bool hasGaiaResponse; // @dynamic hasGaiaResponse;
@property(nonatomic) _Bool hasUserParameters; // @dynamic hasUserParameters;
@property(retain, nonatomic) GMSx_GMMUserParameters *userParameters; // @dynamic userParameters;

@end


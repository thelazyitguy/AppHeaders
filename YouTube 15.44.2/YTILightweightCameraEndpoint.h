//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTICommand;

@interface YTILightweightCameraEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *destinationEndpoint; // @dynamic destinationEndpoint;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasDestinationEndpoint; // @dynamic hasDestinationEndpoint;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool hasReelEditScreenType; // @dynamic hasReelEditScreenType;
@property(nonatomic) _Bool hasTimeLimit; // @dynamic hasTimeLimit;
@property(retain, nonatomic) NSMutableArray *overlayRenderersArray; // @dynamic overlayRenderersArray;
@property(readonly, nonatomic) unsigned long long overlayRenderersArray_Count; // @dynamic overlayRenderersArray_Count;
@property(copy, nonatomic) NSString *params; // @dynamic params;
@property(nonatomic) int reelEditScreenType; // @dynamic reelEditScreenType;
@property(nonatomic) int timeLimit; // @dynamic timeLimit;

@end


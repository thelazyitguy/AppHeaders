//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCKOCEnvironmentScan, NSString;

@interface GCKOCFindDevicesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *applicationId; // @dynamic applicationId;
@property(retain, nonatomic) GCKOCEnvironmentScan *environmentScan; // @dynamic environmentScan;
@property(nonatomic) _Bool hasApplicationId; // @dynamic hasApplicationId;
@property(nonatomic) _Bool hasEnvironmentScan; // @dynamic hasEnvironmentScan;

@end


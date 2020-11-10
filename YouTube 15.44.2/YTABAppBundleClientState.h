//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTABAppBundlePartition;

@interface YTABAppBundleClientState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTABAppBundlePartition *activePartition; // @dynamic activePartition;
@property(copy, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;
@property(nonatomic) _Bool hasActivePartition; // @dynamic hasActivePartition;
@property(nonatomic) _Bool hasClientIdentifier; // @dynamic hasClientIdentifier;
@property(nonatomic) _Bool hasInfoToReport; // @dynamic hasInfoToReport;
@property(nonatomic) _Bool hasPendingPartition; // @dynamic hasPendingPartition;
@property(nonatomic) _Bool hasTempPartition; // @dynamic hasTempPartition;
@property(copy, nonatomic) NSData *infoToReport; // @dynamic infoToReport;
@property(retain, nonatomic) YTABAppBundlePartition *pendingPartition; // @dynamic pendingPartition;
@property(retain, nonatomic) YTABAppBundlePartition *tempPartition; // @dynamic tempPartition;

@end


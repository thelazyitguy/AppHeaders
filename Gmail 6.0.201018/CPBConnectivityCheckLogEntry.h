//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class CPBCallPerfLogEntry_DataPoint_Connection_SignalStrength, NSMutableArray;

@interface CPBConnectivityCheckLogEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNetworkType; // @dynamic hasNetworkType;
@property(nonatomic) _Bool hasReason; // @dynamic hasReason;
@property(nonatomic) _Bool hasRttToWcs; // @dynamic hasRttToWcs;
@property(nonatomic) _Bool hasSignalStrength; // @dynamic hasSignalStrength;
@property(nonatomic) int networkType; // @dynamic networkType;
@property(retain, nonatomic) NSMutableArray *nicInfoArray; // @dynamic nicInfoArray;
@property(readonly, nonatomic) unsigned long long nicInfoArray_Count; // @dynamic nicInfoArray_Count;
@property(nonatomic) int reason; // @dynamic reason;
@property(nonatomic) int rttToWcs; // @dynamic rttToWcs;
@property(retain, nonatomic) CPBCallPerfLogEntry_DataPoint_Connection_SignalStrength *signalStrength; // @dynamic signalStrength;

@end

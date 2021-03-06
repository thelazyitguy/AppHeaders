//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class ClientInfo, CollectForDebug, DeviceStatus, ExternalTimestamp, NSMutableArray, NSString;

@interface LogRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int appMobilespecId; // @dynamic appMobilespecId;
@property(retain, nonatomic) ClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) CollectForDebug *collectForDebug; // @dynamic collectForDebug;
@property(retain, nonatomic) DeviceStatus *deviceStatus; // @dynamic deviceStatus;
@property(retain, nonatomic) ExternalTimestamp *externalTimestamp; // @dynamic externalTimestamp;
@property(nonatomic) _Bool hasAppMobilespecId; // @dynamic hasAppMobilespecId;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) _Bool hasCollectForDebug; // @dynamic hasCollectForDebug;
@property(nonatomic) _Bool hasDeviceStatus; // @dynamic hasDeviceStatus;
@property(nonatomic) _Bool hasExternalTimestamp; // @dynamic hasExternalTimestamp;
@property(nonatomic) _Bool hasLogEventDroppedCount; // @dynamic hasLogEventDroppedCount;
@property(nonatomic) _Bool hasLogSource; // @dynamic hasLogSource;
@property(nonatomic) _Bool hasLogSourceName; // @dynamic hasLogSourceName;
@property(nonatomic) _Bool hasQosTier; // @dynamic hasQosTier;
@property(nonatomic) _Bool hasRequestTimeMs; // @dynamic hasRequestTimeMs;
@property(nonatomic) _Bool hasRequestUptimeMs; // @dynamic hasRequestUptimeMs;
@property(nonatomic) _Bool hasScheduler; // @dynamic hasScheduler;
@property(nonatomic) _Bool hasZwiebackCookie; // @dynamic hasZwiebackCookie;
@property(retain, nonatomic) NSMutableArray *logEventArray; // @dynamic logEventArray;
@property(readonly, nonatomic) unsigned long long logEventArray_Count; // @dynamic logEventArray_Count;
@property(nonatomic) long long logEventDroppedCount; // @dynamic logEventDroppedCount;
@property(nonatomic) int logSource; // @dynamic logSource;
@property(copy, nonatomic) NSString *logSourceName; // @dynamic logSourceName;
@property(nonatomic) int qosTier; // @dynamic qosTier;
@property(nonatomic) long long requestTimeMs; // @dynamic requestTimeMs;
@property(nonatomic) long long requestUptimeMs; // @dynamic requestUptimeMs;
@property(nonatomic) int scheduler; // @dynamic scheduler;
@property(retain, nonatomic) NSMutableArray *serializedLogEventsArray; // @dynamic serializedLogEventsArray;
@property(readonly, nonatomic) unsigned long long serializedLogEventsArray_Count; // @dynamic serializedLogEventsArray_Count;
@property(copy, nonatomic) NSString *zwiebackCookie; // @dynamic zwiebackCookie;

@end


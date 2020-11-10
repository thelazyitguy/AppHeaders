//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class AppUsage1pLogEvent, EXHExperimentIds, GPBInt32Array, NSData, NSString, NetworkConnectionInfo;

@interface LogEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AppUsage1pLogEvent *appUsage1P; // @dynamic appUsage1P;
@property(nonatomic) long long bootCount; // @dynamic bootCount;
@property(copy, nonatomic) NSData *clientVe; // @dynamic clientVe;
@property(copy, nonatomic) NSString *clientVeJs; // @dynamic clientVeJs;
@property(copy, nonatomic) NSString *componentId; // @dynamic componentId;
@property(nonatomic) int eventCode; // @dynamic eventCode;
@property(nonatomic) long long eventFlowId; // @dynamic eventFlowId;
@property(nonatomic) long long eventTimeMs; // @dynamic eventTimeMs;
@property(nonatomic) long long eventUptimeMs; // @dynamic eventUptimeMs;
@property(retain, nonatomic) EXHExperimentIds *experimentIds; // @dynamic experimentIds;
@property(retain, nonatomic) GPBInt32Array *genericDimensionsArray; // @dynamic genericDimensionsArray;
@property(readonly, nonatomic) unsigned long long genericDimensionsArray_Count; // @dynamic genericDimensionsArray_Count;
@property(nonatomic) _Bool hasAppUsage1P; // @dynamic hasAppUsage1P;
@property(nonatomic) _Bool hasBootCount; // @dynamic hasBootCount;
@property(nonatomic) _Bool hasClientVe; // @dynamic hasClientVe;
@property(nonatomic) _Bool hasClientVeJs; // @dynamic hasClientVeJs;
@property(nonatomic) _Bool hasComponentId; // @dynamic hasComponentId;
@property(nonatomic) _Bool hasEventCode; // @dynamic hasEventCode;
@property(nonatomic) _Bool hasEventFlowId; // @dynamic hasEventFlowId;
@property(nonatomic) _Bool hasEventTimeMs; // @dynamic hasEventTimeMs;
@property(nonatomic) _Bool hasEventUptimeMs; // @dynamic hasEventUptimeMs;
@property(nonatomic) _Bool hasExperimentIds; // @dynamic hasExperimentIds;
@property(nonatomic) _Bool hasInDirectBootMode; // @dynamic hasInDirectBootMode;
@property(nonatomic) _Bool hasInternalEvent; // @dynamic hasInternalEvent;
@property(nonatomic) _Bool hasIsUserInitiated; // @dynamic hasIsUserInitiated;
@property(nonatomic) _Bool hasNetworkConnectionInfo; // @dynamic hasNetworkConnectionInfo;
@property(nonatomic) _Bool hasSequencePosition; // @dynamic hasSequencePosition;
@property(nonatomic) _Bool hasSourceExtension; // @dynamic hasSourceExtension;
@property(nonatomic) _Bool hasSourceExtensionJs; // @dynamic hasSourceExtensionJs;
@property(nonatomic) _Bool hasSourceExtensionJson; // @dynamic hasSourceExtensionJson;
@property(nonatomic) _Bool hasSourceExtensionJsonProto3; // @dynamic hasSourceExtensionJsonProto3;
@property(nonatomic) _Bool hasStore; // @dynamic hasStore;
@property(nonatomic) _Bool hasTag; // @dynamic hasTag;
@property(nonatomic) _Bool hasTestId; // @dynamic hasTestId;
@property(nonatomic) _Bool hasTimezoneOffsetSeconds; // @dynamic hasTimezoneOffsetSeconds;
@property(nonatomic) _Bool hasZwiebackCookieOverride; // @dynamic hasZwiebackCookieOverride;
@property(nonatomic) _Bool inDirectBootMode; // @dynamic inDirectBootMode;
@property(nonatomic) int internalEvent; // @dynamic internalEvent;
@property(nonatomic) _Bool isUserInitiated; // @dynamic isUserInitiated;
@property(retain, nonatomic) NetworkConnectionInfo *networkConnectionInfo; // @dynamic networkConnectionInfo;
@property(nonatomic) long long sequencePosition; // @dynamic sequencePosition;
@property(copy, nonatomic) NSData *sourceExtension; // @dynamic sourceExtension;
@property(copy, nonatomic) NSString *sourceExtensionJs; // @dynamic sourceExtensionJs;
@property(copy, nonatomic) NSString *sourceExtensionJson; // @dynamic sourceExtensionJson;
@property(copy, nonatomic) NSString *sourceExtensionJsonProto3; // @dynamic sourceExtensionJsonProto3;
@property(copy, nonatomic) NSData *store; // @dynamic store;
@property(copy, nonatomic) NSString *tag; // @dynamic tag;
@property(retain, nonatomic) GPBInt32Array *testCodeArray; // @dynamic testCodeArray;
@property(readonly, nonatomic) unsigned long long testCodeArray_Count; // @dynamic testCodeArray_Count;
@property(copy, nonatomic) NSString *testId; // @dynamic testId;
@property(nonatomic) long long timezoneOffsetSeconds; // @dynamic timezoneOffsetSeconds;
@property(copy, nonatomic) NSString *zwiebackCookieOverride; // @dynamic zwiebackCookieOverride;

@end


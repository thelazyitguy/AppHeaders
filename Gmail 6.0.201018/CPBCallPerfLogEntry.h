//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface CPBCallPerfLogEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool accepted; // @dynamic accepted;
@property(copy, nonatomic) NSString *callId; // @dynamic callId;
@property(nonatomic) int callLengthSec; // @dynamic callLengthSec;
@property(nonatomic) long long callMediaInitiateMsec; // @dynamic callMediaInitiateMsec;
@property(nonatomic) long long callMediaSetupMsec; // @dynamic callMediaSetupMsec;
@property(nonatomic) int clientTerminateCode; // @dynamic clientTerminateCode;
@property(retain, nonatomic) NSMutableArray *dataPointArray; // @dynamic dataPointArray;
@property(readonly, nonatomic) unsigned long long dataPointArray_Count; // @dynamic dataPointArray_Count;
@property(copy, nonatomic) NSString *debugInfo; // @dynamic debugInfo;
@property(nonatomic) int deprecatedVoiceCallTerminateCode; // @dynamic deprecatedVoiceCallTerminateCode;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(nonatomic) long long gaiaId; // @dynamic gaiaId;
@property(nonatomic) int handoffReason; // @dynamic handoffReason;
@property(nonatomic) _Bool hasAccepted; // @dynamic hasAccepted;
@property(nonatomic) _Bool hasCallId; // @dynamic hasCallId;
@property(nonatomic) _Bool hasCallLengthSec; // @dynamic hasCallLengthSec;
@property(nonatomic) _Bool hasCallMediaInitiateMsec; // @dynamic hasCallMediaInitiateMsec;
@property(nonatomic) _Bool hasCallMediaSetupMsec; // @dynamic hasCallMediaSetupMsec;
@property(nonatomic) _Bool hasClientTerminateCode; // @dynamic hasClientTerminateCode;
@property(nonatomic) _Bool hasDebugInfo; // @dynamic hasDebugInfo;
@property(nonatomic) _Bool hasDeprecatedVoiceCallTerminateCode; // @dynamic hasDeprecatedVoiceCallTerminateCode;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasGaiaId; // @dynamic hasGaiaId;
@property(nonatomic) _Bool hasHandoffReason; // @dynamic hasHandoffReason;
@property(nonatomic) _Bool hasOtherUserCountryCode; // @dynamic hasOtherUserCountryCode;
@property(nonatomic) _Bool hasOtherUserJid; // @dynamic hasOtherUserJid;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(nonatomic) _Bool hasStartTimestampMsec; // @dynamic hasStartTimestampMsec;
@property(nonatomic) _Bool hasTelephonyApiDisconnectReason; // @dynamic hasTelephonyApiDisconnectReason;
@property(nonatomic) _Bool hasTerminateCode; // @dynamic hasTerminateCode;
@property(copy, nonatomic) NSString *otherUserCountryCode; // @dynamic otherUserCountryCode;
@property(copy, nonatomic) NSString *otherUserJid; // @dynamic otherUserJid;
@property(copy, nonatomic) NSString *startTime; // @dynamic startTime;
@property(nonatomic) long long startTimestampMsec; // @dynamic startTimestampMsec;
@property(copy, nonatomic) NSString *telephonyApiDisconnectReason; // @dynamic telephonyApiDisconnectReason;
@property(nonatomic) int terminateCode; // @dynamic terminateCode;

@end


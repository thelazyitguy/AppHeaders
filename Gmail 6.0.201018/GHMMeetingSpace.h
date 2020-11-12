//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GHMMeetingSpace_BroadcastAccess, GHMMeetingSpace_CallInfo, GHMMeetingSpace_GatewayAccess, GHMMeetingSpace_Settings, GHMMeetingSpace_UniversalPhoneAccess, GPBEnumArray, NSMutableArray, NSString;

@interface GHMMeetingSpace : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *acceptedNumberClassArray; // @dynamic acceptedNumberClassArray;
@property(readonly, nonatomic) unsigned long long acceptedNumberClassArray_Count; // @dynamic acceptedNumberClassArray_Count;
@property(retain, nonatomic) GHMMeetingSpace_BroadcastAccess *broadcastAccess; // @dynamic broadcastAccess;
@property(retain, nonatomic) GHMMeetingSpace_CallInfo *callInfo; // @dynamic callInfo;
@property(retain, nonatomic) GHMMeetingSpace_GatewayAccess *gatewayAccess; // @dynamic gatewayAccess;
@property(retain, nonatomic) NSMutableArray *gatewaySipAccessArray; // @dynamic gatewaySipAccessArray;
@property(readonly, nonatomic) unsigned long long gatewaySipAccessArray_Count; // @dynamic gatewaySipAccessArray_Count;
@property(nonatomic) _Bool hasBroadcastAccess; // @dynamic hasBroadcastAccess;
@property(nonatomic) _Bool hasCallInfo; // @dynamic hasCallInfo;
@property(nonatomic) _Bool hasGatewayAccess; // @dynamic hasGatewayAccess;
@property(nonatomic) _Bool hasSettings; // @dynamic hasSettings;
@property(nonatomic) _Bool hasUniversalPhoneAccess; // @dynamic hasUniversalPhoneAccess;
@property(copy, nonatomic) NSString *meetingAlias; // @dynamic meetingAlias;
@property(copy, nonatomic) NSString *meetingCode; // @dynamic meetingCode;
@property(copy, nonatomic) NSString *meetingSpaceId; // @dynamic meetingSpaceId;
@property(copy, nonatomic) NSString *meetingURL; // @dynamic meetingURL;
@property(copy, nonatomic) NSString *moreJoinURL; // @dynamic moreJoinURL;
@property(retain, nonatomic) NSMutableArray *phoneAccessArray; // @dynamic phoneAccessArray;
@property(readonly, nonatomic) unsigned long long phoneAccessArray_Count; // @dynamic phoneAccessArray_Count;
@property(retain, nonatomic) GHMMeetingSpace_Settings *settings; // @dynamic settings;
@property(retain, nonatomic) GHMMeetingSpace_UniversalPhoneAccess *universalPhoneAccess; // @dynamic universalPhoneAccess;

@end

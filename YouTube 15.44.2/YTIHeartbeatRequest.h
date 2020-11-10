//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTIHeartbeatRequestParams, YTIInnerTubeContext;

@interface YTIHeartbeatRequest : GPBMessage
{
}

+ (id)descriptor;
- (_Bool)requestParamsContainCheckType:(int)arg1;
- (_Bool)containsLiveStreamCheckType;
- (_Bool)containsLicenseCheckType;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *cpn; // @dynamic cpn;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasCpn; // @dynamic hasCpn;
@property(nonatomic) _Bool hasHeartbeatRequestParams; // @dynamic hasHeartbeatRequestParams;
@property(nonatomic) _Bool hasHeartbeatServerData; // @dynamic hasHeartbeatServerData;
@property(nonatomic) _Bool hasHeartbeatToken; // @dynamic hasHeartbeatToken;
@property(nonatomic) _Bool hasSequenceNumber; // @dynamic hasSequenceNumber;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(retain, nonatomic) YTIHeartbeatRequestParams *heartbeatRequestParams; // @dynamic heartbeatRequestParams;
@property(copy, nonatomic) NSData *heartbeatServerData; // @dynamic heartbeatServerData;
@property(copy, nonatomic) NSString *heartbeatToken; // @dynamic heartbeatToken;
@property(nonatomic) int sequenceNumber; // @dynamic sequenceNumber;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

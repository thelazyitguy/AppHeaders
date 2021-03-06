//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface PartnerBannerSessionEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bannerSessionId; // @dynamic bannerSessionId;
@property(copy, nonatomic) NSString *connectedApp; // @dynamic connectedApp;
@property(copy, nonatomic) NSString *eventReason; // @dynamic eventReason;
@property(copy, nonatomic) NSString *eventType; // @dynamic eventType;
@property(nonatomic) _Bool hasBannerSessionId; // @dynamic hasBannerSessionId;
@property(nonatomic) _Bool hasConnectedApp; // @dynamic hasConnectedApp;
@property(nonatomic) _Bool hasEventReason; // @dynamic hasEventReason;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasSessionLengthSeconds; // @dynamic hasSessionLengthSeconds;
@property(nonatomic) _Bool hasSessionType; // @dynamic hasSessionType;
@property(nonatomic) long long sessionLengthSeconds; // @dynamic sessionLengthSeconds;
@property(copy, nonatomic) NSString *sessionType; // @dynamic sessionType;
@property(retain, nonatomic) NSMutableArray *shownAppsArray; // @dynamic shownAppsArray;
@property(readonly, nonatomic) unsigned long long shownAppsArray_Count; // @dynamic shownAppsArray_Count;

@end


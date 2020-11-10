//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBTimestamp, GRWRequestContext, NSString;

@interface GRWScheduleRemindMeLaterNotificationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRequestContext; // @dynamic hasRequestContext;
@property(nonatomic) _Bool hasUserRequestTime; // @dynamic hasUserRequestTime;
@property(nonatomic) long long notificationScheduledDelayInMinutes; // @dynamic notificationScheduledDelayInMinutes;
@property(nonatomic) int originalSessionId; // @dynamic originalSessionId;
@property(copy, nonatomic) NSString *originalTreatmentName; // @dynamic originalTreatmentName;
@property(retain, nonatomic) GRWRequestContext *requestContext; // @dynamic requestContext;
@property(retain, nonatomic) GPBTimestamp *userRequestTime; // @dynamic userRequestTime;

@end


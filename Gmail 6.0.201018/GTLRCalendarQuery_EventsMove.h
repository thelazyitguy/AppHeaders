//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRCalendarQuery.h"

@class NSString;

@interface GTLRCalendarQuery_EventsMove : GTLRCalendarQuery
{
}

+ (id)queryWithCalendarId:(id)arg1 eventId:(id)arg2 destination:(id)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *calendarId; // @dynamic calendarId;
@property(copy, nonatomic) NSString *destination; // @dynamic destination;
@property(copy, nonatomic) NSString *eventId; // @dynamic eventId;
@property(nonatomic) _Bool expandGroupAttendees; // @dynamic expandGroupAttendees;
@property(nonatomic) long long maxImageDimension; // @dynamic maxImageDimension;
@property(nonatomic) _Bool sendNotifications; // @dynamic sendNotifications;
@property(copy, nonatomic) NSString *sendUpdates; // @dynamic sendUpdates;
@property(nonatomic) _Bool showRanges; // @dynamic showRanges;
@property(nonatomic) _Bool supportsAllDayReminders; // @dynamic supportsAllDayReminders;

@end


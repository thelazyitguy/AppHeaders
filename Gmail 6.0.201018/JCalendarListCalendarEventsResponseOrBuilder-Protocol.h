//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class JCalendarErrorCode, JCalendarListCalendarEventsResponse_CalendarEventsForMessageDeprecated;
@protocol JavaUtilList;

@protocol JCalendarListCalendarEventsResponseOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCalendarErrorCode *)getErrorCode;
- (_Bool)hasErrorCode;
- (JCalendarListCalendarEventsResponse_CalendarEventsForMessageDeprecated *)getCalendarEventsForMessageWithInt:(int)arg1;
- (id <JavaUtilList>)getCalendarEventsForMessageList;
- (int)getCalendarEventsForMessageCount;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class JCalendarEventTime, JCalendarIcalProposal_Freshness, NSString;

@protocol JCalendarIcalProposalOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCalendarIcalProposal_Freshness *)getFreshness;
- (_Bool)hasFreshness;
- (_Bool)getMatchesOriginalEvent;
- (_Bool)hasMatchesOriginalEvent;
- (JCalendarEventTime *)getTime;
- (_Bool)hasTime;
- (NSString *)getEndDateTime;
- (_Bool)hasEndDateTime;
- (NSString *)getStartDateTime;
- (_Bool)hasStartDateTime;
- (NSString *)getCalendar;
- (_Bool)hasCalendar;
- (NSString *)getEventId;
- (_Bool)hasEventId;
@end

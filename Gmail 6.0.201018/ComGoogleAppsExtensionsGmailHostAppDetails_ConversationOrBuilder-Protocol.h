//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsExtensionsGmailHostAppDetails_Conversation_CalendarServerEid, ComGoogleAppsExtensionsGmailHostAppDetails_Conversation_Message, ComGoogleAppsExtensionsGmailHostAppDetails_Conversation_Participant, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsExtensionsGmailHostAppDetails_ConversationOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsExtensionsGmailHostAppDetails_Conversation_CalendarServerEid *)getCalendarServerEid;
- (_Bool)hasCalendarServerEid;
- (ComGoogleAppsExtensionsGmailHostAppDetails_Conversation_Message *)getSelectedMessage;
- (_Bool)hasSelectedMessage;
- (ComGoogleAppsExtensionsGmailHostAppDetails_Conversation_Participant *)getParticipantsWithInt:(int)arg1;
- (id <JavaUtilList>)getParticipantsList;
- (int)getParticipantsCount;
- (NSString *)getSubject;
- (_Bool)hasSubject;
- (NSString *)getThreadServerPermId;
- (_Bool)hasThreadServerPermId;
@end

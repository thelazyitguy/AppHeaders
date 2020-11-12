//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class HOPBStreamRequest, NSString;

@interface HOPBMediaStream : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *hangoutId; // @dynamic hangoutId;
@property(nonatomic) _Bool hasHangoutId; // @dynamic hasHangoutId;
@property(nonatomic) _Bool hasMediaType; // @dynamic hasMediaType;
@property(nonatomic) _Bool hasParticipantId; // @dynamic hasParticipantId;
@property(nonatomic) _Bool hasRequest; // @dynamic hasRequest;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasSourceId; // @dynamic hasSourceId;
@property(nonatomic) _Bool hasStreamId; // @dynamic hasStreamId;
@property(nonatomic) _Bool hasVideoIsCroppable; // @dynamic hasVideoIsCroppable;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSString *participantId; // @dynamic participantId;
@property(retain, nonatomic) HOPBStreamRequest *request; // @dynamic request;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(copy, nonatomic) NSString *sourceId; // @dynamic sourceId;
@property(copy, nonatomic) NSString *streamId; // @dynamic streamId;
@property(nonatomic) _Bool videoIsCroppable; // @dynamic videoIsCroppable;

@end

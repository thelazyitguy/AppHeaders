//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCoding-Protocol.h>

@class GHKChatSessionEphemeralData, NSMutableArray, NSString;

@interface GHKChatSessionData : NSObject <NSCoding>
{
    NSString *_userEmail;
    NSString *_chatPoolID;
    NSString *_sessionID;
    NSString *_customerID;
    NSString *_conversationID;
    NSString *_caseID;
    NSString *_participantID;
    unsigned long long _state;
    long long _initialQueuePosition;
    long long _queuePosition;
    unsigned long long _lastSeenEventID;
    NSMutableArray *_conversationMessageData;
    NSMutableArray *_pendingConversationMessageData;
    GHKChatSessionEphemeralData *_ephemeral;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GHKChatSessionEphemeralData *ephemeral; // @synthesize ephemeral=_ephemeral;
@property(retain, nonatomic) NSMutableArray *pendingConversationMessageData; // @synthesize pendingConversationMessageData=_pendingConversationMessageData;
@property(retain, nonatomic) NSMutableArray *conversationMessageData; // @synthesize conversationMessageData=_conversationMessageData;
@property(nonatomic) unsigned long long lastSeenEventID; // @synthesize lastSeenEventID=_lastSeenEventID;
@property(nonatomic) long long queuePosition; // @synthesize queuePosition=_queuePosition;
@property(nonatomic) long long initialQueuePosition; // @synthesize initialQueuePosition=_initialQueuePosition;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(copy, nonatomic) NSString *caseID; // @synthesize caseID=_caseID;
@property(copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(copy, nonatomic) NSString *customerID; // @synthesize customerID=_customerID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *chatPoolID; // @synthesize chatPoolID=_chatPoolID;
@property(readonly, copy, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)resetChatSession;
- (_Bool)isValidChatSession;
- (id)init;
- (id)initWithUserEmail:(id)arg1;

@end


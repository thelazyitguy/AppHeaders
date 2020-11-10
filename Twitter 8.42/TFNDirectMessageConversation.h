//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFNDirectMessageConversation-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSMutableOrderedSet, NSNumber, NSString, TFNDirectMessageComposition, TFNDirectMessageContext, TFNDirectMessageConversationIdentifier, TFNDirectMessageConversationParticipant, TFNDirectMessageInbox, TFNDirectMessageModel, TFNDirectMessageUser, TFSTwitterEntityImageInfo;
@protocol TFNDirectMessageConversationEntry, TFNDirectMessageConversationParticipant, TFNDirectMessageConversationSocialProof;

@interface TFNDirectMessageConversation : NSObject <NSCoding, TFNDirectMessageConversation>
{
    _Bool _trusted;
    _Bool _topRequest;
    _Bool _lowQuality;
    _Bool _notificationsDisabled;
    _Bool _mentionNotificationsDisabled;
    _Bool _muted;
    _Bool _nsfw;
    _Bool _hasMoreEntries;
    _Bool _readOnly;
    _Bool _filtered;
    _Bool _partial;
    _Bool _participantsNeedSorting;
    _Bool _hasPendingAvatarInfo;
    _Bool _hasPendingConversationName;
    _Bool _hasPendingMentionNotificationsDisabled;
    _Bool _pendingMentionNotificationsDisabled;
    _Bool _hasPendingNotificationsDisabled;
    _Bool _pendingNotificationsDisabled;
    TFSTwitterEntityImageInfo *_avatarInfo;
    TFNDirectMessageContext *_context;
    NSString *_conversationName;
    NSNumber *_topRequestRank;
    NSDate *_snoozeExpirationTime;
    long long _lastReadEventID;
    id <TFNDirectMessageConversationSocialProof> _socialProof;
    TFNDirectMessageModel *_directMessageModel;
    TFNDirectMessageInbox *_inbox;
    long long _minEntryID;
    TFNDirectMessageComposition *_composition;
    long long _creatorID;
    NSDate *_latestUpdateTime;
    NSString *_initialMessageRequestID;
    TFNDirectMessageConversationIdentifier *_identifier;
    NSDate *_createTime;
    NSMutableArray *_entryList;
    NSMutableOrderedSet *_participantsSet;
    long long _sortEventID;
    TFSTwitterEntityImageInfo *_pendingAvatarInfo;
    NSString *_pendingConversationName;
    long long _pendingLastReadEventID;
    NSDate *_pendingSnoozeExpirationTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *pendingSnoozeExpirationTime; // @synthesize pendingSnoozeExpirationTime=_pendingSnoozeExpirationTime;
@property(nonatomic, getter=isPendingNotificationsDisabled) _Bool pendingNotificationsDisabled; // @synthesize pendingNotificationsDisabled=_pendingNotificationsDisabled;
@property(nonatomic) _Bool hasPendingNotificationsDisabled; // @synthesize hasPendingNotificationsDisabled=_hasPendingNotificationsDisabled;
@property(nonatomic, getter=isPendingMentionNotificationsDisabled) _Bool pendingMentionNotificationsDisabled; // @synthesize pendingMentionNotificationsDisabled=_pendingMentionNotificationsDisabled;
@property(nonatomic) _Bool hasPendingMentionNotificationsDisabled; // @synthesize hasPendingMentionNotificationsDisabled=_hasPendingMentionNotificationsDisabled;
@property(nonatomic) long long pendingLastReadEventID; // @synthesize pendingLastReadEventID=_pendingLastReadEventID;
@property(copy, nonatomic) NSString *pendingConversationName; // @synthesize pendingConversationName=_pendingConversationName;
@property(nonatomic) _Bool hasPendingConversationName; // @synthesize hasPendingConversationName=_hasPendingConversationName;
@property(retain, nonatomic) TFSTwitterEntityImageInfo *pendingAvatarInfo; // @synthesize pendingAvatarInfo=_pendingAvatarInfo;
@property(nonatomic) _Bool hasPendingAvatarInfo; // @synthesize hasPendingAvatarInfo=_hasPendingAvatarInfo;
@property(nonatomic) long long sortEventID; // @synthesize sortEventID=_sortEventID;
@property(readonly, nonatomic) NSMutableOrderedSet *participantsSet; // @synthesize participantsSet=_participantsSet;
@property(nonatomic) _Bool participantsNeedSorting; // @synthesize participantsNeedSorting=_participantsNeedSorting;
@property(readonly, nonatomic) NSMutableArray *entryList; // @synthesize entryList=_entryList;
@property(retain, nonatomic) NSDate *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) TFNDirectMessageConversationIdentifier *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *initialMessageRequestID; // @synthesize initialMessageRequestID=_initialMessageRequestID;
@property(nonatomic, getter=isPartial) _Bool partial; // @synthesize partial=_partial;
@property(retain, nonatomic) NSDate *latestUpdateTime; // @synthesize latestUpdateTime=_latestUpdateTime;
@property(nonatomic) long long creatorID; // @synthesize creatorID=_creatorID;
@property(nonatomic, getter=isFiltered) _Bool filtered; // @synthesize filtered=_filtered;
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(nonatomic) _Bool hasMoreEntries; // @synthesize hasMoreEntries=_hasMoreEntries;
@property(retain, nonatomic) TFNDirectMessageComposition *composition; // @synthesize composition=_composition;
@property(nonatomic) long long minEntryID; // @synthesize minEntryID=_minEntryID;
@property(nonatomic) __weak TFNDirectMessageInbox *inbox; // @synthesize inbox=_inbox;
@property(retain, nonatomic) TFNDirectMessageModel *directMessageModel; // @synthesize directMessageModel=_directMessageModel;
@property(nonatomic, getter=isNSFW) _Bool nsfw; // @synthesize nsfw=_nsfw;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic, getter=isLowQuality) _Bool lowQuality; // @synthesize lowQuality=_lowQuality;
@property(retain, nonatomic) NSNumber *topRequestRank; // @synthesize topRequestRank=_topRequestRank;
@property(nonatomic, getter=isTopRequest) _Bool topRequest; // @synthesize topRequest=_topRequest;
@property(nonatomic, getter=isTrusted) _Bool trusted; // @synthesize trusted=_trusted;
@property(readonly, nonatomic) TFNDirectMessageContext *context; // @synthesize context=_context;
- (void)_enqueueMetadataUpdateNotification;
- (void)_enqueueTimelineUpdateNotification;
- (void)_notifyIfUnreadChangesInBlock:(CDUnknownBlockType)arg1;
- (void)_sortParticipantsIfNeeded;
- (_Bool)_shouldAssimilateConversation:(id)arg1;
- (void)_removeReactionsForMessageID:(id)arg1;
- (void)removeEntriesThroughID:(long long)arg1;
- (void)removeEntry:(id)arg1;
- (void)assimilateConversationMetadata:(id)arg1;
- (void)assimilateCursor:(id)arg1;
- (void)assimilateConversation:(id)arg1;
- (void)_postTrustStateChanged;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(retain, nonatomic) id <TFNDirectMessageConversationSocialProof> socialProof; // @synthesize socialProof=_socialProof;
- (void)removeParticipants:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)didBecomeDefinitive;
- (void)loadOneToOneParticipantsFromUserCache:(id)arg1;
- (void)tfn_addEntry:(id)arg1 replacingEntry:(id)arg2 notifyEntryUpdateOnly:(_Bool)arg3;
- (void)addEntry:(id)arg1 replacingEntry:(id)arg2;
- (void)addEntry:(id)arg1 replacingLocalEntryWithIdentifier:(id)arg2 notifyEntryUpdateOnly:(_Bool)arg3;
- (void)addEntry:(id)arg1 replacingLocalEntryWithIdentifier:(id)arg2;
- (void)addEntry:(id)arg1;
- (void)_pruneAllEarlierCanonicalReactionsFrom:(id)arg1 onMessage:(id)arg2;
- (void)unmarkEntryAsSpam:(id)arg1;
- (void)markEntryAsSpam:(id)arg1;
- (void)markEntryAsAbuse:(id)arg1;
@property(readonly, nonatomic) NSDate *snoozeExpirationTime; // @synthesize snoozeExpirationTime=_snoozeExpirationTime;
@property(readonly, nonatomic) _Bool notificationsDisabled; // @synthesize notificationsDisabled=_notificationsDisabled;
- (void)revertPendingNotificationsDisabled;
- (void)setNotificationsDisabled:(_Bool)arg1 expirationTime:(id)arg2 source:(unsigned long long)arg3;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) CDStruct_778018ce nextEntrySortKey;
@property(readonly, nonatomic) unsigned long long entryCount;
- (id)admin;
- (id)recipient;
@property(readonly, nonatomic) TFNDirectMessageConversationParticipant *recipientParticipant;
@property(readonly, nonatomic) TFNDirectMessageUser *perspectivalUser;
@property(readonly, nonatomic) id <TFNDirectMessageConversationParticipant> perspectivalParticipant;
@property(readonly, nonatomic) NSArray *participantsExcludingPerspectivalUser;
@property(copy, nonatomic) NSArray *participants;
- (void)setLastReadEventID:(long long)arg1 source:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool hasPendingLastReadEventID;
@property(readonly, nonatomic) long long lastReadEventID; // @synthesize lastReadEventID=_lastReadEventID;
@property(readonly, nonatomic) CDStruct_912cb5d2 readState;
@property(readonly, nonatomic) _Bool isIdentifiable;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) _Bool unread;
- (void)revertPendingMentionNotificationsDisabled;
- (void)setMentionNotificationsDisabled:(_Bool)arg1 source:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool mentionNotificationsDisabled; // @synthesize mentionNotificationsDisabled=_mentionNotificationsDisabled;
@property(readonly, copy, nonatomic) NSString *conversationName; // @synthesize conversationName=_conversationName;
- (void)revertPendingConversationName;
- (void)setConversationName:(id)arg1 source:(unsigned long long)arg2;
@property(readonly, nonatomic) TFSTwitterEntityImageInfo *avatarInfo; // @synthesize avatarInfo=_avatarInfo;
- (void)revertPendingAvatarInfo;
- (void)setAvatarInfo:(id)arg1 source:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=isDraft) _Bool draft;
@property(readonly, nonatomic) _Bool isSelfConversation;
@property(readonly, nonatomic) long long conversationType;
@property(readonly, copy, nonatomic) NSString *requestID;
@property(readonly, copy, nonatomic) NSString *conversationID;
- (long long)compare:(id)arg1;
- (void)pruneOldEntriesToCount:(unsigned long long)arg1 preservingUnreadConversations:(_Bool)arg2;
- (void)pruneOldEntries;
- (void)updateReadOnlyState:(_Bool)arg1;
- (void)resetComposition;
- (id)latestEntryOfType:(unsigned long long)arg1;
@property(readonly, nonatomic) id <TFNDirectMessageConversationEntry> latestEntry;
- (id)entryAtIndex:(unsigned long long)arg1;
- (id)conversation;
@property(readonly, nonatomic) NSArray *allEntries;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2;
- (id)initWithIdentifier:(id)arg1 requestID:(id)arg2 context:(id)arg3;
- (id)initWithConversationID:(id)arg1 requestID:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


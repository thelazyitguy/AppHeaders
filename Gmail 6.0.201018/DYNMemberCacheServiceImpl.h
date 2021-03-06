//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNMemberCacheService-Protocol.h"
#import "DYNObserverDelegate-Protocol.h"

@class GSCAccount, NSMutableDictionary, NSMutableSet, NSString, PHSChannel;
@protocol DYNJavaObjectFactoryService, DYNMemberCacheServiceDelegate, DYNObserverManager, DYNSharedLayerService, GIPAccountID;

@interface DYNMemberCacheServiceImpl : NSObject <DYNObserverDelegate, DYNMemberCacheService>
{
    id <DYNSharedLayerService> _sharedLayerService;
    id <GIPAccountID> _accountID;
    NSMutableSet *_unknownMemberIdentifiers;
    NSMutableSet *_unknownUserIdentifiers;
    NSMutableSet *_unknownRosterIdentifiers;
    NSMutableSet *_pendingMemberIdentifiers;
    NSMutableSet *_pendingUserIdentifiers;
    NSMutableSet *_pendingRosterIdentifiers;
    NSMutableDictionary *_memberCacheUserIDMissesByIDString;
    NSMutableDictionary *_membersBeingFetchedByIDString;
    NSMutableSet *_memberCacheRosterMisses;
    NSMutableDictionary *_populousCache;
    NSMutableDictionary *_memberCache;
    NSMutableDictionary *_restrictedMembersCache;
    NSMutableDictionary *_fetchCompletionBlocks;
    NSMutableDictionary *_waitingSenders;
    NSMutableDictionary *_memberReFetchTimes;
    id <DYNObserverManager> _observerManager;
    _Bool _queuedCacheMissResolve;
    PHSChannel *_accountUpdateChannel;
    GSCAccount *_account;
    int _userProfileRetrievedMetricInverseSamplingRate;
    id <DYNJavaObjectFactoryService> _javaObjectFactoryService;
    id <DYNMemberCacheServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DYNMemberCacheServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setUserProfileRetrievedMetricInverseSamplingRate:(int)arg1;
- (void)clearCache;
- (void)cacheMembers:(id)arg1;
- (void)establishUnknownMemberReFetchTime:(double)arg1 forMemberWithID:(id)arg2;
- (_Bool)lastReFetchTimeWasTooRecentWithCurrentTime:(double)arg1 forMemberWithID:(id)arg2;
- (id)cachedPopulousMemberWithGaiaID:(id)arg1;
- (id)cachedMemberWithGaiaID:(id)arg1 groupID:(id)arg2;
- (id)cachedMemberWithMemberID:(id)arg1;
- (_Bool)isMemberPending:(id)arg1;
- (void)clearSendersWaitingForCallbacksWithMemberID:(id)arg1;
- (id)allCompletionBlocksWithMemberIDString:(id)arg1;
- (void)invokeAndRemoveUnrestrictedCallbacksForMemberIDString:(id)arg1 withMember:(id)arg2;
- (void)invokeAndRemoveRestrictedCallbacksForMemberID:(id)arg1 withMember:(id)arg2 memberIDString:(id)arg3;
- (void)invokeAndRemoveCallbacksForMemberID:(id)arg1 withMember:(id)arg2;
- (void)addMemberToCache:(id)arg1 withMemberID:(id)arg2;
- (_Bool)populateCache:(id)arg1;
- (void)addMemberToCache:(id)arg1;
- (void)queueCacheResolve;
- (void)removeMemberIDFromPendingMemberIdentifiers:(id)arg1;
- (void)removeMemberIDFromUserIDMisses:(id)arg1;
- (void)addMemberIDToCacheMisses:(id)arg1;
- (_Bool)isMemberIDInCacheMisses:(id)arg1;
- (void)removeMemberIDFromMembersBeingFetched:(id)arg1;
- (void)addMembersToMembersBeingFetched:(id)arg1 withMemberIDString:(id)arg2;
- (_Bool)isMemberBeingFetchedForMemberID:(id)arg1;
- (void)maybeLogUserProfileRetrievedFromCache:(id)arg1;
- (void)cacheUnknownMemberIDs:(id)arg1;
- (void)addCallback:(CDUnknownBlockType)arg1 toCompletionBlocksForMemberID:(id)arg2;
- (void)establishWaitingCallbackWithMemberID:(id)arg1 senderID:(id)arg2;
- (_Bool)isCallbackAlreadyEstablishedWithMemberID:(id)arg1 senderID:(id)arg2;
- (id)senderIdentifier:(id)arg1;
- (void)establishAndEnqueueCallbacksIfNeededWithMemberID:(id)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didUpdateMembers:(id)arg1;
- (id)memberIDWithUserIDString:(id)arg1 groupID:(id)arg2;
- (id)memberIDWithRosterID:(id)arg1;
- (id)memberIDWithUserID:(id)arg1 groupID:(id)arg2;
- (_Bool)isRosterPending:(id)arg1;
- (_Bool)isUserPending:(id)arg1;
- (id)unknownUserWithNoIdentifier;
- (_Bool)isUserUnknown:(id)arg1;
- (void)setUserForPopulousCache:(id)arg1 userID:(id)arg2;
- (id)initialMembersIDsBeingFetched;
- (void)resolveCacheMisses;
- (void)fetchRosterWithID:(id)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchUserWithID:(id)arg1 groupID:(id)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchMemberWithID:(id)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)memberIDsFromUserIDs:(id)arg1 withGroupID:(id)arg2;
- (void)fetchUsersWithIDs:(id)arg1 groupID:(id)arg2 sender:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchMembersWithIds:(id)arg1 sender:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)unknownMemberWithMemberID:(id)arg1;
- (id)cachedUnknownMemberWithMemberID:(id)arg1;
- (id)pendingMemberWithMemberID:(id)arg1;
- (id)knownRosterWithID:(id)arg1;
- (id)knownUserWithID:(id)arg1 groupID:(id)arg2;
- (id)knownMemberWithID:(id)arg1;
- (id)rosterWithID:(id)arg1;
- (id)userWithID:(id)arg1 groupID:(id)arg2;
- (id)signedInAccountUser;
- (id)memberWithID:(id)arg1;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


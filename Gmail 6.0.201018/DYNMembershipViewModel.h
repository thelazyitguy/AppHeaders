//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNGroupInfoSubscriptionDirectMessageCreationListener-Protocol.h"
#import "DYNGroupInfoSubscriptionServiceListener-Protocol.h"
#import "DYNObserverDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSString;
@protocol DYNExperimentsService, DYNGroup, DYNGroupId, DYNGroupInfoSubscriptionService, DYNGroupInfoSubscriptionToken, DYNMemberCacheService, DYNMembershipViewModelDelegate, DYNObserverManager, DYNSharedLayerService, DYNSpaceId, GIPAccountID;

@interface DYNMembershipViewModel : NSObject <DYNObserverDelegate, DYNGroupInfoSubscriptionServiceListener, DYNGroupInfoSubscriptionDirectMessageCreationListener>
{
    id <GIPAccountID> _accountID;
    id <DYNGroupId> _groupID;
    id <DYNSpaceId> _spaceID;
    id <DYNExperimentsService> _experimentsService;
    id <DYNMemberCacheService> _memberCacheService;
    id <DYNObserverManager> _observerManager;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNGroupInfoSubscriptionService> _subscriptionService;
    id <DYNGroupInfoSubscriptionToken> _groupInfoSubscriptionToken;
    NSMutableOrderedSet *_groupMembersSet;
    NSMutableArray *_invitedMembersArray;
    NSArray *_membershipStateSectionModel;
    _Bool _leavingGroup;
    _Bool _joiningGroup;
    _Bool _blockingGroup;
    unsigned long long _membersListPage;
    NSArray *_cachedSortedGroupMembers;
    NSArray *_cachedSortedInvitedMembers;
    _Bool _groupStarred;
    _Bool _directMessage;
    _Bool _botDirectMessage;
    _Bool _inPreview;
    _Bool _roomMuted;
    _Bool _historyOn;
    _Bool _deletingConversation;
    _Bool _starring;
    _Bool _muting;
    _Bool _togglingHistory;
    id <DYNMembershipViewModelDelegate> _delegate;
    id <DYNGroup> _groupModel;
    NSMutableArray *_invitedMemberIDs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool togglingHistory; // @synthesize togglingHistory=_togglingHistory;
@property(nonatomic) _Bool muting; // @synthesize muting=_muting;
@property(nonatomic) _Bool starring; // @synthesize starring=_starring;
@property(readonly, nonatomic, getter=isDeletingConversation) _Bool deletingConversation; // @synthesize deletingConversation=_deletingConversation;
@property(readonly, nonatomic) _Bool historyOn; // @synthesize historyOn=_historyOn;
@property(readonly, nonatomic, getter=isRoomMuted) _Bool roomMuted; // @synthesize roomMuted=_roomMuted;
@property(readonly, nonatomic, getter=isInPreview) _Bool inPreview; // @synthesize inPreview=_inPreview;
@property(readonly, nonatomic, getter=isBotDirectMessage) _Bool botDirectMessage; // @synthesize botDirectMessage=_botDirectMessage;
@property(readonly, nonatomic, getter=isDirectMessage) _Bool directMessage; // @synthesize directMessage=_directMessage;
@property(readonly, nonatomic, getter=isGroupStarred) _Bool groupStarred; // @synthesize groupStarred=_groupStarred;
@property(readonly, nonatomic) NSMutableArray *invitedMemberIDs; // @synthesize invitedMemberIDs=_invitedMemberIDs;
@property(retain, nonatomic) id <DYNGroup> groupModel; // @synthesize groupModel=_groupModel;
@property(nonatomic) __weak id <DYNMembershipViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)directMessageCreatedWithID:(id)arg1 userIDs:(id)arg2;
- (void)groupEncounteredError:(id)arg1 forGroupID:(id)arg2;
- (void)groupJoinedWithID:(id)arg1;
- (void)membershipRemovedForGroupWithID:(id)arg1;
- (void)groupInfoUpdated:(id)arg1 forGroupID:(id)arg2;
- (void)handleGroupInfoUpdatedWithGroup:(id)arg1;
- (void)didStarGroup:(id)arg1;
- (void)didUpdateGroupNotificationSettings:(id)arg1;
- (void)didUpdateMembers:(id)arg1;
- (void)fetchInvitedMemberIDs;
- (void)onFetchedMembers:(id)arg1;
- (void)fetchInvitedMembersFromCache:(id)arg1;
- (void)fetchGroupMembersFromCache:(id)arg1;
- (void)fetchUsersFromCache:(id)arg1;
- (void)fetchGroupMemberIDs;
- (void)fetchGroupMembers;
- (void)fetchMembershipState;
- (void)undoRemoveUser:(id)arg1 invited:(_Bool)arg2;
- (void)updateStateWithGroupModel:(id)arg1;
- (void)finishInitializingWithTitle:(id)arg1 usersForDMCreation:(id)arg2;
- (void)finishInitializingWithGroupModel:(id)arg1;
- (void)historyStateUpdated:(_Bool)arg1;
- (void)toggleHistoryToState:(_Bool)arg1;
- (void)toggleNotificationSettings;
- (void)removeUser:(id)arg1 invited:(_Bool)arg2;
- (id)clearRoomatarEmojiStringForGroupModel:(id)arg1;
- (id)updateGroupInfoWithRoomatarEmojiString:(id)arg1;
- (id)updateGroupInfoWithName:(id)arg1;
- (void)deleteConversation;
- (void)removeBotDM;
- (void)unhideDM;
- (void)hideDM;
- (void)onFailedToJoinRoomWithError:(id)arg1;
- (void)onJoinedRoom;
- (void)joinRoom;
- (void)didFailToBlockRoomWithError:(id)arg1 isBlocked:(_Bool)arg2;
- (void)didBlockRoom:(_Bool)arg1;
- (void)blockRoom:(_Bool)arg1 shouldReport:(_Bool)arg2;
- (void)leaveRoom;
- (void)starGroup;
- (id)headerSubtitleForSection:(unsigned int)arg1;
- (id)headerTitleForSection:(unsigned int)arg1;
- (void)refreshMembers;
- (void)refreshAllItems;
- (void)refreshItemsForSection:(unsigned int)arg1;
- (void)loadAdditionalMembers;
- (id)itemsForSection:(unsigned int)arg1;
- (long long)numberOfSections;
- (id)invitedMembers;
- (id)groupMembers;
- (void)stopObserving;
- (void)startObserving;
- (id)initWithAccountID:(id)arg1 groupModel:(id)arg2 usersForDmCreation:(id)arg3 title:(id)arg4 inPreview:(_Bool)arg5 historyIsOn:(_Bool)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNDMSupplementalRenderDelegate-Protocol.h"
#import "DYNRoomHeaderContentViewDelegate-Protocol.h"
#import "DYNStreamBehavior-Protocol.h"

@class NSString;
@protocol DYNSharedLayerService, DYNStream, GIPAccountID;

@interface DYNConversationHeaderBehavior : NSObject <DYNRoomHeaderContentViewDelegate, DYNStreamBehavior, DYNDMSupplementalRenderDelegate>
{
    _Bool _haveRequestedMemberFetch;
    id <GIPAccountID> _accountID;
    id <DYNStream> _stream;
    id <DYNSharedLayerService> _sharedLayerService;
    _Bool _addMembersWaitingForMembership;
}

- (void).cxx_destruct;
- (_Bool)shouldShowRoomHeaderWithState:(id)arg1;
- (_Bool)allowsInvitationToGroup:(id)arg1 withState:(id)arg2;
- (id)roomHeaderContentViewObject:(id)arg1;
- (void)showAddMembersViewControllerWithState:(id)arg1;
- (_Bool)shouldDirectMessageHeaderBeVisibleWithModel:(id)arg1;
- (id)groupNameFromObject:(id)arg1;
- (void)updateHeaderIfNeededWithChangedNavigationBarInStream:(id)arg1 withState:(id)arg2;
- (id)knownPrimaryDmPartnerFromState:(id)arg1;
- (id)usersForHeaderWithState:(id)arg1;
- (id)directMessageConversationHeaderObject:(id)arg1;
- (void)createHeaderContentViewObjectInStream:(id)arg1 withState:(id)arg2;
- (void)handleMembershipInfoBecameAvailableEventInStream:(id)arg1 withState:(id)arg2;
- (_Bool)canCreateHeaderContentViewObjectWithState:(id)arg1;
- (void)handleHeaderWantedChangedEventInStream:(id)arg1 withState:(id)arg2;
- (void)configureHeaderVisibilityWithState:(id)arg1;
- (void)roomHeaderDidTapInviteButton:(id)arg1;
- (id)modelAfterRemovingObjectsFromModel:(id)arg1 withState:(id)arg2;
- (id)modelAfterProcessingObjectsInModel:(id)arg1 withState:(id)arg2;
- (id)modelAfterInsertingObjectsIntoModel:(id)arg1 withState:(id)arg2;
- (void)finalizeWithStreamState:(id)arg1;
- (void)handleEventsInStream:(id)arg1 withState:(id)arg2 oldState:(id)arg3;
- (void)initializeWithStream:(id)arg1 state:(id)arg2;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

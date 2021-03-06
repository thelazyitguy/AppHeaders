//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface DYNSApiSharedApiImpl_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> executorProvider_;
    id <JavaxInjectProvider> lifecycleProvider_;
    id <JavaxInjectProvider> sharedApiLauncherProvider_;
    id <JavaxInjectProvider> uiSubscriptionManagerProvider_;
    id <JavaxInjectProvider> acceptDmInviteActionProvider_;
    id <JavaxInjectProvider> activateUserStatusSubscriptionActionProvider_;
    id <JavaxInjectProvider> blockRoomActionProvider_;
    id <JavaxInjectProvider> blockUserActionProvider_;
    id <JavaxInjectProvider> cancelFormActionProvider_;
    id <JavaxInjectProvider> clearHistoryActionProvider_;
    id <JavaxInjectProvider> clickCardActionProvider_;
    id <JavaxInjectProvider> createBotDmActionProvider_;
    id <JavaxInjectProvider> createDmActionProvider_;
    id <JavaxInjectProvider> createSpaceActionProvider_;
    id <JavaxInjectProvider> createTopicActionProvider_;
    id <JavaxInjectProvider> createVideoCallActionProvider_;
    id <JavaxInjectProvider> deleteDraftReplyActionProvider_;
    id <JavaxInjectProvider> deleteDraftTopicActionProvider_;
    id <JavaxInjectProvider> deleteFailedMessageActionProvider_;
    id <JavaxInjectProvider> deleteLocalAnnotationMetadataActionProvider_;
    id <JavaxInjectProvider> deleteMessageActionProvider_;
    id <JavaxInjectProvider> editMessageActionProvider_;
    id <JavaxInjectProvider> expandCollapsedMessagesActionProvider_;
    id <JavaxInjectProvider> failBlockedMessageActionProvider_;
    id <JavaxInjectProvider> fetchDriveActionsActionProvider_;
    id <JavaxInjectProvider> fetchUserStatusActionProvider_;
    id <JavaxInjectProvider> filterGroupUsersActionProvider_;
    id <JavaxInjectProvider> filterInvitedRoomsActionProvider_;
    id <JavaxInjectProvider> filterWorldActionProvider_;
    id <JavaxInjectProvider> getAccountOwnerStatusActionProvider_;
    id <JavaxInjectProvider> getAccountUserActionProvider_;
    id <JavaxInjectProvider> getAccountUserMembershipStateActionProvider_;
    id <JavaxInjectProvider> getAutocompleteBotUsersActionProvider_;
    id <JavaxInjectProvider> getAutocompleteSlashCommandsActionProvider_;
    id <JavaxInjectProvider> getBlockedUserIdsActionProvider_;
    id <JavaxInjectProvider> getChannelAssistActionProvider_;
    id <JavaxInjectProvider> getDomainAndGroupOtrDataActionProvider_;
    id <JavaxInjectProvider> getDraftReplyActionProvider_;
    id <JavaxInjectProvider> getDraftTopicActionProvider_;
    id <JavaxInjectProvider> getGlobalDasherDomainPoliciesActionProvider_;
    id <JavaxInjectProvider> getGroupActionProvider_;
    id <JavaxInjectProvider> getIdForDmActionProvider_;
    id <JavaxInjectProvider> getGroupMembersActionProvider_;
    id <JavaxInjectProvider> getGroupMemberIdsForInvitedSpaceActionProvider_;
    id <JavaxInjectProvider> getGroupUsersActionProvider_;
    id <JavaxInjectProvider> getInitialMessagesAroundAnchorInFlatGroupActionProvider_;
    id <JavaxInjectProvider> getInitialMessagesInFlatGroupActionProvider_;
    id <JavaxInjectProvider> getInitialTopicsActionProvider_;
    id <JavaxInjectProvider> getInvitedFlatGroupPreviewActionProvider_;
    id <JavaxInjectProvider> getInvitedMemberIdsActionProvider_;
    id <JavaxInjectProvider> getInvitedRoomsActionProvider_;
    id <JavaxInjectProvider> getInvitedSpacePreviewActionProvider_;
    id <JavaxInjectProvider> getLocalAnnotationMetadataActionProvider_;
    id <JavaxInjectProvider> getLocalGroupSummariesActionProvider_;
    id <JavaxInjectProvider> getLocalTopicWithMessagesActionProvider_;
    id <JavaxInjectProvider> getMembersActionProvider_;
    id <JavaxInjectProvider> getMembershipFromNetworkActionProvider_;
    id <JavaxInjectProvider> getMessageActionProvider_;
    id <JavaxInjectProvider> getMessageFlightLogsActionProvider_;
    id <JavaxInjectProvider> getMessagePreviewAnnotationsActionProvider_;
    id <JavaxInjectProvider> getMessagePreviewAnnotationsForNewDmActionProvider_;
    id <JavaxInjectProvider> getMessagesActionProvider_;
    id <JavaxInjectProvider> getMessagesFromNetworkActionProvider_;
    id <JavaxInjectProvider> getMessagesInFlatGroupActionProvider_;
    id <JavaxInjectProvider> getMostRecentTopicsInSpaceActionProvider_;
    id <JavaxInjectProvider> getNextTopicsActionProvider_;
    id <JavaxInjectProvider> getNotificationSettingActionProvider_;
    id <JavaxInjectProvider> getGlobalNotificationSettingActionProvider_;
    id <JavaxInjectProvider> getPendingCreationDmNameActionProvider_;
    id <JavaxInjectProvider> getPreviousTopicsActionProvider_;
    id <JavaxInjectProvider> getReactorsActionProvider_;
    id <JavaxInjectProvider> getShouldReadFromRoomNotificationSettingsActionProvider_;
    id <JavaxInjectProvider> getShouldShowDmOtrEducationActionProvider_;
    id <JavaxInjectProvider> getShouldShowRoomNotificationsPromoActionProvider_;
    id <JavaxInjectProvider> getShouldShowWorkingHoursEducationActionProvider_;
    id <JavaxInjectProvider> getSpamDmInviteStreamActionProvider_;
    id <JavaxInjectProvider> getTopicMessagesActionProvider_;
    id <JavaxInjectProvider> getTopicWithLatestMessagesActionProvider_;
    id <JavaxInjectProvider> getTopicWithMessagesFromNetworkActionProvider_;
    id <JavaxInjectProvider> getUnviewedInvitedRoomsCountActionProvider_;
    id <JavaxInjectProvider> getWorkingHoursActionProvider_;
    id <JavaxInjectProvider> hideGroupActionProvider_;
    id <JavaxInjectProvider> inviteMembersActionProvider_;
    id <JavaxInjectProvider> invokeDialogActionProvider_;
    id <JavaxInjectProvider> joinSpaceActionProvider_;
    id <JavaxInjectProvider> leaveSpaceActionProvider_;
    id <JavaxInjectProvider> markAllInvitedRoomsAsViewedActionProvider_;
    id <JavaxInjectProvider> markGroupReadActionProvider_;
    id <JavaxInjectProvider> markTopicReadActionProvider_;
    id <JavaxInjectProvider> blockedMessageActionProvider_;
    id <JavaxInjectProvider> optimisticallyMarkGroupReadActionProvider_;
    id <JavaxInjectProvider> ownerTypedActionProvider_;
    id <JavaxInjectProvider> postMessageActionProvider_;
    id <JavaxInjectProvider> postMessageInFlatGroupActionProvider_;
    id <JavaxInjectProvider> postBlockedMessageActionProvider_;
    id <JavaxInjectProvider> processNotificationsActionProvider_;
    id <JavaxInjectProvider> removeMemberActionProvider_;
    id <JavaxInjectProvider> reportGroupSelectedFromWorldViewActionProvider_;
    id <JavaxInjectProvider> reportGroupsDisplayedActionProvider_;
    id <JavaxInjectProvider> resendMessageActionProvider_;
    id <JavaxInjectProvider> restoreFailedBlockedMessageActionProvider_;
    id <JavaxInjectProvider> saveBlockedMessageActionProvider_;
    id <JavaxInjectProvider> saveBlockedMessageInFlatGroupActionProvider_;
    id <JavaxInjectProvider> addToDriveActionProvider_;
    id <JavaxInjectProvider> searchMessagesInTopicActionProvider_;
    id <JavaxInjectProvider> searchTopicsActionProvider_;
    id <JavaxInjectProvider> sendToInboxActionProvider_;
    id <JavaxInjectProvider> setDndDurationActionProvider_;
    id <JavaxInjectProvider> setFirstOtrEducationActionProvider_;
    id <JavaxInjectProvider> setFirstRoomNotificationsPromoActionProvider_;
    id <JavaxInjectProvider> setFirstWorkingHoursEducationActionProvider_;
    id <JavaxInjectProvider> setMarkAsUnreadTimeMicrosActionProvider_;
    id <JavaxInjectProvider> setUserStatusActionProvider_;
    id <JavaxInjectProvider> setWorkingHoursActionProvider_;
    id <JavaxInjectProvider> starGroupActionProvider_;
    id <JavaxInjectProvider> submitFormActionProvider_;
    id <JavaxInjectProvider> subscribeToUserStatusUpdatesActionProvider_;
    id <JavaxInjectProvider> syncActiveStateActionProvider_;
    id <JavaxInjectProvider> syncGroupMembersActionProvider_;
    id <JavaxInjectProvider> syncOnFlatGroupNotificationActionProvider_;
    id <JavaxInjectProvider> syncOnTopicNotificationActionProvider_;
    id <JavaxInjectProvider> syncUserSettingsActionProvider_;
    id <JavaxInjectProvider> turnOffDndActionProvider_;
    id <JavaxInjectProvider> unsubscribeFromUserStatusUpdatesActionProvider_;
    id <JavaxInjectProvider> unsubscribeFromAllUserStatusUpdatesActionProvider_;
    id <JavaxInjectProvider> updateGroupOtrStateActionProvider_;
    id <JavaxInjectProvider> updateDraftReplyActionProvider_;
    id <JavaxInjectProvider> updateDraftTopicActionProvider_;
    id <JavaxInjectProvider> updateGroupNotificationSettingsActionProvider_;
    id <JavaxInjectProvider> updateGroupRetentionSettingsActionProvider_;
    id <JavaxInjectProvider> updateLocalAnnotationMetadataActionProvider_;
    id <JavaxInjectProvider> updateNotificationSettingActionProvider_;
    id <JavaxInjectProvider> updateGlobalNotificationSettingActionProvider_;
    id <JavaxInjectProvider> updateBlockedMessageAnnotationsActionProvider_;
    id <JavaxInjectProvider> renewUserStatusSubscriptionActionProvider_;
    id <JavaxInjectProvider> updateReactionActionProvider_;
    id <JavaxInjectProvider> updateSpaceActionProvider_;
    id <JavaxInjectProvider> updateTopicMuteStateActionProvider_;
    id <JavaxInjectProvider> uploadClientMessageFlightLogActionProvider_;
    id <JavaxInjectProvider> validateConversationSuggestionsActionProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


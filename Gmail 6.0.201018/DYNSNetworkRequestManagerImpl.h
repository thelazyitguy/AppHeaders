//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSNetworkRequestManagerDefaultImpl.h"

@class ComGoogleAppsDynamiteV1SharedFlagsCapabilitiesClientFeatureCapabilitiesManager, ComGoogleAppsXplatJobsJobLauncher, DYNSCommonPlatform, DYNSDataModelsConvertersGroupUserStateConverter, DYNSDataModelsConvertersMessageConverter, DYNSDataModelsConvertersUserSettingsConverter, DYNSNetworkProtoConversionUtil, DYNSNetworkResponseExceptionHandler, DYNSNetworkRetryConfigFactory, DYNSNetworkUrlConstants, JavaUtilConcurrentAtomicAtomicReference, NSString;
@protocol ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser, ComGoogleAppsDynamiteV1SharedUtilIdGenerator, DYNSAnalyticsClearcutEventsLogger, DYNSCommonSeededRandom, DYNSFlagsSharedConfiguration, DYNSNetworkRequestNativeLogger, DYNSNetworkRpcRequester, JavaUtilConcurrentExecutor;

@interface DYNSNetworkRequestManagerImpl : DYNSNetworkRequestManagerDefaultImpl
{
    id <ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser> accountUser_;
    long long appVersionCode_;
    JavaUtilConcurrentAtomicAtomicReference *requestMonitorReference_;
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    ComGoogleAppsDynamiteV1SharedFlagsCapabilitiesClientFeatureCapabilitiesManager *clientFeatureCapabilitiesManager_;
    id <DYNSFlagsSharedConfiguration> sharedConfiguration_;
    id <JavaUtilConcurrentExecutor> dataExecutor_;
    DYNSDataModelsConvertersGroupUserStateConverter *groupUserStateConverter_;
    id <DYNSNetworkRpcRequester> rpcRequester_;
    id <ComGoogleAppsDynamiteV1SharedUtilIdGenerator> idGenerator_;
    ComGoogleAppsXplatJobsJobLauncher *jobLauncher_;
    DYNSDataModelsConvertersMessageConverter *messageConverter_;
    DYNSCommonPlatform *platform_;
    DYNSNetworkProtoConversionUtil *protoConversionUtil_;
    DYNSNetworkResponseExceptionHandler *responseExceptionHandler_;
    DYNSNetworkRetryConfigFactory *retryConfigFactory_;
    id <DYNSNetworkRequestNativeLogger> requestNativeLogger_;
    id <DYNSCommonSeededRandom> seededRandom_;
    NSString *deviceId_;
    DYNSNetworkUrlConstants *urlConstants_;
    DYNSDataModelsConvertersUserSettingsConverter *userSettingsConverter_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getFiltersProtoWithBoolean:(_Bool)arg1 withBoolean:(_Bool)arg2;
- (id)generateRequestHeaderWithRandomTraceId;
- (id)sendRequestWithDYNProtoRpcType:(id)arg1 withJavaUtilOptional:(id)arg2 withJavaUtilOptional:(id)arg3 withNSString:(id)arg4 withComGoogleProtobufMessageLite:(id)arg5 withComGoogleProtobufMessageLite:(id)arg6 withDYNSNetworkRequestManagerImpl_RetryConfigType:(id)arg7 withBoolean:(_Bool)arg8 withJavaUtilOptional:(id)arg9;
- (id)sendRequestWithDYNProtoRpcType:(id)arg1 withJavaUtilOptional:(id)arg2 withJavaUtilOptional:(id)arg3 withNSString:(id)arg4 withComGoogleProtobufMessageLite:(id)arg5 withComGoogleProtobufMessageLite:(id)arg6 withDYNSNetworkRequestManagerImpl_RetryConfigType:(id)arg7;
- (id)sendRequestWithDYNProtoRpcType:(id)arg1 withJavaUtilOptional:(id)arg2 withNSString:(id)arg3 withComGoogleProtobufMessageLite:(id)arg4 withComGoogleProtobufMessageLite:(id)arg5 withDYNSNetworkRequestManagerImpl_RetryConfigType:(id)arg6;
- (void)markRequestComplete;
- (void)setRequestMonitorWithDYNSNetworkApiRequestManager_RequestMonitor:(id)arg1;
- (id)signalOwnerTypingForTopicWithDYNSCommonTopicId:(id)arg1;
- (id)signalOwnerTypingForDmWithDYNSCommonGroupId:(id)arg1;
- (id)sendToInboxWithDYNSCommonMessageId:(id)arg1;
- (id)getReactorsWithDYNSCommonMessageId:(id)arg1 withDYNSCommonEmoji:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)updateReactionWithDYNSCommonMessageId:(id)arg1 withDYNSCommonEmoji:(id)arg2 withBoolean:(_Bool)arg3 withJavaUtilOptional:(id)arg4;
- (id)hideGroupWithDYNSCommonGroupId:(id)arg1 withBoolean:(_Bool)arg2 withJavaUtilOptional:(id)arg3;
- (id)updateGroupOtrStateWithDYNSCommonGroupId:(id)arg1 withBoolean:(_Bool)arg2 withJavaUtilOptional:(id)arg3;
- (id)cancelFormWithDYNSCommonMessageId:(id)arg1 withDYNSCommonUserId:(id)arg2;
- (id)submitFormWithDYNSCommonMessageId:(id)arg1 withDYNSCommonUserId:(id)arg2 withJAddOnsFormAction:(id)arg3 withDYNIntegrationSubmitFormActionRequest_FormActionEvent:(id)arg4 withComGoogleCommonCollectImmutableList:(id)arg5;
- (id)starGroupWithDYNSCommonGroupId:(id)arg1 withBoolean:(_Bool)arg2 withJavaUtilOptional:(id)arg3;
- (id)updateGroupRetentionSettingsWithDYNSCommonMessageId:(id)arg1 withDYNProtoRetentionSettings_RetentionState:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)updateGroupNotificationSettingsWithDYNSCommonGroupId:(id)arg1 withDYNSCommonGroupNotificationSettingOrMutedState:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)searchMessagesInTopicWithDYNSCommonTopicId:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2 withComGoogleCommonCollectImmutableList:(id)arg3 withNSString:(id)arg4 withInt:(int)arg5 withJavaUtilOptional:(id)arg6;
- (id)searchMessagesV2WithNSString:(id)arg1 withJavaUtilOptional:(id)arg2 withInt:(int)arg3 withJavaUtilOptional:(id)arg4;
- (id)searchTopicsWithJavaUtilOptional:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2 withComGoogleCommonCollectImmutableList:(id)arg3 withNSString:(id)arg4 withInt:(int)arg5 withInt:(int)arg6 withJavaUtilOptional:(id)arg7;
- (id)removeMemberFromGroupWithDYNSCommonGroupId:(id)arg1 withDYNSCommonMemberId:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)registerWebChannel;
- (id)inviteMembersToGroupWithDYNSCommonGroupId:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2 withBoolean:(_Bool)arg3;
- (id)getInvitedRoomsForInviteCategoryWithDYNProtoInviteCategory:(id)arg1;
- (id)getInvitedRooms;
- (id)getInvitedMembersWithDYNSCommonSpaceId:(id)arg1 withInt:(int)arg2 withBoolean:(_Bool)arg3 withJavaUtilOptional:(id)arg4;
- (id)getJoinedMembersWithDYNSCommonGroupId:(id)arg1 withBoolean:(_Bool)arg2 withJavaUtilOptional:(id)arg3;
- (id)getJoinedAndInvitedMemberIdsWithDYNSCommonGroupId:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)setFirstWorkingHoursEducation;
- (id)setFirstUsageWithJavaUtilOptional:(id)arg1;
- (id)setFirstRoomNotificationsPromo;
- (id)setFirstOtrEducation;
- (id)setPresenceSharedWithBoolean:(_Bool)arg1 withJavaUtilOptional:(id)arg2;
- (id)setDndDurationWithLong:(long long)arg1 withJavaUtilOptional:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)setCustomStatusExpiryWithNSString:(id)arg1 withJavaUtilOptional:(id)arg2 withLong:(long long)arg3 withJavaUtilOptional:(id)arg4;
- (id)setCustomStatusDurationWithNSString:(id)arg1 withJavaUtilOptional:(id)arg2 withLong:(long long)arg3 withJavaUtilOptional:(id)arg4;
- (id)clearCustomStatusWithJavaUtilOptional:(id)arg1;
- (id)updateGlobalNotificationSettingWithDYNSModelsCommonGlobalNotificationSetting:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)updateNotificationSettingWithDYNSModelsCommonNotificationSetting:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)joinSpaceWithDYNSCommonSpaceId:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)setDefaultWorkingHoursSettingsWithNSString:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)setWorkingHoursSettingsWithDYNSModelsCommonWorkingHoursSettings:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)getWorkingHoursSettingsWithJavaUtilOptional:(id)arg1;
- (id)getUserSettingsAtRevisionWithJavaUtilOptional:(id)arg1 withComGoogleCommonCollectImmutableSet:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)getUserStatusWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)getUserPresenceWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)getUnviewedInvitedRoomsCount;
- (id)getServerTime;
- (id)getMembersWithComGoogleCommonCollectImmutableList:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)getMessagePreviewMetadataForDmWithNSString:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)getMessagePreviewMetadataForSpaceWithNSString:(id)arg1 withDYNSCommonGroupId:(id)arg2;
- (id)getTopicsAroundTopicIdWithDYNSCommonGroupId:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withDYNSCommonTopicId:(id)arg5 withJavaUtilOptional:(id)arg6;
- (id)getTopicsAroundSortTimeAtRevisionWithDYNSCommonGroupId:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withLong:(long long)arg5 withJavaUtilOptional:(id)arg6 withJavaUtilOptional:(id)arg7 withJavaUtilOptional:(id)arg8;
- (id)getTopicsAtRevisionWithDYNSCommonGroupId:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaUtilOptional:(id)arg5 withJavaUtilOptional:(id)arg6 withJavaUtilOptional:(id)arg7;
- (id)getSmartRepliesForTopicsWithComGoogleCommonCollectImmutableList:(id)arg1 withJavaUtilMap:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)getSmartRepliesForDmsWithComGoogleCommonCollectImmutableList:(id)arg1 withJavaUtilMap:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)getSelfUserStatusWithJavaUtilOptional:(id)arg1;
- (id)getNextTopicsAtRevisionWithDYNSCommonGroupId:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withLong:(long long)arg5 withJavaUtilOptional:(id)arg6 withJavaUtilOptional:(id)arg7 withJavaUtilOptional:(id)arg8;
- (id)getPreviousTopicsAtRevisionWithDYNSCommonGroupId:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withLong:(long long)arg5 withJavaUtilOptional:(id)arg6 withJavaUtilOptional:(id)arg7 withJavaUtilOptional:(id)arg8;
- (id)getMostRecentGroupTopicsAtRevisionWithDYNSCommonGroupId:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaUtilOptional:(id)arg5 withJavaUtilOptional:(id)arg6;
- (id)getMessageFlightLogsWithDYNSCommonMessageId:(id)arg1;
- (id)getMembershipStateWithDYNSCommonGroupId:(id)arg1;
- (id)findDmByMembersWithComGoogleCommonCollectImmutableList:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)editMessageWithDYNSCommonMessageId:(id)arg1 withNSString:(id)arg2 withComGoogleCommonCollectImmutableList:(id)arg3 withJavaUtilOptional:(id)arg4;
- (id)deleteMessageWithDYNSCommonMessageId:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)createVideoCall;
- (id)createTopicWithDYNSCommonGroupId:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withComGoogleCommonCollectImmutableList:(id)arg4 withDYNProtoRetentionSettings_RetentionState:(id)arg5 withJavaUtilOptional:(id)arg6;
- (id)syncMutationsWithComGoogleCommonCollectImmutableList:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)createDmWithoutMessageWithComGoogleCommonCollectImmutableList:(id)arg1 withBoolean:(_Bool)arg2 withBoolean:(_Bool)arg3 withJavaUtilOptional:(id)arg4;
- (id)createDmWithComGoogleCommonCollectImmutableList:(id)arg1 withNSString:(id)arg2 withComGoogleCommonCollectImmutableList:(id)arg3 withNSString:(id)arg4 withBoolean:(_Bool)arg5 withBoolean:(_Bool)arg6 withJavaUtilOptional:(id)arg7;
- (id)createBotDmWithDYNSCommonUserId:(id)arg1 withBoolean:(_Bool)arg2 withJavaUtilOptional:(id)arg3;
- (id)getConversationSuggestions;
- (id)getChannelAssistsWithComGoogleCommonCollectImmutableList:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)getInvokeDialogWithDYNSCommonMessageId:(id)arg1 withDYNSCommonUserId:(id)arg2;
- (id)getAutocompleteSlashCommandsWithNSString:(id)arg1 withDYNSCommonGroupId:(id)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4 withComGoogleCommonCollectImmutableList:(id)arg5 withBoolean:(_Bool)arg6;
- (id)getAutocompleteBotUsersWithNSString:(id)arg1 withBoolean:(_Bool)arg2 withBoolean:(_Bool)arg3 withInt:(int)arg4;
- (id)createSpaceAndAddMembersWithNSString:(id)arg1 withBoolean:(_Bool)arg2 withBoolean:(_Bool)arg3 withComGoogleCommonCollectImmutableList:(id)arg4 withJavaUtilOptional:(id)arg5 withDYNSCommonAvatarInfo:(id)arg6;
- (id)createSpaceAndAddMembersWithNSString:(id)arg1 withBoolean:(_Bool)arg2 withComGoogleAppsDynamiteV1SharedAttributeCheckerGroupType:(id)arg3 withComGoogleCommonCollectImmutableList:(id)arg4 withJavaUtilOptional:(id)arg5 withDYNSCommonAvatarInfo:(id)arg6 withJavaUtilOptional:(id)arg7;
- (id)createSpaceWithNSString:(id)arg1 withBoolean:(_Bool)arg2 withBoolean:(_Bool)arg3 withDYNSCommonAvatarInfo:(id)arg4 withJavaUtilOptional:(id)arg5;
- (id)catchUpUserDataWithDYNSCommonInternalRevision:(id)arg1 withJavaUtilOptional:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaUtilOptional:(id)arg5;
- (id)catchUpGroupDataWithDYNSCommonGroupId:(id)arg1 withDYNSCommonInternalRevision:(id)arg2 withJavaUtilOptional:(id)arg3 withInt:(int)arg4 withInt:(int)arg5 withJavaUtilOptional:(id)arg6;
- (id)updateTopicMuteStateWithDYNSCommonTopicId:(id)arg1 withBoolean:(_Bool)arg2 withJavaUtilOptional:(id)arg3;
- (id)setMarkAsUnreadTimeMicrosWithDYNSCommonGroupId:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)markTopicAsReadWithDYNSCommonTopicId:(id)arg1 withLong:(long long)arg2 withJavaUtilOptional:(id)arg3;
- (id)markGroupAsReadWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withJavaUtilOptional:(id)arg3;
- (id)markAllInvitedRoomsAsViewed;
- (id)postMessageFlightLogsWithComGoogleCommonCollectImmutableList:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)postMessageWithDYNSCommonTopicId:(id)arg1 withNSString:(id)arg2 withComGoogleCommonCollectImmutableList:(id)arg3 withNSString:(id)arg4 withJavaUtilOptional:(id)arg5;
- (id)listTopicUserStatesAtRevisionWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withJavaUtilOptional:(id)arg3;
- (id)listSpamInvitedDmsWithInt:(int)arg1 withJavaUtilOptional:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)listMessagesForTopicForSearchWithDYNSCommonTopicId:(id)arg1 withInt:(int)arg2 withLong:(long long)arg3 withBoolean:(_Bool)arg4 withJavaUtilOptional:(id)arg5;
- (id)listMessagesForTopicAtRevisionWithDYNSCommonTopicId:(id)arg1 withInt:(int)arg2 withLong:(long long)arg3 withBoolean:(_Bool)arg4 withJavaUtilOptional:(id)arg5 withJavaUtilOptional:(id)arg6;
- (id)listFilesWithJavaUtilOptional:(id)arg1 withInt:(int)arg2 withJavaUtilOptional:(id)arg3;
- (id)listBlockedUsersWithJavaUtilOptional:(id)arg1;
- (id)getBlockedRoomsListWithJavaUtilOptional:(id)arg1;
- (id)listBlockedGroupsWithJavaUtilOptional:(id)arg1;
- (id)leaveSpaceWithDYNSCommonSpaceId:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)updateSpaceWithDYNSCommonSpaceId:(id)arg1 withJavaUtilOptional:(id)arg2 withJavaUtilOptional:(id)arg3 withJavaUtilOptional:(id)arg4;
- (id)getGroupWithJoinedAndInvitedMemberIdsWithDYNSCommonGroupId:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)getGroupWithJoinedMemberIdsWithDYNSCommonGroupId:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)getGroupAtRevisionWithDYNSCommonGroupId:(id)arg1 withJavaUtilOptional:(id)arg2 withJavaUtilOptional:(id)arg3 withJavaUtilOptional:(id)arg4;
- (id)getWorldLiteWithBoolean:(_Bool)arg1 withJavaUtilOptional:(id)arg2 withJavaUtilOptional:(id)arg3 withBoolean:(_Bool)arg4;
- (id)getPaginatedWorldWithComGoogleCommonCollectImmutableMap:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)fetchDriveActionsWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)clickCardWithDYNSCommonMessageId:(id)arg1 withJAddOnsFormAction:(id)arg2;
- (id)clearHistoryWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withJavaUtilOptional:(id)arg4;
- (id)initUserWithBoolean:(_Bool)arg1;
- (id)setMembershipStateWithDYNSCommonGroupId:(id)arg1 withDYNProtoMembershipState:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)blockUserWithDYNSCommonUserId:(id)arg1 withBoolean:(_Bool)arg2 withBoolean:(_Bool)arg3 withJavaUtilOptional:(id)arg4;
- (id)blockRoomWithDYNSCommonSpaceId:(id)arg1 withBoolean:(_Bool)arg2 withBoolean:(_Bool)arg3 withJavaUtilOptional:(id)arg4;
- (id)addToDriveWithNSString:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DYNProtoIncomingWebhookChangedMetadata_Type, DYNProtoMembershipChangedMetadata_Type, DYNProtoSlashCommandMetadata_Type, DYNSCommonSearchContentType, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSObject, NSSet, NSString;
@protocol DYNAccountUserCapabilities, DYNAddOnsCardRenderer, DYNAddOnsCmlModel, DYNAddonsActionHandlerProtocol, DYNAnnotationBuilderProtocol, DYNAnnotationMetadataBuilder, DYNAutocompleteUser, DYNCMLComponent, DYNClientMessageEvent, DYNCmlRenderResult, DYNConnectionChangedEvent, DYNConnectivityInfo, DYNDNDStatus, DYNDriveMetadataBuilderProtocol, DYNFormatMetadataBuilderProtocol, DYNGroupGuestAccessSettings, DYNGroupId, DYNGsuiteIntegrationCardRenderer, DYNGsuiteIntegrationCardRendererDelegate, DYNGsuiteIntegrationMessageRenderer, DYNLocalDataBuilder, DYNMember, DYNMemberId, DYNMemberIdentifier, DYNMembersUpdatedEvent, DYNMembershipChangedMetadataProtocol, DYNMentionedUser, DYNMessage, DYNMessageCreationInfo, DYNMessageId, DYNNotificationPayload, DYNOrganizationInfo, DYNOrganizationInfoProtocol, DYNPopulousApplicabilityInternalRequest, DYNRoster, DYNRosterId, DYNSafeUrl, DYNSafeUrlProto, DYNServer, DYNSpaceId, DYNTopicId, DYNUser, DYNUserId, DYNUserStatus, DYNUserStatusSubscription, DYNUserStatusUpdatedEvent, DYNWorldFilterConfig, DYNXMembershipState, DYNXMessagePermission, DYNXUIRetentionState;

@protocol DYNJavaObjectFactoryService <NSObject>
- (id <DYNXMessagePermission>)messagePermissionWithType:(unsigned int)arg1;
- (id <DYNPopulousApplicabilityInternalRequest>)populousApplicabilityRequestWithContextGroupID:(id <DYNGroupId>)arg1 contextGroupGuestAccessSettings:(id <DYNGroupGuestAccessSettings>)arg2 isAccountUserGuestInContextGroup:(_Bool)arg3 contextGroupOrganizationInfo:(id <DYNOrganizationInfo>)arg4 dasherAccountUserCapabilities:(id <DYNAccountUserCapabilities>)arg5 newGroupType:(unsigned int)arg6 newGroupGuestAccessEnabled:(_Bool)arg7;
- (id <DYNGroupGuestAccessSettings>)groupGuestAccessSettingsWithGuestAccessEnabled:(_Bool)arg1;
- (id <DYNWorldFilterConfig>)worldFilterConfigWithQuery:(NSString *)arg1;
- (id <DYNGsuiteIntegrationMessageRenderer>)gsuiteIntegrationMessageRenderer;
- (id <DYNGsuiteIntegrationCardRenderer>)gsuiteIntegrationCardRendererWithDelegate:(id <DYNGsuiteIntegrationCardRendererDelegate>)arg1;
- (id <DYNAddOnsCmlModel>)addOnsCmlModelWithActionHandler:(id <DYNAddonsActionHandlerProtocol>)arg1;
- (id <DYNAddOnsCardRenderer>)addOnsCardRenderer;
- (id <DYNMessageCreationInfo>)messageCreationInfoWithMessage:(NSString *)arg1 annotations:(NSArray *)arg2;
- (id <DYNXUIRetentionState>)uiRetentionStateWithType:(unsigned int)arg1;
- (id <DYNXMembershipState>)membershipStateWithType:(unsigned int)arg1;
- (id <DYNUserStatusUpdatedEvent>)userStatusUpdatedEventWithDictionary:(NSDictionary *)arg1 userStatusSubscription:(id <DYNUserStatusSubscription>)arg2;
- (id <DYNUserStatusSubscription>)userStatusSubscriptionWithUserIds:(NSSet *)arg1 subscriptionId:(unsigned long long)arg2 shouldFetchDndExpiry:(_Bool)arg3;
- (id <DYNUserStatusSubscription>)userStatusSubscriptionWithUserIds:(NSSet *)arg1;
- (id <DYNUserStatus>)userStatusWithPresenceState:(unsigned int)arg1 dndStatus:(id <DYNDNDStatus>)arg2;
- (id <DYNUserId>)userIdWithIdentifier:(NSString *)arg1;
- (id <DYNUser>)userWithUserId:(id <DYNUserId>)arg1 withName:(NSString *)arg2 withFirstName:(NSString *)arg3 withEmail:(NSString *)arg4 withAvatarPath:(NSString *)arg5 withOrganizationInfo:(id <DYNOrganizationInfo>)arg6 accountUserOrganizationInfo:(id <DYNOrganizationInfo>)arg7;
- (id <DYNUser>)userWithUserId:(id <DYNUserId>)arg1 withName:(NSString *)arg2 withFirstName:(NSString *)arg3 withEmail:(NSString *)arg4 withAvatarPath:(NSString *)arg5;
- (id <DYNTopicId>)topicIdWithGroupId:(id <DYNGroupId>)arg1 identifier:(NSString *)arg2;
- (id <DYNSpaceId>)spaceIdWithIdentifier:(NSString *)arg1;
- (id <DYNServer>)serverWithType:(unsigned int)arg1;
- (id <DYNServer>)serverWithName:(NSString *)arg1;
- (DYNSCommonSearchContentType *)javaSearchContentTypeFromType:(unsigned int)arg1;
- (id <DYNRosterId>)rosterIdWithString:(NSString *)arg1;
- (id <DYNRoster>)rosterWithRosterId:(id <DYNRosterId>)arg1 name:(NSString *)arg2 email:(NSString *)arg3 avatarPath:(NSString *)arg4 membershipCount:(NSNumber *)arg5;
- (id <DYNOrganizationInfoProtocol>)organizationInfoFromData:(NSData *)arg1;
- (id <DYNOrganizationInfo>)organizationInfoForDasherCustomerWithId:(NSString *)arg1;
- (id <DYNNotificationPayload>)notificationPayloadWithString:(NSString *)arg1;
- (id <DYNAutocompleteUser>)autocompleteRosterWithOwnerId:(NSString *)arg1 name:(NSString *)arg2 email:(NSString *)arg3 photoUrl:(NSString *)arg4 membershipCount:(long long)arg5 organizationInfo:(id <DYNOrganizationInfo>)arg6;
- (id <DYNAutocompleteUser>)autocompleteBotWithOwnerId:(NSString *)arg1 name:(NSString *)arg2 description:(NSString *)arg3 photoUrl:(NSString *)arg4 presence:(unsigned int)arg5 organizationInfo:(id <DYNOrganizationInfo>)arg6;
- (id <DYNAutocompleteUser>)autocompleteUserWithOwnerId:(NSString *)arg1 name:(NSString *)arg2 email:(NSString *)arg3 photoUrl:(NSString *)arg4 presence:(unsigned int)arg5 organizationInfo:(id <DYNOrganizationInfo>)arg6;
- (id <DYNMessageId>)messageIdWithTopicId:(id <DYNTopicId>)arg1 stringId:(NSString *)arg2;
- (id <DYNMessage>)sentMessageWithMessage:(id <DYNMessage>)arg1 text:(NSString *)arg2 annotations:(NSArray *)arg3;
- (id <DYNMessage>)pendingMessageWithMessageId:(id <DYNMessageId>)arg1 creatorId:(id <DYNUserId>)arg2 text:(NSString *)arg3 annotations:(NSArray *)arg4;
- (id <DYNMentionedUser>)mentionedUserWithUser:(id <DYNUser>)arg1 organizationInfo:(id <DYNOrganizationInfo>)arg2;
- (DYNProtoSlashCommandMetadata_Type *)javaSlashCommandMetadataFromMetadata:(unsigned int)arg1;
- (id <DYNMembershipChangedMetadataProtocol>)membershipChangedMetadataWithType:(int)arg1;
- (DYNProtoIncomingWebhookChangedMetadata_Type *)javaIncomingWebhookChangedMetadataFromMetadata:(int)arg1;
- (DYNProtoMembershipChangedMetadata_Type *)javaMembershipChangedMetadataFromMetadata:(int)arg1;
- (id <DYNMembersUpdatedEvent>)membersUpdatedEventWithMembers:(NSArray *)arg1;
- (id <DYNMemberIdentifier>)memberIdentifierWithRosterId:(id <DYNRosterId>)arg1;
- (NSArray *)memberIdentifiersWithUsers:(NSArray *)arg1;
- (id <DYNMemberIdentifier>)memberIdentifierWithUserId:(id <DYNUserId>)arg1 emailAddress:(NSString *)arg2;
- (id <DYNMemberId>)memberIdForRosterId:(id <DYNRosterId>)arg1;
- (id <DYNMemberId>)memberIdForUserId:(id <DYNUserId>)arg1 groupId:(id <DYNGroupId>)arg2;
- (id <DYNMember>)memberWithUser:(id <DYNUser>)arg1;
- (id <DYNMember>)memberWithRoster:(id <DYNRoster>)arg1;
- (id <DYNLocalDataBuilder>)localDataBuilder;
- (id <DYNDNDStatus>)dndStatusWithState:(unsigned int)arg1 expiryTimeMicros:(unsigned long long)arg2;
- (id <DYNGroupId>)groupIDFromSpaceID:(NSString *)arg1;
- (id <DYNGroupId>)dmIdWithString:(NSString *)arg1;
- (id <DYNConnectivityInfo>)connectivityInfoWithType:(int)arg1 state:(unsigned int)arg2;
- (id <DYNConnectionChangedEvent>)connectionChangedEventWithState:(unsigned int)arg1;
- (id <DYNClientMessageEvent>)clientMessageEventWithMessageId:(id <DYNMessageId>)arg1 eventType:(unsigned int)arg2 gcmMessageId:(NSString *)arg3 notificationDate:(NSDate *)arg4 apnsDeviceTokenHex:(NSString *)arg5;
- (id <DYNFormatMetadataBuilderProtocol>)formatMetadataBuilder;
- (id <DYNDriveMetadataBuilderProtocol>)driveMetadataBuilder;
- (id <DYNAnnotationBuilderProtocol>)annotationBuilder;
- (id <DYNAnnotationMetadataBuilder>)annotationMetadataBuilder;
- (id <DYNSafeUrl>)safeUrlFromProto:(id <DYNSafeUrlProto>)arg1;
- (NSObject<DYNAddonsActionHandlerProtocol> *)addonsActionHandler;
- (id <DYNCMLComponent>)componentFromRenderResult:(id <DYNCmlRenderResult>)arg1;
@end

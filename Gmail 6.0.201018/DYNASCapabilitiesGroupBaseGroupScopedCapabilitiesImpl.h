//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNASCapabilitiesGroupGroupScopedCapabilities-Protocol.h"

@class ComGoogleAppsDynamiteV1SharedAttributeCheckerGroupType, DYNProtoGroupGuestAccessSettings, DYNProtoMembershipState, DYNProtoOrganizationInfo, DYNProtoUserFileSharingSettings, JavaUtilOptional, NSString;

@interface DYNASCapabilitiesGroupBaseGroupScopedCapabilitiesImpl : NSObject <DYNASCapabilitiesGroupGroupScopedCapabilities>
{
    DYNProtoMembershipState *membershipState_;
    JavaUtilOptional *roomOrganizationInfo_;
    DYNProtoOrganizationInfo *accountUserOrganizationInfo_;
    ComGoogleAppsDynamiteV1SharedAttributeCheckerGroupType *attributeCheckerGroupType_;
    _Bool isRoomInteropedToClassic_;
    DYNProtoGroupGuestAccessSettings *groupGuestAccessSettings_;
    DYNProtoUserFileSharingSettings *userFileSharingSettings_;
    _Bool isIncomingWebhookFeaturesEnabledForAccountUserDasherDomainPolicies_;
    _Bool isBotFeaturesEnabledInAccountUserDasherDomainPolicies_;
    _Bool isOneOnOneHumanDm_;
}

- (void)dealloc;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)shouldShowGroupGuidelines;
- (_Bool)shouldShowGroupRetentionPolicyString;
- (id)getInvitableRostersDomainInclusionType;
- (id)getFileSharingState;
- (id)getInvitableHumanUsersDomainInclusionType;
- (_Bool)canReportAbuseInGroup;
- (_Bool)canRenameGroup;
- (_Bool)canRemoveMembersFromGroup;
- (_Bool)canLeaveGroup;
- (_Bool)canInvokeSlashCommandWithJavaUtilList:(id)arg1;
- (_Bool)canRemoveBotWithJavaUtilList:(id)arg1;
- (_Bool)canAddBotWithJavaUtilList:(id)arg1;
- (_Bool)canAddWebhooks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


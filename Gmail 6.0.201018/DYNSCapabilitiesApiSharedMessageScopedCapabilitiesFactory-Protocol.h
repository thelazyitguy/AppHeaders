//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNASCapabilitiesMessageMessageScopedCapabilitiesFactory-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleAppsDynamiteV1SharedAttributeCheckerGroupType, DYNProtoGroupGuestAccessSettings, DYNProtoMembershipState, DYNProtoMessage_MessagePermission, DYNProtoOrganizationInfo, DYNProtoUserId, JavaUtilOptional;
@protocol DYNSCapabilitiesApiSharedMessageScopedCapabilities;

@protocol DYNSCapabilitiesApiSharedMessageScopedCapabilitiesFactory <DYNASCapabilitiesMessageMessageScopedCapabilitiesFactory, JavaObject>
- (id <DYNSCapabilitiesApiSharedMessageScopedCapabilities>)createWithComGoogleAppsDynamiteV1SharedAttributeCheckerGroupType:(ComGoogleAppsDynamiteV1SharedAttributeCheckerGroupType *)arg1 withDYNProtoMembershipState:(DYNProtoMembershipState *)arg2 withDYNProtoOrganizationInfo:(DYNProtoOrganizationInfo *)arg3 withBoolean:(_Bool)arg4 withJavaUtilOptional:(JavaUtilOptional *)arg5 withDYNProtoGroupGuestAccessSettings:(DYNProtoGroupGuestAccessSettings *)arg6 withDYNProtoUserId:(DYNProtoUserId *)arg7 withDYNProtoUserId:(DYNProtoUserId *)arg8 withDYNProtoMessage_MessagePermission:(DYNProtoMessage_MessagePermission *)arg9 withDYNProtoMessage_MessagePermission:(DYNProtoMessage_MessagePermission *)arg10;
@end


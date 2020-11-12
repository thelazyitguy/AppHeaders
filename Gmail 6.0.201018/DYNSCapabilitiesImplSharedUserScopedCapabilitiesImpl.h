//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNASCapabilitiesUserBaseUserScopedCapabilitiesImpl.h"

#import "DYNSCapabilitiesApiSharedUserScopedCapabilities-Protocol.h"

@class NSString;
@protocol DYNSFlagsSharedConfiguration;

@interface DYNSCapabilitiesImplSharedUserScopedCapabilitiesImpl : DYNASCapabilitiesUserBaseUserScopedCapabilitiesImpl <DYNSCapabilitiesApiSharedUserScopedCapabilities>
{
    _Bool isBotFeaturesEnabledInAccountUserDasherDomainPolicies_;
    id <DYNSFlagsSharedConfiguration> sharedConfiguration_;
}

+ (void)initialize;
- (void)dealloc;
- (_Bool)canAddBotInNewRoomWithDYNSCommonHelperGroupAttributeInfo:(id)arg1 withBoolean:(_Bool)arg2;
- (id)getInvitableRostersDomainInclusionTypeForNewRoomWithDYNSCommonHelperGroupAttributeInfo:(id)arg1;
- (id)getInvitableHumanUsersDomainInclusionTypeForNewRoomWithDYNSCommonHelperGroupAttributeInfo:(id)arg1 withBoolean:(_Bool)arg2;
- (id)getClientNewRoomOptions;
- (_Bool)canCreateOneOnOneDmWithBot;
- (id)getNewRoomTypes;
- (id)getNewDmHumanUserDomainInclusionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

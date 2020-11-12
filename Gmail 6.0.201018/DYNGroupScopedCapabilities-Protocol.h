//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DYNMessageScopedCapabilities, DYNUserId;

@protocol DYNGroupScopedCapabilities <NSObject>
@property(readonly, nonatomic) _Bool shouldShowGroupRetentionPolicyString;
@property(readonly, nonatomic) unsigned int invitableRostersDomainInclusionType;
@property(readonly, nonatomic) unsigned int invitableHumanUsersDomainInclusionType;
@property(readonly, nonatomic) _Bool canRenameGroup;
@property(readonly, nonatomic) _Bool canRemoveMembersFromGroup;
@property(readonly, nonatomic) _Bool canLeaveGroup;
- (id <DYNMessageScopedCapabilities>)capabilitiesForMessageWithCreatorId:(id <DYNUserId>)arg1 editableBy:(unsigned int)arg2 deletableBy:(unsigned int)arg3;
@end

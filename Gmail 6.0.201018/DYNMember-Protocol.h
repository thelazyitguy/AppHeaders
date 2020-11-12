//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNAccountIdMatching-Protocol.h"

@class NSString;
@protocol DYNMemberId, DYNOrganizationInfo, DYNRoster, DYNUser;

@protocol DYNMember <DYNAccountIdMatching>
@property(readonly, nonatomic) id <DYNOrganizationInfo> organizationInfo;
@property(readonly, nonatomic) NSString *avatarUrl;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *idString;
@property(readonly, nonatomic) _Bool isRoster;
@property(readonly, nonatomic) _Bool isUser;
@property(readonly, nonatomic) id <DYNRoster> roster;
@property(readonly, nonatomic) id <DYNUser> user;
@property(readonly, nonatomic) id <DYNMemberId> memberId;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNAccountIdMatching-Protocol.h"

@class NSString;
@protocol DYNBotInfo, DYNOrganizationInfo, DYNUser, DYNUserId;

@protocol DYNUser <DYNAccountIdMatching>
@property(readonly, nonatomic) long long lastUpdatedTimeMicros;
@property(readonly, nonatomic) id <DYNOrganizationInfo> organizationInfo;
@property(readonly, nonatomic) id <DYNBotInfo> botInfo;
@property(readonly, nonatomic) _Bool isExternalRelativeToAccountUser;
@property(readonly, nonatomic) NSString *avatarUrl;
@property(readonly, nonatomic) NSString *email;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *nameOrEmail;
@property(readonly, nonatomic) unsigned int type;
@property(readonly, nonatomic) id <DYNUserId> userId;
- (id <DYNUser>)userByUpdatingName:(NSString *)arg1 avatarUrl:(NSString *)arg2;
@end


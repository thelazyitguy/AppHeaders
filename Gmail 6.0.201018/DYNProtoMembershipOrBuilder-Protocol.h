//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoInviteCategory, DYNProtoMembershipId, DYNProtoMembershipRole, DYNProtoMembershipState;

@protocol DYNProtoMembershipOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoMembershipRole *)getMembershipRole;
- (_Bool)hasMembershipRole;
- (DYNProtoInviteCategory *)getInviteCategory;
- (_Bool)hasInviteCategory;
- (DYNProtoMembershipState *)getMembershipState;
- (_Bool)hasMembershipState;
- (long long)getCreateTime;
- (_Bool)hasCreateTime;
- (DYNProtoMembershipId *)getId;
- (_Bool)hasId;
@end

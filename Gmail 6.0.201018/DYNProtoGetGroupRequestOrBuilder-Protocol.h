//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoGetGroupRequest_FetchOptions, DYNProtoGroupId, DYNProtoReferenceRevision, DYNProtoRequestHeader;
@protocol JavaUtilList;

@protocol DYNProtoGetGroupRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (_Bool)getIncludeInviteDms;
- (_Bool)hasIncludeInviteDms;
- (DYNProtoReferenceRevision *)getGroupNotOlderThan;
- (_Bool)hasGroupNotOlderThan;
- (DYNProtoReferenceRevision *)getUserNotOlderThan;
- (_Bool)hasUserNotOlderThan;
- (DYNProtoGetGroupRequest_FetchOptions *)getFetchOptionsWithInt:(int)arg1;
- (id <JavaUtilList>)getFetchOptionsList;
- (int)getFetchOptionsCount;
- (DYNProtoGroupId *)getGroupId;
- (_Bool)hasGroupId;
- (DYNProtoRequestHeader *)getRequestHeader;
- (_Bool)hasRequestHeader;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoGetWorldRequest_FetchOptions, DYNProtoReferenceRevision, DYNProtoRequestHeader, DYNProtoSnippetFetchOption;
@protocol JavaUtilList;

@protocol DYNProtoGetWorldRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoSnippetFetchOption *)getSnippetFetchOptionsWithInt:(int)arg1;
- (id <JavaUtilList>)getSnippetFetchOptionsList;
- (int)getSnippetFetchOptionsCount;
- (DYNProtoGetWorldRequest_FetchOptions *)getFetchOptionsWithInt:(int)arg1;
- (id <JavaUtilList>)getFetchOptionsList;
- (int)getFetchOptionsCount;
- (DYNProtoReferenceRevision *)getNotOlderThan;
- (_Bool)hasNotOlderThan;
- (_Bool)getFetchUnreadSubscribedTopics;
- (_Bool)hasFetchUnreadSubscribedTopics;
- (_Bool)getFetchUnreadSubscribedTopicCount;
- (_Bool)hasFetchUnreadSubscribedTopicCount;
- (_Bool)getFetchMemberIds;
- (_Bool)hasFetchMemberIds;
- (_Bool)getFetchMembers;
- (_Bool)hasFetchMembers;
- (int)getMessageFetchCount;
- (_Bool)hasMessageFetchCount;
- (DYNProtoRequestHeader *)getRequestHeader;
- (_Bool)hasRequestHeader;
@end

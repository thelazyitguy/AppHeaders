//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoRequestHeader, DYNProtoSearchMessagesFilterV2, NSString;

@protocol DYNProtoSearchMessagesRequestV2OrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getQueryId;
- (_Bool)hasQueryId;
- (NSString *)getQuery;
- (_Bool)hasQuery;
- (DYNProtoSearchMessagesFilterV2 *)getIncludeFilter;
- (_Bool)hasIncludeFilter;
- (NSString *)getContinuationToken;
- (_Bool)hasContinuationToken;
- (int)getPageSize;
- (_Bool)hasPageSize;
- (DYNProtoRequestHeader *)getRequestHeader;
- (_Bool)hasRequestHeader;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoRequestHeader, DYNProtoSearchFilter, DYNProtoSearchScope, NSString;

@protocol DYNProtoSearchMessagesRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (_Bool)getReturnLastMessageIfLastPage;
- (_Bool)hasReturnLastMessageIfLastPage;
- (NSString *)getContinuationToken;
- (_Bool)hasContinuationToken;
- (DYNProtoSearchFilter *)getFilter;
- (_Bool)hasFilter;
- (int)getMaxMessagesPerTopic;
- (_Bool)hasMaxMessagesPerTopic;
- (int)getPageSize;
- (_Bool)hasPageSize;
- (DYNProtoSearchScope *)getSearchScope;
- (_Bool)hasSearchScope;
- (DYNProtoRequestHeader *)getRequestHeader;
- (_Bool)hasRequestHeader;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoGroupId, DYNProtoMessageId;

@protocol DYNProtoClearHistoryRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (long long)getClientLocalGroupRevisionTimestampMicros;
- (_Bool)hasClientLocalGroupRevisionTimestampMicros;
- (long long)getClientLocalGroupSortTimestamp;
- (_Bool)hasClientLocalGroupSortTimestamp;
- (DYNProtoMessageId *)getLastMessageId;
- (_Bool)hasLastMessageId;
- (DYNProtoGroupId *)getGroupId;
- (_Bool)hasGroupId;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoEmoji, DYNProtoMessageId, DYNProtoReactionOption, DYNProtoUserId;

@protocol DYNProtoMessageReactionEventOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoReactionOption *)getOption;
- (_Bool)hasOption;
- (long long)getUpdateTimestamp;
- (_Bool)hasUpdateTimestamp;
- (DYNProtoUserId *)getReactor;
- (_Bool)hasReactor;
- (DYNProtoEmoji *)getEmoji;
- (_Bool)hasEmoji;
- (DYNProtoMessageId *)getMessageId;
- (_Bool)hasMessageId;
@end


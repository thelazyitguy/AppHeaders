//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoAnnotation, DYNProtoGroupId, DYNProtoRequestHeader, DYNProtoRetentionSettings, NSString;
@protocol JavaUtilList;

@protocol DYNProtoCreateTopicRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (_Bool)getHistoryV2;
- (_Bool)hasHistoryV2;
- (NSString *)getTopicAndMessageId;
- (_Bool)hasTopicAndMessageId;
- (NSString *)getLocalId;
- (_Bool)hasLocalId;
- (DYNProtoRetentionSettings *)getRetentionSettings;
- (_Bool)hasRetentionSettings;
- (DYNProtoAnnotation *)getAnnotationsWithInt:(int)arg1;
- (id <JavaUtilList>)getAnnotationsList;
- (int)getAnnotationsCount;
- (NSString *)getTextBody;
- (_Bool)hasTextBody;
- (DYNProtoGroupId *)getGroupId;
- (_Bool)hasGroupId;
- (DYNProtoRequestHeader *)getRequestHeader;
- (_Bool)hasRequestHeader;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSUIModelsUiTopicSummaryItem-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleCommonCollectImmutableList, DYNSCommonConstants_MessageStatus, DYNSCommonGroupType, DYNSCommonMessageId, DYNSCommonTopicId, DYNSCommonUserId, DYNSModelsCommonMessagePermission, JavaUtilOptional, NSString;
@protocol DYNSUIModelsUiMessage;

@protocol DYNSUIModelsUiMessage <DYNSUIModelsUiTopicSummaryItem, JavaObject>
- (DYNSModelsCommonMessagePermission *)getDeletableBy;
- (DYNSModelsCommonMessagePermission *)getEditableBy;
- (JavaUtilOptional *)getOriginAppId;
- (_Bool)shouldCoalesceWithDYNSUIModelsUiMessage:(id <DYNSUIModelsUiMessage>)arg1;
- (_Bool)equalsByIdWithDYNSUIModelsUiMessage:(id <DYNSUIModelsUiMessage>)arg1;
- (_Bool)getIsOffTheRecord;
- (_Bool)getIsContiguous;
- (NSString *)getClientLogId;
- (JavaUtilOptional *)getAppProfile;
- (ComGoogleCommonCollectImmutableList *)getReactions;
- (ComGoogleCommonCollectImmutableList *)getUnrenderedCmlAttachments;
- (ComGoogleCommonCollectImmutableList *)getBotResponses;
- (ComGoogleCommonCollectImmutableList *)getAnnotations;
- (JavaUtilOptional *)getLastEditAtMicros;
- (_Bool)isSystemMessage;
- (_Bool)getIsPrivate;
- (_Bool)getIsLocked;
- (long long)getLastUpdatedAtMicros;
- (long long)getCreatedAtMicros;
- (NSString *)getText;
- (DYNSCommonUserId *)getCreatorId;
- (DYNSCommonConstants_MessageStatus *)getMessageStatus;
- (DYNSCommonGroupType *)getGroupType;
- (DYNSCommonTopicId *)getTopicId;
- (DYNSCommonMessageId *)getMessageId;
@end

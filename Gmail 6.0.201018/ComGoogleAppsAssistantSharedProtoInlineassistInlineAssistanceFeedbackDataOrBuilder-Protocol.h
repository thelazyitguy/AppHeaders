//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsAssistantSharedProtoInlineassistFeedbackLiteTopicWrapper_FeedbackLiteTopic, ComGoogleAppsAssistantSharedProtoInlineassistInlineAssistanceFeedbackData_FeedbackLiteData, NSString;
@protocol ComGoogleProtobufProtocolStringList;

@protocol ComGoogleAppsAssistantSharedProtoInlineassistInlineAssistanceFeedbackDataOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (_Bool)getIsFeedbackDisabled;
- (_Bool)hasIsFeedbackDisabled;
- (NSString *)getExperimentsWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getExperimentsList;
- (int)getExperimentsCount;
- (int)getContextSuffixLength;
- (_Bool)hasContextSuffixLength;
- (int)getContextPrefixLength;
- (_Bool)hasContextPrefixLength;
- (NSString *)getFeedbackContext;
- (_Bool)hasFeedbackContext;
- (ComGoogleAppsAssistantSharedProtoInlineassistInlineAssistanceFeedbackData_FeedbackLiteData *)getFeedbackLiteData;
- (_Bool)hasFeedbackLiteData;
- (_Bool)getUseContextualFeedback;
- (_Bool)hasUseContextualFeedback;
- (long long)getMetadataAssistanceId;
- (_Bool)hasMetadataAssistanceId;
- (ComGoogleAppsAssistantSharedProtoInlineassistFeedbackLiteTopicWrapper_FeedbackLiteTopic *)getFeedbackLiteTopic;
- (_Bool)hasFeedbackLiteTopic;
- (NSString *)getGFeedbackBucketId;
- (_Bool)hasGFeedbackBucketId;
- (_Bool)getUseNewFeedbackMechanism;
- (_Bool)hasUseNewFeedbackMechanism;
@end

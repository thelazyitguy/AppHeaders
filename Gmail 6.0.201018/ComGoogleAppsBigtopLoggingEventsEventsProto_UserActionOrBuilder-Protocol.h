//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class JBTCBigTopCommonEnums_Metric, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopLoggingEventsEventsProto_UserActionOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (int)getRingleaderExperimentId;
- (_Bool)hasRingleaderExperimentId;
- (int)getValue;
- (_Bool)hasValue;
- (NSString *)getTopicSource;
- (_Bool)hasTopicSource;
- (int)getIntTagsWithInt:(int)arg1;
- (id <JavaUtilList>)getIntTagsList;
- (int)getIntTagsCount;
- (JBTCBigTopCommonEnums_Metric *)getTagsWithInt:(int)arg1;
- (id <JavaUtilList>)getTagsList;
- (int)getTagsCount;
- (double)getTimestampInMillis;
- (_Bool)hasTimestampInMillis;
- (JBTCBigTopCommonEnums_Metric *)getAction;
- (_Bool)hasAction;
@end

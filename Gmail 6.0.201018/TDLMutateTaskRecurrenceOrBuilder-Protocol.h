//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsTasksUtilsXfieldmaskXFieldMaskProto, NSString, TDLTaskRecurrence_Properties, TDLTaskRecurrence_RecurrenceSchedule;

@protocol TDLMutateTaskRecurrenceOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getTaskListId;
- (_Bool)hasTaskListId;
- (ComGoogleAppsTasksUtilsXfieldmaskXFieldMaskProto *)getPropertiesFieldMask;
- (_Bool)hasPropertiesFieldMask;
- (TDLTaskRecurrence_Properties *)getProperties;
- (_Bool)hasProperties;
- (TDLTaskRecurrence_RecurrenceSchedule *)getRecurrenceSchedule;
- (_Bool)hasRecurrenceSchedule;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_TaskTimeBlockWithMaskBuildable-Protocol.h"

@class ComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder, NSString, TDLTask_TimeBlock_Builder;

@interface ComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_TaskTimeBlockWithMaskBuilderBase : NSObject <ComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_TaskTimeBlockWithMaskBuildable>
{
    TDLTask_TimeBlock_Builder *protoBuilder_;
    ComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder *fieldMaskBuilder_;
}

- (void)dealloc;
- (void)resetWithTDLTask_TimeBlock_Builder:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder:(id)arg2;
- (id)buildFieldMaskProto;
- (id)buildFieldMask;
- (id)buildProto;
- (id)setDurationWithMaskWithComGoogleProtobufWithXFieldMaskBuilders_DurationWithMaskBuildable:(id)arg1;
- (id)setDurationWithMaskWithComGoogleProtobufDuration:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask:(id)arg2;
- (id)clearDuration;
- (id)setDurationWithComGoogleProtobufDuration:(id)arg1;
- (id)setStartTimestampWithMaskWithComGoogleProtobufWithXFieldMaskBuilders_TimestampWithMaskBuildable:(id)arg1;
- (id)setStartTimestampWithMaskWithComGoogleProtobufTimestamp:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask:(id)arg2;
- (id)clearStartTimestamp;
- (id)setStartTimestampWithComGoogleProtobufTimestamp:(id)arg1;
- (id)setTimeZoneWithNSString:(id)arg1;
- (id)setStartTimeWithMaskWithComGoogleTypeWithXFieldMaskBuilders_TimeOfDayWithMaskBuildable:(id)arg1;
- (id)setStartTimeWithMaskWithComGoogleTypeTimeOfDay:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask:(id)arg2;
- (id)clearStartTime;
- (id)setStartTimeWithComGoogleTypeTimeOfDay:(id)arg1;
- (id)setStartDateWithMaskWithComGoogleTypeWithXFieldMaskBuilders_DateWithMaskBuildable:(id)arg1;
- (id)setStartDateWithMaskWithComGoogleTypeDate:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask:(id)arg2;
- (id)clearStartDate;
- (id)setStartDateWithComGoogleTypeDate:(id)arg1;
- (id)mergeFromWithComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_TaskTimeBlockWithMaskBuilderBase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

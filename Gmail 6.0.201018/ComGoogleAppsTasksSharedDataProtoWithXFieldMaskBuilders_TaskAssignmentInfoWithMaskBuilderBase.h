//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_TaskAssignmentInfoWithMaskBuildable-Protocol.h"

@class ComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder, NSString, TDLTask_AssignmentInfo_Builder;

@interface ComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_TaskAssignmentInfoWithMaskBuilderBase : NSObject <ComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_TaskAssignmentInfoWithMaskBuildable>
{
    TDLTask_AssignmentInfo_Builder *protoBuilder_;
    ComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder *fieldMaskBuilder_;
}

- (void)dealloc;
- (void)resetWithTDLTask_AssignmentInfo_Builder:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder:(id)arg2;
- (id)buildFieldMaskProto;
- (id)buildFieldMask;
- (id)buildProto;
- (id)setAssignerWithMaskWithComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_TaskUserWithMaskBuildable:(id)arg1;
- (id)setAssignerWithMaskWithTDLTask_User:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask:(id)arg2;
- (id)clearAssigner;
- (id)setAssignerWithTDLTask_User:(id)arg1;
- (id)setAssigneeWithMaskWithComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_TaskUserWithMaskBuildable:(id)arg1;
- (id)setAssigneeWithMaskWithTDLTask_User:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask:(id)arg2;
- (id)clearAssignee;
- (id)setAssigneeWithTDLTask_User:(id)arg1;
- (id)mergeFromWithComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_TaskAssignmentInfoWithMaskBuilderBase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


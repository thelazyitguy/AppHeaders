//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class TSKCreateTaskResult, TSKDeleteTasksResult, TSKFlattenTaskListResult, TSKMoveTaskResult, TSKMutateTaskListResult, TSKMutateTaskRecurrenceResult, TSKMutateTaskResult, TSKMutateUserExperimentalResult, TSKMutateUserMetadataResult, TSKMutateUserPrefsResult, TSKRollTaskRecurrenceResult;

@interface TSKMutationResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) TSKCreateTaskResult *createTaskResult; // @dynamic createTaskResult;
@property(retain, nonatomic) TSKDeleteTasksResult *deleteTasksResult; // @dynamic deleteTasksResult;
@property(retain, nonatomic) TSKFlattenTaskListResult *flattenTaskListResult; // @dynamic flattenTaskListResult;
@property(retain, nonatomic) TSKMoveTaskResult *moveTaskResult; // @dynamic moveTaskResult;
@property(retain, nonatomic) TSKMutateTaskListResult *mutateTaskListResult; // @dynamic mutateTaskListResult;
@property(retain, nonatomic) TSKMutateTaskRecurrenceResult *mutateTaskRecurrenceResult; // @dynamic mutateTaskRecurrenceResult;
@property(retain, nonatomic) TSKMutateTaskResult *mutateTaskResult; // @dynamic mutateTaskResult;
@property(retain, nonatomic) TSKMutateUserExperimentalResult *mutateUserExperimentalResult; // @dynamic mutateUserExperimentalResult;
@property(retain, nonatomic) TSKMutateUserMetadataResult *mutateUserMetadataResult; // @dynamic mutateUserMetadataResult;
@property(retain, nonatomic) TSKMutateUserPrefsResult *mutateUserPrefsResult; // @dynamic mutateUserPrefsResult;
@property(readonly, nonatomic) int resultOneOfCase; // @dynamic resultOneOfCase;
@property(retain, nonatomic) TSKRollTaskRecurrenceResult *rollTaskRecurrenceResult; // @dynamic rollTaskRecurrenceResult;

@end

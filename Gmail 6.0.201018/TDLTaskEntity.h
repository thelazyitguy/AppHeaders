//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaLangBoolean, NSString, TDLTask;

@interface TDLTaskEntity : NSObject
{
    NSString *id__;
    NSString *shardId_;
    NSString *taskId_;
    NSString *taskListId_;
    NSString *dueDate_;
    JavaLangBoolean *completed_;
    NSString *taskRecurrenceId_;
    TDLTask *task_;
    TDLTask *effectiveTask_;
    TDLTask *originalTask_;
    _Bool hasDirtyState_;
}

- (void)dealloc;
- (void)setHasDirtyStateWithBoolean:(_Bool)arg1;
- (_Bool)hasDirtyState;
- (void)setTaskRecurrenceIdWithNSString:(id)arg1;
- (id)getTaskRecurrenceId;
- (void)setCompletedWithBoolean:(_Bool)arg1;
- (_Bool)isCompleted;
- (void)setDueDateWithNSString:(id)arg1;
- (id)getDueDate;
- (void)setTaskListIdWithNSString:(id)arg1;
- (id)getTaskListId;
- (void)setOriginalTaskWithTDLTask:(id)arg1;
- (id)getOriginalTask;
- (void)setEffectiveTaskWithTDLTask:(id)arg1;
- (id)getEffectiveTask;
- (void)setTaskWithTDLTask:(id)arg1;
- (id)getTask;
- (void)setShardIdWithNSString:(id)arg1;
- (id)getShardId;
- (void)setTaskIdWithNSString:(id)arg1;
- (id)getTaskId;
- (void)setIdWithNSString:(id)arg1;
- (id)getId;
- (id)getLocalEntity;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleTypeDate, NSString;
@protocol TDLIntReadResult, TDLLoadResult, TDLReadResult, TDLTaskId, TDLTaskListBundleReadResult, TDLTaskListId, TDLTaskRecurrenceId, TDLTopCompletedTasksReadResult;

@protocol TDLDataReader <JavaObject>
- (id <TDLLoadResult>)getRoomWithNSString:(NSString *)arg1;
- (id <TDLReadResult>)getTaskHierarchyWithTDLTaskId:(id <TDLTaskId>)arg1 withTDLTaskListId:(id <TDLTaskListId>)arg2;
- (id <TDLReadResult>)getAllCompletedTasksWithTDLTaskListId:(id <TDLTaskListId>)arg1;
- (id <TDLTopCompletedTasksReadResult>)getTopCompletedTasksWithTDLTaskListId:(id <TDLTaskListId>)arg1;
- (id <TDLReadResult>)getTasksFromAllLists;
- (id <TDLIntReadResult>)getCompletedTaskCountWithTDLTaskListId:(id <TDLTaskListId>)arg1;
- (id <TDLIntReadResult>)getActiveTaskCountWithTDLTaskListId:(id <TDLTaskListId>)arg1;
- (id <TDLReadResult>)getTasksWithRecurrenceWithTDLTaskRecurrenceId:(id <TDLTaskRecurrenceId>)arg1;
- (id <TDLReadResult>)getTasksWithTimeFilterWithComGoogleTypeDate:(ComGoogleTypeDate *)arg1 withComGoogleTypeDate:(ComGoogleTypeDate *)arg2;
- (id <TDLReadResult>)getAllTaskRecurrences;
- (id <TDLReadResult>)getTaskRecurrenceWithTDLTaskRecurrenceId:(id <TDLTaskRecurrenceId>)arg1;
- (id <TDLReadResult>)getTaskWithTDLTaskId:(id <TDLTaskId>)arg1;
- (id <TDLReadResult>)getTaskListWithTDLTaskListId:(id <TDLTaskListId>)arg1;
- (id <TDLReadResult>)getTaskListsInUserOrder;
- (id <TDLReadResult>)getTaskLists;
- (id <TDLTaskListBundleReadResult>)getTaskListBundleWithTDLTaskListId:(id <TDLTaskListId>)arg1;
- (id <TDLReadResult>)getTaskListIds;
- (id <TDLReadResult>)getUserExperimental;
- (id <TDLReadResult>)getUserPrefs;
- (id <TDLReadResult>)getUserMetadata;
@end

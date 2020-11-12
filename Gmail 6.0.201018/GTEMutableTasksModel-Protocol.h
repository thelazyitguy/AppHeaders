//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTETasksModel-Protocol.h"

@class GTEDataBox, GTERecurrence, GTETask, GTETasksModel, NSArray, NSDictionary, NSString;
@protocol GTEMutableTasksModel, GTETasksModel;

@protocol GTEMutableTasksModel <GTETasksModel>
@property(nonatomic) long long sortOrder;
- (void)commitToDataBoxStorage:(GTEDataBox *)arg1;
- (void)undoChangesUsingDataBox:(GTEDataBox *)arg1;
- (void)updateDataBoxWithoutMutations:(GTEDataBox *)arg1;
- (void)flatten;
- (NSDictionary *)insertMovingTasks:(NSArray *)arg1;
- (GTETask *)moveTask:(GTETask *)arg1 toModel:(id <GTEMutableTasksModel>)arg2;
- (void)updateInstanceLifecycleStageOfRecurringTasks;
- (void)deleteAllCompletedTasks;
- (void)deleteTaskWithID:(NSString *)arg1;
- (void)moveTaskWithID:(NSString *)arg1 belowTaskWithID:(NSString *)arg2 asSubtask:(_Bool)arg3;
- (void)updateTask:(GTETask *)arg1 recurrence:(GTERecurrence *)arg2;
- (void)updateTask:(GTETask *)arg1;
- (void)insertTask:(GTETask *)arg1 recurrence:(GTERecurrence *)arg2 atPosition:(long long)arg3 asSubtask:(_Bool)arg4;
- (void)insertTask:(GTETask *)arg1 recurrence:(GTERecurrence *)arg2;
- (GTETasksModel *)dataModel;
- (void)loadDataFromTasksModel:(id <GTETasksModel>)arg1;
@end

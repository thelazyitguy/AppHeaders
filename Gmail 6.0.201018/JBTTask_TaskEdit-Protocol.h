//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JBTTaskDueDate_Type, NSString;
@protocol JBTCallback, JBTRecurrence, JBTSnoozeConfig, JBTSpan, JBTTaskDueDate, JBTTask_TaskEdit;

@protocol JBTTask_TaskEdit <JavaObject>
- (void)saveWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (_Bool)canSave;
- (_Bool)isRecurrenceMaster;
- (id <JBTRecurrence>)getRecurrence;
- (_Bool)hasRecurrence;
- (long long)getCompletedTimeSec;
- (_Bool)hasCompletedTimeSec;
- (id <JBTTaskDueDate>)getDueDate;
- (_Bool)hasDueDate;
- (NSString *)getTitle;
- (id <JBTTask_TaskEdit>)clearRecurrence;
- (id <JBTTask_TaskEdit>)setRecurrenceWithJBTRecurrence:(id <JBTRecurrence>)arg1;
- (_Bool)canSetRecurrence;
- (id <JBTTask_TaskEdit>)clearDueDate;
- (id <JBTTask_TaskEdit>)unsnooze;
- (id <JBTTask_TaskEdit>)setSnoozeConfigWithJBTSnoozeConfig:(id <JBTSnoozeConfig>)arg1;
- (id <JBTTask_TaskEdit>)setDueDateWithLong:(long long)arg1 withJBTTaskDueDate_Type:(JBTTaskDueDate_Type *)arg2;
- (id <JBTTask_TaskEdit>)setDueDateSecWithLong:(long long)arg1;
- (id <JBTTask_TaskEdit>)trash;
- (id <JBTTask_TaskEdit>)moveToInbox;
- (id <JBTTask_TaskEdit>)markAsDone;
- (id <JBTTask_TaskEdit>)clearDisplayedTitle;
- (id <JBTTask_TaskEdit>)setTitleWithNSString:(NSString *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class TSKCountTasksResult, TSKGetTaskListResult, TSKGetTaskRecurrenceResult, TSKGetTaskResult, TSKGetUserExperimentalResult, TSKGetUserMetadataResult, TSKGetUserPrefsResult, TSKListTaskListsResult, TSKListTaskRecurrencesResult, TSKListTasksResult;

@interface TSKQueryResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) TSKCountTasksResult *countTasksResult; // @dynamic countTasksResult;
@property(retain, nonatomic) TSKGetTaskListResult *getTaskListResult; // @dynamic getTaskListResult;
@property(retain, nonatomic) TSKGetTaskRecurrenceResult *getTaskRecurrenceResult; // @dynamic getTaskRecurrenceResult;
@property(retain, nonatomic) TSKGetTaskResult *getTaskResult; // @dynamic getTaskResult;
@property(retain, nonatomic) TSKGetUserExperimentalResult *getUserExperimentalResult; // @dynamic getUserExperimentalResult;
@property(retain, nonatomic) TSKGetUserMetadataResult *getUserMetadataResult; // @dynamic getUserMetadataResult;
@property(retain, nonatomic) TSKGetUserPrefsResult *getUserPrefsResult; // @dynamic getUserPrefsResult;
@property(retain, nonatomic) TSKListTaskListsResult *listTaskListsResult; // @dynamic listTaskListsResult;
@property(retain, nonatomic) TSKListTaskRecurrencesResult *listTaskRecurrencesResult; // @dynamic listTaskRecurrencesResult;
@property(retain, nonatomic) TSKListTasksResult *listTasksResult; // @dynamic listTasksResult;
@property(readonly, nonatomic) int resultOneOfCase; // @dynamic resultOneOfCase;

@end

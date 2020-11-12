//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class TSKFetchTaskLists, TSKFetchTaskRecurrences, TSKFetchTasks, TSKFetchTopCompletedTasks, TSKGetUserExperimental, TSKGetUserMetadata, TSKGetUserPrefs;

@interface TSKFetch : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int fetchOneOfCase; // @dynamic fetchOneOfCase;
@property(retain, nonatomic) TSKFetchTaskLists *fetchTaskLists; // @dynamic fetchTaskLists;
@property(retain, nonatomic) TSKFetchTaskRecurrences *fetchTaskRecurrences; // @dynamic fetchTaskRecurrences;
@property(retain, nonatomic) TSKFetchTasks *fetchTasks; // @dynamic fetchTasks;
@property(retain, nonatomic) TSKFetchTopCompletedTasks *fetchTopCompletedTasks; // @dynamic fetchTopCompletedTasks;
@property(retain, nonatomic) TSKGetUserExperimental *getUserExperimental; // @dynamic getUserExperimental;
@property(retain, nonatomic) TSKGetUserMetadata *getUserMetadata; // @dynamic getUserMetadata;
@property(retain, nonatomic) TSKGetUserPrefs *getUserPrefs; // @dynamic getUserPrefs;

@end

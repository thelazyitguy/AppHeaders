//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TDLTaskList_Structure_Node;

@interface ComGoogleAppsTasksSharedDataProtoBusinessobjectBusinessObjects_BaseTaskListStructureNode : NSObject
{
    TDLTaskList_Structure_Node *data_;
}

- (void)dealloc;
- (id)asProto;
- (id)getSubTaskWithInt:(int)arg1;
- (int)getSubTaskCount;
- (id)getSubTaskList;
- (id)getTaskId;

@end

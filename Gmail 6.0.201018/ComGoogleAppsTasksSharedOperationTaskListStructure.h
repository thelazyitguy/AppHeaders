//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsTasksSharedOperationImmutableTaskListStructure-Protocol.h"

@class NSString;
@protocol JavaUtilList, JavaUtilMap;

@interface ComGoogleAppsTasksSharedOperationTaskListStructure : NSObject <ComGoogleAppsTasksSharedOperationImmutableTaskListStructure>
{
    id <JavaUtilList> topLevelNodes_;
    id <JavaUtilMap> nodesByTaskId_;
}

- (void)dealloc;
- (id)getLocationWithTDLTaskId:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)fillMutableNodesWithInt:(int)arg1 withComGoogleAppsTasksSharedOperationTaskListStructure_MutableNode:(id)arg2 withJavaUtilList:(id)arg3 withJavaUtilList:(id)arg4;
- (id)toProto;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)applyUpdateWithTDLTaskListCompletedInStructureUpdate:(id)arg1;
- (void)applyUpdateWithTDLTaskListStructureUpdate:(id)arg1;
- (id)getAllNodesPreorder;
- (id)getAllNodes;
- (id)getNodeWithTDLTaskId:(id)arg1;
- (id)getTopLevelNodes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

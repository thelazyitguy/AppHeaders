//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSStorageApiFlatGroupStorageCoordinator-Protocol.h"

@class ComGoogleAppsXplatSqlSqlDatabase, NSString;
@protocol DYNSStorageControllersGroupStorageControllerInternal, DYNSStorageControllersTopicMessageStorageControllerInternal, DYNSStorageControllersTopicRangeStorageControllerInternal, DYNSStorageControllersTopicStorageControllerInternal, JavaxInjectProvider;

@interface DYNSStorageCoordinatorsFlatGroupStorageCoordinatorImpl : NSObject <DYNSStorageApiFlatGroupStorageCoordinator>
{
    id <JavaxInjectProvider> executorProvider_;
    id <DYNSStorageControllersGroupStorageControllerInternal> groupStorageController_;
    ComGoogleAppsXplatSqlSqlDatabase *sqlDatabase_;
    id <DYNSStorageControllersTopicStorageControllerInternal> topicStorageController_;
    id <DYNSStorageControllersTopicMessageStorageControllerInternal> topicMessageStorageController_;
    id <DYNSStorageControllersTopicRangeStorageControllerInternal> topicRangeStorageController_;
}

- (void)dealloc;
- (id)getInitialMessagesAroundTimestampInFlatGroupWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)getInitialMessagesAroundMessageIdInFlatGroupWithDYNSCommonGroupId:(id)arg1 withDYNSCommonMessageId:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)regenerateSnippetWithDYNSCommonGroupId:(id)arg1 withDYNSCommonHelperGroupAttributeInfo:(id)arg2;
- (id)getMessagesInRangeInFlatGroupWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;
- (id)getMessagesInFlatGroupWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;
- (id)getInitialMessagesInFlatGroupWithDYNSCommonGroupId:(id)arg1 withInt:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


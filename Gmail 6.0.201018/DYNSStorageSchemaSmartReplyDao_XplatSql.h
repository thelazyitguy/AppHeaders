//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSStorageSchemaSmartReplyDao-Protocol.h"

@class ComGoogleAppsXplatStorageDbAbstractDatabase, NSString;

@interface DYNSStorageSchemaSmartReplyDao_XplatSql : NSObject <DYNSStorageSchemaSmartReplyDao>
{
    ComGoogleAppsXplatStorageDbAbstractDatabase *database_;
}

+ (void)initialize;
- (void)dealloc;
- (id)upsertSmartRepliesWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)getSmartRepliesByTopicIdWithJavaUtilList:(id)arg1;
- (id)getSmartRepliesByGroupIdWithJavaUtilList:(id)arg1;
- (id)deleteSmartRepliesByTopicIdsWithJavaUtilList:(id)arg1;
- (id)deleteSmartRepliesByGroupIdsWithJavaUtilList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

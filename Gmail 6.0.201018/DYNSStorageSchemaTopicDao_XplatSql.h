//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSStorageSchemaTopicDao-Protocol.h"

@class ComGoogleAppsXplatStorageDbAbstractDatabase, NSString;

@interface DYNSStorageSchemaTopicDao_XplatSql : NSObject <DYNSStorageSchemaTopicDao>
{
    ComGoogleAppsXplatStorageDbAbstractDatabase *database_;
}

+ (void)initialize;
- (void)dealloc;
- (id)upsertWithJavaUtilList:(id)arg1;
- (id)upsertWithDYNSStorageSchemaTopicRow:(id)arg1;
- (id)updateSortTimestampMicrosWithDYNSCommonTopicId:(id)arg1 withLong:(long long)arg2;
- (id)updateMuteStateWithDYNSCommonTopicId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)updateMissingReadRepliesCountWithDYNSCommonTopicId:(id)arg1 withInt:(int)arg2;
- (id)isMutedWithDYNSCommonTopicId:(id)arg1;
- (id)hasDefaultTopicsWithDYNSCommonGroupId:(id)arg1;
- (id)getTopicsUnfilteredWithJavaUtilList:(id)arg1;
- (id)getTopicsWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (id)getTopicsWithJavaUtilList:(id)arg1;
- (id)getTopicIdsThatDoNotNeedBackfillingWithJavaUtilList:(id)arg1;
- (id)getTopicWithDYNSCommonTopicId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (id)getSortTimeMicrosWithDYNSCommonTopicId:(id)arg1;
- (id)getSortTimeMicrosWithJavaUtilList:(id)arg1;
- (id)getOldestTopicsWithOffsetWithDYNSCommonGroupId:(id)arg1 withInt:(int)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withLong:(long long)arg5 withLong:(long long)arg6;
- (id)getOldestTopicsInRangeWithDYNSCommonGroupId:(id)arg1 withInt:(int)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withLong:(long long)arg5 withLong:(long long)arg6 withLong:(long long)arg7;
- (id)getOldestTopicSortTimeMicrosWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (id)getNewestTopicsWithOffsetWithDYNSCommonGroupId:(id)arg1 withInt:(int)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withLong:(long long)arg5 withLong:(long long)arg6;
- (id)getNewestTopicsInRangeWithDYNSCommonGroupId:(id)arg1 withInt:(int)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withLong:(long long)arg5 withLong:(long long)arg6 withLong:(long long)arg7;
- (id)getNewestTopicsWithDYNSCommonGroupId:(id)arg1 withInt:(int)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withLong:(long long)arg5;
- (id)getNewestTopicSortTimeMicrosWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (id)getMissingReadRepliesCountWithDYNSCommonTopicId:(id)arg1;
- (id)getLatestUserStatesUpdateTimeMicrosWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (id)getLastSortTimestampMicrosWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withLong:(long long)arg5 withLong:(long long)arg6;
- (id)getLastReadTimeMicrosWithDYNSCommonTopicId:(id)arg1;
- (id)getFirstSortTimestampMicrosWithDYNSCommonGroupId:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withLong:(long long)arg5 withLong:(long long)arg6;
- (id)getExpiredTopicIdsWithJavaUtilList:(id)arg1 withLong:(long long)arg2;
- (id)getExpiredTopicIdsWithLong:(long long)arg1;
- (id)deleteExpiredTopicsWithLong:(long long)arg1;
- (id)deleteByTopicIdWithJavaUtilList:(id)arg1;
- (id)deleteByRowIdWithJavaUtilList:(id)arg1;
- (id)delete__WithJavaUtilList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

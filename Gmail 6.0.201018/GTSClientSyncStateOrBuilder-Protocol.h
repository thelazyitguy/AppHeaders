//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleInternalTasksV1Qualifier, ComGoogleProtobufTimestamp, GTSClientSyncState_FetchScope, TDLEntity, TDLPageToken;
@protocol JavaUtilList;

@protocol GTSClientSyncStateOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleInternalTasksV1Qualifier *)getQualifier;
- (_Bool)hasQualifier;
- (int)getFailedSyncAttemptCount;
- (_Bool)hasFailedSyncAttemptCount;
- (int)getCurrentForceSyncMarker;
- (_Bool)hasCurrentForceSyncMarker;
- (GTSClientSyncState_FetchScope *)getFetchScope;
- (_Bool)hasFetchScope;
- (TDLEntity *)getEntityWithInt:(int)arg1;
- (id <JavaUtilList>)getEntityList;
- (int)getEntityCount;
- (TDLPageToken *)getPageToken;
- (_Bool)hasPageToken;
- (ComGoogleProtobufTimestamp *)getTickleWatermarkClientReceivedTimestamp;
- (_Bool)hasTickleWatermarkClientReceivedTimestamp;
- (ComGoogleProtobufTimestamp *)getTickleWatermark;
- (_Bool)hasTickleWatermark;
- (ComGoogleProtobufTimestamp *)getSyncWatermark;
- (_Bool)hasSyncWatermark;
@end


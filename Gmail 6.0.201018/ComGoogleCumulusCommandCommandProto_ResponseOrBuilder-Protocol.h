//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleCumulusCommandCommandProto_BatchStatus, ComGoogleCumulusCommandCommandProto_LogResponse, ComGoogleCumulusCommandCommandProto_StateResponse, ComGoogleCumulusCommandCommandProto_SyncStatus;
@protocol JavaUtilList;

@protocol ComGoogleCumulusCommandCommandProto_ResponseOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCumulusCommandCommandProto_SyncStatus *)getWorkerSyncStatus;
- (_Bool)hasWorkerSyncStatus;
- (ComGoogleCumulusCommandCommandProto_BatchStatus *)getBatchStatusWithInt:(int)arg1;
- (id <JavaUtilList>)getBatchStatusList;
- (int)getBatchStatusCount;
- (ComGoogleCumulusCommandCommandProto_StateResponse *)getStateResponseWithInt:(int)arg1;
- (id <JavaUtilList>)getStateResponseList;
- (int)getStateResponseCount;
- (ComGoogleCumulusCommandCommandProto_LogResponse *)getLogResponseWithInt:(int)arg1;
- (id <JavaUtilList>)getLogResponseList;
- (int)getLogResponseCount;
@end


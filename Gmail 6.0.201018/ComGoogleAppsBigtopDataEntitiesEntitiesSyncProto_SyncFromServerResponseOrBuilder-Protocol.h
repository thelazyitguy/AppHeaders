//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity, ComGoogleNetUtilErrorCodes_Code, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopDataEntitiesEntitiesSyncProto_SyncFromServerResponseOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleNetUtilErrorCodes_Code *)getErrorCode;
- (_Bool)hasErrorCode;
- (_Bool)getResyncRequired;
- (_Bool)hasResyncRequired;
- (NSString *)getHighWatermark;
- (_Bool)hasHighWatermark;
- (NSString *)getLowWatermark;
- (_Bool)hasLowWatermark;
- (ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity *)getInsertOrUpdateEntitiesWithInt:(int)arg1;
- (id <JavaUtilList>)getInsertOrUpdateEntitiesList;
- (int)getInsertOrUpdateEntitiesCount;
- (ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity *)getReplaceAllEntitiesWithInt:(int)arg1;
- (id <JavaUtilList>)getReplaceAllEntitiesList;
- (int)getReplaceAllEntitiesCount;
- (NSString *)getContinuationToken;
- (_Bool)hasContinuationToken;
@end

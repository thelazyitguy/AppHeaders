//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>
#import <Module_Framework/NSMutableCopying-Protocol.h>
#import <Module_Framework/YTEntity-Protocol.h>

@class NSData, NSDictionary, NSString, YTClientEndpointBuilderDataModel, YTIDownloadStatusEntity, YTOfflineFutureUnplayableInfoModel;
@protocol YTEntityStore;

@interface YTDownloadStatusEntityModel : NSObject <YTEntity, NSCopying, NSMutableCopying>
{
    NSString *_key;
    _Bool _parseAndExtractFieldsFromProtoData;
    _Bool _generateData;
    YTOfflineFutureUnplayableInfoModel *_offlineFutureUnplayableInfo;
    YTClientEndpointBuilderDataModel *_onTapCommandOverrideData;
    NSData *_data;
    NSDictionary *_entityMetadata;
    id <YTEntityStore> _entityStore;
    YTIDownloadStatusEntity *_protoBuf;
}

- (void).cxx_destruct;
@property(copy, nonatomic) YTIDownloadStatusEntity *protoBuf; // @synthesize protoBuf=_protoBuf;
@property(nonatomic) _Bool generateData; // @synthesize generateData=_generateData;
@property(nonatomic) _Bool parseAndExtractFieldsFromProtoData; // @synthesize parseAndExtractFieldsFromProtoData=_parseAndExtractFieldsFromProtoData;
@property(readonly, nonatomic) id <YTEntityStore> entityStore; // @synthesize entityStore=_entityStore;
@property(copy, nonatomic) NSDictionary *entityMetadata; // @synthesize entityMetadata=_entityMetadata;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) YTClientEndpointBuilderDataModel *onTapCommandOverrideData; // @synthesize onTapCommandOverrideData=_onTapCommandOverrideData;
@property(retain, nonatomic) YTOfflineFutureUnplayableInfoModel *offlineFutureUnplayableInfo; // @synthesize offlineFutureUnplayableInfo=_offlineFutureUnplayableInfo;
- (_Bool)isEqualEntityValue:(id)arg1;
- (void)generateDataIfNecessary;
- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)allAssociationKeys;
- (_Bool)isEqualToEntity:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long lastUpdatedTimestampSeconds;
@property(readonly, nonatomic) _Bool hasLastUpdatedTimestampSeconds;
@property(readonly, nonatomic) _Bool isFutureUnplayable;
@property(readonly, nonatomic) _Bool hasIsFutureUnplayable;
@property(readonly, nonatomic) _Bool showDownloadBadge;
@property(readonly, nonatomic) _Bool hasShowDownloadBadge;
@property(readonly, nonatomic) _Bool isPartiallyPlayable;
@property(readonly, nonatomic) _Bool hasIsPartiallyPlayable;
@property(readonly, nonatomic) NSString *downloadStatusMessage;
@property(readonly, nonatomic) float previousDownloadProgress;
@property(readonly, nonatomic) _Bool hasPreviousDownloadProgress;
@property(readonly, nonatomic) float downloadProgress;
@property(readonly, nonatomic) _Bool hasDownloadProgress;
@property(readonly, nonatomic) int downloadState;
@property(readonly, nonatomic) _Bool hasDownloadState;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly, copy, nonatomic) NSString *entityKey;
- (id)init;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBuf:(id)arg3 protoBufData:(id)arg4 entityMetadata:(id)arg5;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBufData:(id)arg3 entityMetadata:(id)arg4;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBufData:(id)arg3;
- (id)initWithEntityStore:(id)arg1 protoBuf:(id)arg2 entityMetadata:(id)arg3;
- (id)initWithEntityStore:(id)arg1 protoBuf:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


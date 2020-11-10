//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTDownloadStatusEntityModel.h>

#import <Module_Framework/YTMutableEntity-Protocol.h>

@class NSData, NSDictionary, NSString, YTClientEndpointBuilderDataModel, YTOfflineFutureUnplayableInfoModel;

@interface YTMutableDownloadStatusEntityModel : YTDownloadStatusEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *entityMetadata; // @dynamic entityMetadata;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) YTClientEndpointBuilderDataModel *onTapCommandOverrideData; // @dynamic onTapCommandOverrideData;
@property(nonatomic) long long lastUpdatedTimestampSeconds; // @dynamic lastUpdatedTimestampSeconds;
@property(retain, nonatomic) YTOfflineFutureUnplayableInfoModel *offlineFutureUnplayableInfo; // @dynamic offlineFutureUnplayableInfo;
@property(nonatomic) _Bool isFutureUnplayable; // @dynamic isFutureUnplayable;
@property(nonatomic) _Bool showDownloadBadge; // @dynamic showDownloadBadge;
@property(nonatomic) _Bool isPartiallyPlayable; // @dynamic isPartiallyPlayable;
@property(retain, nonatomic) NSString *downloadStatusMessage; // @dynamic downloadStatusMessage;
@property(nonatomic) float previousDownloadProgress; // @dynamic previousDownloadProgress;
@property(nonatomic) float downloadProgress; // @dynamic downloadProgress;
@property(nonatomic) int downloadState; // @dynamic downloadState;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


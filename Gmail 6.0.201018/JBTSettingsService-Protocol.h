//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopDataEntitiesEntitiesProto_ChangeEntityRequest, ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncRequest, ComGoogleAppsBigtopDataSettingsSettingsProto_ListSettingsRequest;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol JBTSettingsService <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getSyncStatus;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)listSettingsWithComGoogleAppsBigtopDataSettingsSettingsProto_ListSettingsRequest:(ComGoogleAppsBigtopDataSettingsSettingsProto_ListSettingsRequest *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)syncWithComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncRequest:(ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncRequest *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)changeSettingWithComGoogleAppsBigtopDataEntitiesEntitiesProto_ChangeEntityRequest:(ComGoogleAppsBigtopDataEntitiesEntitiesProto_ChangeEntityRequest *)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopDataItemsSyncConfigApiLabelSyncSettingsConfig, ComGoogleAppsBigtopDataItemsSyncConfigApiPushNotificationConfig;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol JBTSyncSettings <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)setPushNotificationConfigWithComGoogleAppsBigtopDataItemsSyncConfigApiPushNotificationConfig:(ComGoogleAppsBigtopDataItemsSyncConfigApiPushNotificationConfig *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getPushNotificationConfig;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)setLabelSyncSettingsConfigWithComGoogleAppsBigtopDataItemsSyncConfigApiLabelSyncSettingsConfig:(ComGoogleAppsBigtopDataItemsSyncConfigApiLabelSyncSettingsConfig *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getLabelSyncSettingsConfig;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)setDaysToSyncWithInt:(int)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getDaysToSync;
- (_Bool)daysToSyncSettingEnabled;
@end

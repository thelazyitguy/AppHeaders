//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncV2CoordinatorsNotificationManagerImpl_FilterNotificationsResult.h"

@class ComGoogleCommonCollectImmutableMap, DYNSDataModelsBackgroundSyncData;

@interface DYNSSyncV2CoordinatorsAutoValue_NotificationManagerImpl_FilterNotificationsResult : DYNSSyncV2CoordinatorsNotificationManagerImpl_FilterNotificationsResult
{
    ComGoogleCommonCollectImmutableMap *eventsByGroup_;
    DYNSDataModelsBackgroundSyncData *updatedBackgroundSyncData_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getUpdatedBackgroundSyncData;
- (id)getEventsByGroup;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray;

@interface YTIKidsOfflineConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int defaultStorageLimitMinutes; // @dynamic defaultStorageLimitMinutes;
@property(nonatomic) _Bool enableApprovedOnlyAutoOffline; // @dynamic enableApprovedOnlyAutoOffline;
@property(nonatomic) _Bool enableOfflineLockPromo; // @dynamic enableOfflineLockPromo;
@property(nonatomic) _Bool enableProgressThumbnails; // @dynamic enableProgressThumbnails;
@property(nonatomic) _Bool hasDefaultStorageLimitMinutes; // @dynamic hasDefaultStorageLimitMinutes;
@property(nonatomic) _Bool hasEnableApprovedOnlyAutoOffline; // @dynamic hasEnableApprovedOnlyAutoOffline;
@property(nonatomic) _Bool hasEnableOfflineLockPromo; // @dynamic hasEnableOfflineLockPromo;
@property(nonatomic) _Bool hasEnableProgressThumbnails; // @dynamic hasEnableProgressThumbnails;
@property(nonatomic) _Bool hasLowBatteryCutoff; // @dynamic hasLowBatteryCutoff;
@property(nonatomic) _Bool hasMaxStorageLimitMinutes; // @dynamic hasMaxStorageLimitMinutes;
@property(nonatomic) _Bool hasMinStorageLimitMinutes; // @dynamic hasMinStorageLimitMinutes;
@property(nonatomic) _Bool hasMinimumAutoOfflineTaskIntervalSeconds; // @dynamic hasMinimumAutoOfflineTaskIntervalSeconds;
@property(nonatomic) _Bool hasNumOfflineVideosVisitsToHideLockPromo; // @dynamic hasNumOfflineVideosVisitsToHideLockPromo;
@property(nonatomic) float lowBatteryCutoff; // @dynamic lowBatteryCutoff;
@property(nonatomic) int maxStorageLimitMinutes; // @dynamic maxStorageLimitMinutes;
@property(nonatomic) int minStorageLimitMinutes; // @dynamic minStorageLimitMinutes;
@property(nonatomic) int minimumAutoOfflineTaskIntervalSeconds; // @dynamic minimumAutoOfflineTaskIntervalSeconds;
@property(retain, nonatomic) NSMutableArray *minutesToMbConversionsArray; // @dynamic minutesToMbConversionsArray;
@property(readonly, nonatomic) unsigned long long minutesToMbConversionsArray_Count; // @dynamic minutesToMbConversionsArray_Count;
@property(nonatomic) int numOfflineVideosVisitsToHideLockPromo; // @dynamic numOfflineVideosVisitsToHideLockPromo;

@end


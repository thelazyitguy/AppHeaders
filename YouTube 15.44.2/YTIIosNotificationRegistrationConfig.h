//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIBadgeCountSupportedConfigs;

@interface YTIIosNotificationRegistrationConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIBadgeCountSupportedConfigs *badgeCountConfig; // @dynamic badgeCountConfig;
@property(retain, nonatomic) NSMutableArray *categoriesArray; // @dynamic categoriesArray;
@property(readonly, nonatomic) unsigned long long categoriesArray_Count; // @dynamic categoriesArray_Count;
@property(nonatomic) _Bool hasBadgeCountConfig; // @dynamic hasBadgeCountConfig;
@property(retain, nonatomic) NSMutableArray *notificationTypesArray; // @dynamic notificationTypesArray;
@property(readonly, nonatomic) unsigned long long notificationTypesArray_Count; // @dynamic notificationTypesArray_Count;

@end


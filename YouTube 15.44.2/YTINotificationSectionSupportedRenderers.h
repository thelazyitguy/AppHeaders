//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTINotificationRenderer, YTINotificationSectionHeaderRenderer;

@interface YTINotificationSectionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTINotificationRenderer *notificationRenderer; // @dynamic notificationRenderer;
@property(retain, nonatomic) YTINotificationSectionHeaderRenderer *notificationSectionHeaderRenderer; // @dynamic notificationSectionHeaderRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;

@end


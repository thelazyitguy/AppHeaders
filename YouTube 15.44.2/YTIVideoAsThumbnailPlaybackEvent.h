//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIVideoAsThumbnailInfo;

@interface YTIVideoAsThumbnailPlaybackEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasIsCachedPlayback; // @dynamic hasIsCachedPlayback;
@property(nonatomic) _Bool hasNetworkType; // @dynamic hasNetworkType;
@property(nonatomic) _Bool hasVideoAsThumbnailInfo; // @dynamic hasVideoAsThumbnailInfo;
@property(nonatomic) _Bool isCachedPlayback; // @dynamic isCachedPlayback;
@property(nonatomic) int networkType; // @dynamic networkType;
@property(retain, nonatomic) YTIVideoAsThumbnailInfo *videoAsThumbnailInfo; // @dynamic videoAsThumbnailInfo;

@end


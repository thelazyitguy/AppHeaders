//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTOfflineMessageFormatter : NSObject
{
}

+ (id)nextFutureUnplayableDateWithVideos:(id)arg1;
+ (id)futureUnplayableMessageForDownloadsPageBannerWithVideos:(id)arg1;
+ (id)futureUnplayableMessageForPlaylistWithReason:(int)arg1 remainingTime:(double)arg2;
+ (id)futureUnplayableMessageForPlaylistWithVideos:(id)arg1;
+ (id)unplayableMessageForVideoWithReason:(int)arg1;
+ (id)futureUnplayableMessageForVideoWithReason:(int)arg1 remainingTime:(double)arg2;

@end


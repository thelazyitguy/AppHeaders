//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;

@interface MLOfflineVideoCache : NSObject
{
    NSMutableDictionary *_videoStatus;
    unsigned long long _repoPurgeCounter;
    NSCountedSet *_videoPurgeCounters;
}

- (void).cxx_destruct;
- (_Bool)videoIsBeingPurged:(id)arg1;
- (int)videoStatusForVideo:(id)arg1;
- (void)purgeAllVideosImmediately;
- (void)finishPurgingAllVideos;
- (void)startPurgingAllVideos;
- (void)purgeVideoImmediately:(id)arg1;
- (void)finishPurgingVideo:(id)arg1;
- (void)startPurgingVideo:(id)arg1;
- (void)setVideoStatus:(int)arg1 forVideo:(id)arg2;
- (void)addVideoStatus:(id)arg1;
- (id)init;

@end


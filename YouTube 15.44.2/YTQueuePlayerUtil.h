//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTQueuePlayerUtil : NSObject
{
}

+ (void)setInitialFormatConstraintsOnPlayerItem:(id)arg1 gimme:(id)arg2;
+ (_Bool)isQueuePlayerEnabled:(id)arg1 withPlayerPool:(id)arg2;
+ (void)removeSegment:(id)arg1 queuePlayer:(id)arg2;
+ (void)enqueueVideo:(id)arg1 queuePlayer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)createPlayerItemSegmentForVideo:(id)arg1 queuePlayer:(id)arg2 error:(id *)arg3;
+ (id)createPlayerItemForVideo:(id)arg1 queuePlayer:(id)arg2 error:(id *)arg3;

@end


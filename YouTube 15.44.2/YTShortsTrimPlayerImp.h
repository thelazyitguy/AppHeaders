//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTShortsCreationPlayerMediaTimeObserver-Protocol.h"
#import "YTShortsTrimPlayer-Protocol.h"

@class NSHashTable, NSString, YTShortsCreationPlaybackViewController;

@interface YTShortsTrimPlayerImp : NSObject <YTShortsCreationPlayerMediaTimeObserver, YTShortsTrimPlayer>
{
    YTShortsCreationPlaybackViewController *_playerViewController;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)shortsCreationPlayer:(id)arg1 mediaTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 precision:(CDStruct_1b6d18a9)arg2 completion:(CDUnknownBlockType)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)setLoopSeekPrecision:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)loopSeekPrecision;
- (void)removePlayerObserver:(id)arg1;
- (void)addPlayerObserver:(id)arg1;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
- (void)pause;
- (void)play;
- (id)initWithShortsCreationPlayerViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol MLPlayer;

@interface MLPlayerEventCenter : NSObject
{
    id <MLPlayer> _player;
    NSHashTable *_AVPlayerDataTransferObservers;
    NSHashTable *_droppedFramesObservers;
    NSHashTable *_stateObservers;
    NSHashTable *_viewportSizeObservers;
    NSHashTable *_rateObservers;
    NSHashTable *_volumeObservers;
}

- (void).cxx_destruct;
- (void)removeAllObservers;
- (void)removeObserverForAllEvents:(id)arg1;
- (void)addVolumeObserver:(id)arg1;
- (void)addViewportSizeObserver:(id)arg1;
- (void)addStateObserver:(id)arg1;
- (void)addDroppedFrameCountObserver:(id)arg1;
- (void)addRateObserver:(id)arg1;
- (void)addAVPlayerDataTransferObserver:(id)arg1;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (void)broadcastVolumeChange:(float)arg1;
- (void)broadcastViewportSizeChange:(id)arg1;
- (void)broadcastStateChangeEvent:(id)arg1;
- (void)broadcastRateChange:(float)arg1;
- (void)broadcastDroppedFramesWithCount:(int)arg1;
- (void)broadcastAVPlayerDataTransferWithBytes:(long long)arg1 transferTime:(double)arg2;

@end


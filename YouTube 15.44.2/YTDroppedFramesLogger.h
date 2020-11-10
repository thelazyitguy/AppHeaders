//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTDroppedFramesObserver-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class NSString, YTSystemHealthTransmitterRegistry;

@interface YTDroppedFramesLogger : NSObject <YTDroppedFramesObserver, YTSystemNotificationsObserver>
{
    YTSystemHealthTransmitterRegistry *_transmitterRegistry;
}

- (void).cxx_destruct;
- (void)appDidEnterBackground:(id)arg1;
- (void)onFramesDropped:(id)arg1 fromMediaTime:(double)arg2 toMediaTime:(double)arg3;
- (void)startLoggingFrameDrops;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


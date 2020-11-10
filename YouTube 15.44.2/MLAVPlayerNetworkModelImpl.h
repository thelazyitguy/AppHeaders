//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLAVPlayerNetworkModel-Protocol.h>
#import <Module_Framework/YTHotConfigObserver-Protocol.h>

@class HAMSlidingPercentile, MLNetworkStatsProvider, NSString, YTHotConfig;

@interface MLAVPlayerNetworkModelImpl : NSObject <YTHotConfigObserver, MLAVPlayerNetworkModel>
{
    MLNetworkStatsProvider *_networkStatsProvider;
    YTHotConfig *_hotConfig;
    HAMSlidingPercentile *_bandwidthSlidingPercentile;
}

- (void).cxx_destruct;
- (void)hotConfigDidChange:(id)arg1;
- (void)player:(id)arg1 AVPlayerDidTransferBytes:(long long)arg2 transferTime:(double)arg3;
@property(readonly, nonatomic) long long bitrate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


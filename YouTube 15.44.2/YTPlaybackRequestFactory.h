//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, IGDManager, YTHotConfig, YTLastActionController, YTPlayerRequestFactory;
@protocol YTAdInnerTubeConfig, YTAdsFrequencyCapProtocol, YTReachabilityController;

@interface YTPlaybackRequestFactory : NSObject
{
    id <YTAdsFrequencyCapProtocol> _adsFrequencyCap;
    id <YTAdInnerTubeConfig> _adInnerTubeConfig;
    YTLastActionController *_lastActionController;
    id <YTReachabilityController> _reachabilityController;
    YTPlayerRequestFactory *_protoRequestFactory;
    YTHotConfig *_hotConfig;
    IGDManager *_iosguardManager;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)playbackRequestForNavigationEndpoint:(id)arg1 autoplay:(_Bool)arg2 autonav:(_Bool)arg3 flungFromMDX:(_Bool)arg4 expiredForSeconds:(int)arg5 visibility:(int)arg6 viewportSizeProvider:(id)arg7 mediaStickySettings:(id)arg8 playerRequestDecorator:(id)arg9 prefetchContext:(id)arg10 latencyLogger:(id)arg11;
- (id)playbackContextForAutoplay:(_Bool)arg1 autonav:(_Bool)arg2 flungFromMDX:(_Bool)arg3 visibility:(int)arg4;
- (id)playbackRequestForPlayerTransition:(id)arg1 visibility:(int)arg2 viewportSizeProvider:(id)arg3 mediaStickySettings:(id)arg4 prefetchContext:(id)arg5;
- (id)playbackRequestForPlayerTransition:(id)arg1 visibility:(int)arg2 viewportSizeProvider:(id)arg3 mediaStickySettings:(id)arg4;
- (id)init;

@end


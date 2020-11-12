//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController, YTPlaybackData, YTTimingPlayerResponderEventData;
@protocol YTAdVideoPlayerOverlayProtocol, YTInstreamAd, YTInstreamAdBreak;

@interface YTAdInterrupt : NSObject
{
    id <YTInstreamAd> _ad;
    id <YTInstreamAdBreak> _adBreak;
    double _initialMediaTime;
    YTPlaybackData *_adPlaybackData;
    UIViewController<YTAdVideoPlayerOverlayProtocol> *_adOverlay;
    YTTimingPlayerResponderEventData *_timingData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTTimingPlayerResponderEventData *timingData; // @synthesize timingData=_timingData;
@property(retain, nonatomic) UIViewController<YTAdVideoPlayerOverlayProtocol> *adOverlay; // @synthesize adOverlay=_adOverlay;
@property(retain, nonatomic) YTPlaybackData *adPlaybackData; // @synthesize adPlaybackData=_adPlaybackData;
@property(nonatomic) double initialMediaTime; // @synthesize initialMediaTime=_initialMediaTime;
@property(readonly, nonatomic) id <YTInstreamAdBreak> adBreak; // @synthesize adBreak=_adBreak;
@property(readonly, nonatomic) id <YTInstreamAd> ad; // @synthesize ad=_ad;
@property(readonly, nonatomic) _Bool isAdIntro;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithAd:(id)arg1 adBreak:(id)arg2 timingData:(id)arg3;

@end

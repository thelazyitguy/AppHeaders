//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTDAIAdTrackingController, YTPlayerResponse;
@protocol YTInstreamAd, YTInstreamAdBreak;

@interface YTAdState : NSObject
{
    id <YTInstreamAd> _ad;
    id <YTInstreamAdBreak> _adBreak;
    YTPlayerResponse *_adPlayerResponse;
    double _adStartTime;
    YTDAIAdTrackingController *_adTrackingController;
    YTDAIAdTrackingController *_adBreakTrackingController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTDAIAdTrackingController *adBreakTrackingController; // @synthesize adBreakTrackingController=_adBreakTrackingController;
@property(retain, nonatomic) YTDAIAdTrackingController *adTrackingController; // @synthesize adTrackingController=_adTrackingController;
@property(nonatomic) double adStartTime; // @synthesize adStartTime=_adStartTime;
@property(readonly, nonatomic) YTPlayerResponse *adPlayerResponse; // @synthesize adPlayerResponse=_adPlayerResponse;
@property(readonly, nonatomic) id <YTInstreamAdBreak> adBreak; // @synthesize adBreak=_adBreak;
@property(readonly, nonatomic) id <YTInstreamAd> ad; // @synthesize ad=_ad;
- (_Bool)isEqualToAdState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isLastAdInAdBreak;
- (id)initWithAd:(id)arg1 adBreak:(id)arg2 adPlayerResponse:(id)arg3;

@end


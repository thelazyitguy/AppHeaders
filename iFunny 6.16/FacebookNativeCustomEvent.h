//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPNativeCustomEvent.h>

#import <Funny/FBNativeAdDelegate-Protocol.h>

@class FBNativeAd, NSString;

@interface FacebookNativeCustomEvent : MPNativeCustomEvent <FBNativeAdDelegate>
{
    _Bool _videoEnabled;
    NSString *_adNetworkName;
    NSString *_tierName;
    FBNativeAd *_fbNativeAd;
}

+ (void)setVideoEnabled:(_Bool)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(retain, nonatomic) FBNativeAd *fbNativeAd; // @synthesize fbNativeAd=_fbNativeAd;
@property(copy, nonatomic) NSString *tierName; // @synthesize tierName=_tierName;
@property(copy, nonatomic) NSString *adNetworkName; // @synthesize adNetworkName=_adNetworkName;
- (void)dealloc;
- (void)nativeAd:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdDidLoad:(id)arg1;
- (void)requestAdWithCustomEventInfo:(id)arg1 adMarkup:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

